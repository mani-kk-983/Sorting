#include<iostream>
using namespace std;
void BubbleSort(int A[], int n) {
    int flag = 0;
    for (int i = 0; i < n-1; i++) {
        flag = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    // Sorting the array using Bubble Sort
    BubbleSort(A, n);
    printArray(A, n);
    return 0;
}