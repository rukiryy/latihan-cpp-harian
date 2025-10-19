#include <iostream>
using namespace std;

void input(int accounts[][3], int &sizei, int &sizej);
int perhitungan(int accounts[][3], int &sizei, int &sizej);


int main(){
    int accounts[10][3], sizei, sizej;
    input(accounts, sizei, sizej);
    cout << perhitungan(accounts, sizei, sizej);
}

void input(int accounts[][3], int &sizei, int &sizej){
    cin >> sizei;
    cin >> sizej;

    for(int i = 0; i < sizei; i++){
        for(int j = 0; j < sizej; j++){
            cin >> accounts[i][j];
        }        
    }
}

int perhitungan(int accounts[][3], int &sizei, int &sizej){
    int kekayaanMax = 0;
    int maxTotal;

    for(int i = 0; i < sizei; i++){
        int maxBener = 0;
        for(int j = 0; j < sizej; j++){
            maxBener += accounts[i][j]; 
        }
        if (maxBener > kekayaanMax) {
            kekayaanMax = maxBener;
        }
    }

    return kekayaanMax;

}