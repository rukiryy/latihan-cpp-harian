#include <iostream>
using namespace std;

void input(int &n, int arr[]){
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void tukar(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void selSort(int n, int arr[]){
    int position;
    for(int i = 0; i < n-1; i++){
        position = i;
        for(int j = i+1; j < n; j++){
            if(arr[position] > arr[j]){
                position = j;
            }
        }
        tukar(arr[i], arr[position]);
    }
    

}

int main(){
    int n;
    int arr[100];
    input(n, arr);
    selSort(n, arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    
}