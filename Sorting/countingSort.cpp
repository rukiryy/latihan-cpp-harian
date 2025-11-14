#include <iostream>
using namespace std;

void input(int &n, int arr[]){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void countingSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    int count[max + 1] = {0};

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i]-- > 0) {
            arr[index++] = i;
        }
    }
}

int main() {

    int arr[100];
    int n;

    input(n, arr);
    countingSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
