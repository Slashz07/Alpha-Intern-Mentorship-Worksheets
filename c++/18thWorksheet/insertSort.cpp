#include <iostream>
using namespace std;

void insert(int arr[], int n)
{
  int i = 1;
  while (i < n)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0)
    {
      if (temp < arr[j])
      {
        arr[j + 1] = arr[j];
      }
      else
      {
        break;
      }
      j--;
    }
    arr[j + 1] = temp;
    i++;
  }
}

int main()
{
  int arr[] = {23, 5, 16, 8, 12, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  insert(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  return 0;
}