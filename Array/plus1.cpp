#include <iostream>
using namespace std;

void input(int &size);
void perhitungan(int &size);

int main(){
    int size;
    input(size);
    int digits[size];
    perhitungan(size);
        
}

void input(int &size){
    cin >> size;   
}

void perhitungan(int &size){
    int digits[size];
    for(int  i = 0; i < size; i++){
        cin >> digits[i];
    }
    
    for(int i = size - 1; i < size; i++){
        digits[i] += 1;
        if(digits[i] == 10){
            digits[i]= digits[i]  % 9;
         }
         
     }        
    for(int i = 0; i < size; i++){
       cout << digits[i] << " ";
    }
}

