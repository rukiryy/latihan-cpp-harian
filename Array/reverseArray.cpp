#include <iostream>
using namespace std;

void reversee(string s){
    for(int i = s.length() - 1; i >= 0; i--){
        cout << s[i];
    }
}

int main(){
    string inputt;
    cin >> inputt;

    reversee(inputt);
}

