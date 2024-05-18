//   
#include<iostream>
using namespace std;

void add(int arr1[], int n, int arr2[], int m)
{
  int size = max(n, m);
  int arr3[size] = {0};
  int i = n - 1, j = m - 1, carry = 0, sum = 0, k = size - 1;
  while (i >= 0 && j >= 0)
  {
    if (i == 0 && j == 0)
    {
      arr3[k] = arr1[i] + arr2[j] + carry;
    }
    else
    {
      sum = arr1[i] + arr2[j] + carry;
      arr3[k] = sum % 10;
      carry = sum / 10;
    }

    i--;
    j--;
    k--;
  }
  while (i >= 0)
  {
    if (i == 0)
    {
      arr3[k] = arr1[i] + carry;
    }
    else
    {
      sum = arr1[i] + carry;
      arr3[k] = sum % 10;
      carry = sum / 10;
    }
    i--;
    k--;
  }
  while (j >= 0)
  {
    if (j == 0)
    {
      arr3[k] = arr2[j] + carry;
    }
    else
    {
      sum = arr2[j] + carry;
      arr3[k] = sum % 10;
      carry = sum / 10;
    }
    j--;
    k--;
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr3[i] << ' ';
  }
}
int main()
{
  int arr[] = {9, 9, 9};
  int arr2[] = {9, -2, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  add(arr, n, arr2, m);
}