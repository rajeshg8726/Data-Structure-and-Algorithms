#include <iostream>
using namespace std;

void PrintArray(int *ptr, int n)
{
    cout << "Sorted Array is given below : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "  " << ptr[i];
    }

    cout << endl;
}

int Partition(int A[], int low, int high)
{

    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {

        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);

    // if j > i , then we will swap pivot with the j;
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void Quick_sort(int A[], int low, int high)
{

    int partitionIndex;
    if (low < high)
    {
        partitionIndex = Partition(A, low, high);
        Quick_sort(A, low, partitionIndex - 1);
        Quick_sort(A, partitionIndex + 1, high);
    }
}

int main()
{

    int arr[] = {10, 40, 30, 5, 8, 6, 3, 2, 7, 1};
    int n = sizeof(arr) / sizeof(int);
    Quick_sort(arr, 0, n - 1);

    PrintArray(arr, n);

    return 0;
}
