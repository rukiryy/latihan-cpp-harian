#include <iostream>
using namespace std;

void input(int &size){
    cin >> size;
}
void perhitungan(int &size){
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i]<< " ";
        }
    }
    for(int i=0; i<size;i++) {
        if(arr[i] % 2 !=0){
            cout << arr[i]<< " ";
        }
    }
}

int main(){
    int size;
    input(size);
    int arr[size];
    perhitungan(size);
}