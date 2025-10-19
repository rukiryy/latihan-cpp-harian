#include <iostream>
using namespace std;

void input(int &size){
    cin >> size;
}

void perhitungan(int &size){
    int height[size];
    int temp;
    int hasil = 0;
    int expected[size];

    for(int i = 0; i < size; i++){
        cin >> height[i];
    }
    
    for(int i = 0; i < size; i++){
        expected[i] = height[i];
    }
    
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(height[j] > height[j+1]){
                temp = height[j];
                height[j] = height[j+1];
                height[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        if(expected[i] != height[i]){
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