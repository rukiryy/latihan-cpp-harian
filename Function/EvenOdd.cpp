#include <iostream>
using namespace std;
void input(int &n){
    cin >> n;
}

void checking(int n){
    if(n % 2 == 0){
        cout << n << " adalah genap";
    } else {
        cout << n << " adalah ganjil";
    }
    
}

int main(){
    int n;
    input(n);
    checking(n);
}