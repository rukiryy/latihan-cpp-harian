#include <iostream>
using namespace std;



void input(int &size){
    cin >> size;
}

void perhitungan(int &size){
    int nums[size];
    int digits = 0;
    int hasil = 0;
    
    for(int i = 0; i < size; i++){
        cin >> nums[i];
        }
     
    for(int i = 0; i < size; i++){

        while(nums[i] != 0){
            nums[i] = nums[i] / 10;
            digits++;
            
        }
        if(digits % 2 == 0){
            hasil++;
        }
        
    }
    cout << hasil;
    
}

int main(){
    int size;
    input(size);
    perhitungan(size);
}