#include <iostream>
using namespace std;

void inputt(int &panjangArray, int &n){
    cout << "input panjang array: ";
    cin >> panjangArray;
    
    cout << "input berapa angka yang ingin di pindahkan: ";
    cin >> n;
}

void tuker(int panjangArray, int n){
    int ar[panjangArray];
    cout << "input " << panjangArray << " elemen: ";
    for(int i = 0;i < panjangArray; i++){
        cin >> ar[i];
    } 
    
    for(int i = panjangArray - n; i < panjangArray; ++i){
        cout << " " << ar[i];
    }
    
    for(int i = 0; i < panjangArray - n; ++i){
        cout << " " << ar[i];
    }
}


int main(){
    int panjangArray;
    int n;
    inputt(panjangArray, n);
    tuker(panjangArray, n);
  
}