#include <iostream>
using namespace std;

void input(int &n, int arr[]){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void tukar(int &a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            tukar(arr[i], arr[j]);
        }
    }
    tukar(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
    }
}

int main() {
    int arr[100];
    int n;

    input(n, arr);

    quickSort(arr, 0, n - 1);

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}






