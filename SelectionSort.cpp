#include<iostream>
using namespace std;
/* For every position i;
               Assume the smallest element is at i;
               Scan the remaining array;
               Findout the actual smallest ele and replace it / swap it 
                */
void SelectionSort(int A[], int n)
{
    // i->current position where smallest element should go
    //j-> used to scan the array
    //k-> index of the smallest element found
    int i, j, k;
    for (i = 0; i < n -1 ; i++)
    {
        /*  i; Pass 1 → place smallest element at index 0
               Pass 2 → place 2nd smallest at index 1
               Pass 3 → place 3rd smallest at index 2
            ...After every pass, one element is permanently sorted.
            */
        for(j = k = i; j < n; j++)
        {
            /*  k = i   → assume first element is smallest
                j = i   → start scanning from same position
                ..So we start searching from i onward.
                */
            if (A[j] < A[k])
            {
                //If we find a smaller element, update its position.
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
