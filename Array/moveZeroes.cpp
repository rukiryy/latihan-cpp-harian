#include <iostream>
using namespace std;

void input(int& panjangArray){
    cin >> panjangArray;
    
}

void tuker(int panjangArray){
    int ar[panjangArray];
    
    for(int i = 0; i < panjangArray; i++){
    cin >> ar[i];
    }
    
    int ar2[panjangArray];
    int size = 0;
    
    for(int i = 0; i < panjangArray; i++){
        if(ar[i] != 0){
            ar2[size] = ar[i];
            size++;
            
        }   
    }
    while(size < panjangArray){
        ar2[size] = 0;
        size++;
    }
    for(int i = 0; i < size; i++){
        cout << ar2[i] << " ";
    }
}

int main(){
    int panjangArray;
    input(panjangArray);
    tuker(panjangArray);
}
    