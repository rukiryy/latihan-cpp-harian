#include <iostream>
using namespace std;

void sortin(int size, int arr[]);

int main(){
    int arr[] = {10, 3 , 8 , 7 , 1 ,5 ,9, 2, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortin(size, arr);
    for(int i = 0; i < size; i ++){
        cout << arr[i] << " ";
    }

}

void sortin(int size, int arr[] ){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                
            }
        }
    }
}