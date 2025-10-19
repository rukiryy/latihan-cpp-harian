#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

int perhitungan(int n){
    int hasil = 1;
    for (int i = n; i >= 1; i--){
        hasil *= i;
    }
    return hasil;
}

int main(){
    int n;
    input(n);
    cout << perhitungan(n);
}
