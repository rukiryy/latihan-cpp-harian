#include <iostream>
using namespace std;

void input(int &size){
    cin >> size;
    
}

void perhitungan(int &size){
    int nums[size];
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    for(int i = 1; i < size; i++){
        nums[i] = nums[i] + nums[i-1];
    }
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    int size;
    input(size);
    int nums[size];
    perhitungan(size);

}