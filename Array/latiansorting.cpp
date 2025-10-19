#include <iostream>
using namespace std; 

void input(int& size){
    cin >> size;
}

void tuker(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}

void perhitungan(int &size){
    int arr[size];
    int temp;
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    
    for(int i = 0; i < size - 1; i++ ){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                tuker(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int size;
    input(size);
    perhitungan(size);

    

}