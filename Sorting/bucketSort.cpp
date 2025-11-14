#include <iostream>
using namespace std;

void input(int &n, int arr[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void output(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    int bucketCount = n;
    int buckets[100][100];
    int bucketSize[100] = {0};

    for (int i = 0; i < n; i++) {
        int index = (arr[i] * bucketCount) / (maxVal + 1);
        buckets[index][bucketSize[index]++] = arr[i];
    }

    int idx = 0;
    for (int i = 0; i < bucketCount; i++) {
        insertionSort(buckets[i], bucketSize[i]);
        for (int j = 0; j < bucketSize[i]; j++) {
            arr[idx++] = buckets[i][j];
        }
    }
}

int main() {
    int n;
    int arr[100];
    input(n, arr);
    bucketSort(arr, n);
    output(n, arr);
    return 0;
}