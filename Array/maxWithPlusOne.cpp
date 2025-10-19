#include <iostream>
using namespace std;

void input(int &size){
    cin >> size;
}

void perhitungan(int &size){
    int nums[size];
    int angka1;
    int angka2;
    int hasil = 0;

    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(nums[j] < nums [j+1]){
            int temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;
            }
        }
    }
    hasil = (nums[0] - 1) * (nums[1] - 1);
    cout << hasil;
}

int main(){
    int size;
    input(size);
    perhitungan(size);

}