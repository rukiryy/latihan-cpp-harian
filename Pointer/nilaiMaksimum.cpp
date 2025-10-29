#include <iostream>
using namespace std;

void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int nilaiMaks(int *ptr, int n){
    int maks = *ptr; 
    for(int i = 1; i < n; i++){
        if(*(ptr + i) > maks){
            maks = *(ptr + i);
        }
    }
    return maks;
}

int main(){
    int n; 
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan " << n << " angka: ";
    input(arr, n);
    
    
    cout << "Nilai maksimum = " << nilaiMaks(arr, n) << endl;

    return 0;
}