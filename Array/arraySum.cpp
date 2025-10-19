#include <iostream>
using namespace std;

int arr(int ar[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int ar[1000];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    cout << arr(ar, n) << endl;
}