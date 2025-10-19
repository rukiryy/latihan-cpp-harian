#include <iostream>
using namespace std;

void input(int &baris, int& kolom, int arr1[][100], int arr2[][100]){
    cin >> baris;
    cin >> kolom;

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cin >> arr2[i][j];
        }
    }
}

void pertambahan(int &baris, int& kolom, int arr1[][100], int arr2[][100]){
    int hasil[100][100];
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            hasil[i][j] = arr1[i][j] + arr2 [i][j];
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

}

void pengurangan(int &baris, int& kolom, int arr1[][100], int arr2[][100]){
    int hasil[100][100];
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            hasil[i][j] = arr1[i][j] - arr2 [i][j];
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    int baris, kolom;
    int arr1[100][100], arr2[100][100];
    input(baris, kolom, arr1, arr2);
    pertambahan(baris, kolom, arr1, arr2);
    pengurangan(baris, kolom, arr1, arr2);
}

