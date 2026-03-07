#include<iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n ; i++)
    {
        for(j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(A[i], A[k]);
    }
}

int main()
{
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    // Sorting the array using Selection Sort
    SelectionSort(A, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}