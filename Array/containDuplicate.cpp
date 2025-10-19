#include <iostream>
using namespace std;


bool checkingg(int ar[], int size){
    
    for(int i = 0; i < size - 1; i++){
        if(ar[i] == ar[i+1]){
            return true;
        } 

    }
    return false;
    
}

int main(){
    int size;
    cin >> size;
    int ar[size];
    for(int i = 0; i < size; i++){
        cin >> ar[i];
    }
    cout << checkingg(ar, size);

    
}