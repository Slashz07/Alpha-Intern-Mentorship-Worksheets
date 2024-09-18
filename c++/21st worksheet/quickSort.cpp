#include <iostream>
using namespace std;

int partition(int *arr, int lb, int ub)
{
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quickSort(int *arr, int lb, int ub)
{
    if (lb < ub)
    {
        int pivotLoc = partition(arr, lb, ub);
        quickSort(arr, lb, pivotLoc - 1);
        quickSort(arr, pivotLoc + 1, ub);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 78, 2, 1, 45, 32, 21};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len - 1);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}