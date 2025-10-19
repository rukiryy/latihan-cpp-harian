#include <iostream>
using namespace std;
void kata(string Kata){
    cout << Kata << endl;
}

void berapa(int n, string Kata){
    for (int i = 1; i <= n; i++){
        kata(Kata);
    }

}

int main(){
    berapa(5, "anjing");

}