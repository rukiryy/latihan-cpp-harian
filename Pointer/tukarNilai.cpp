#include <iostream>
using namespace std;

void tukar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a;
    int b;
    cin >> a >> b;

    cout << "Sebelum ditukar: A = " << a << ", " << "B = " << b << endl;
    tukar(&a,&b);
    cout << "Sebelum ditukar: A = " << a << ", " << "B = " << b << endl;;
}