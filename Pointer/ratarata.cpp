#include <iostream>
using namespace std;

void input(int arr[], int n){
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void ratarata(int *ptr, int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += *(ptr + i);
    }
    float rata = total / n;
    cout << rata;
}

int main(){
    int n; 
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan " << n << " angka: ";
    input(arr, n);

    ratarata(arr, n);

    return 0;
}

