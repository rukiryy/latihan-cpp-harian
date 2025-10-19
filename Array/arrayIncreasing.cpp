#include <iostream>
using namespace std;

void input(int &size){
    cin >> size;
      
}

void perhitungan(int &size){
    int nums[size];
    int angka = 0;
     
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(nums[j] >= nums[j+1]){
                while(nums[j+1] <= nums[j]){
                    nums[j+1]++;
                    angka++;
                }
            }
        } 
    }
    cout << angka << endl;
}



int main(){
    int size;
    input(size);
    int nums[size];
    perhitungan(size);
    
    

    

}