

#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
  int count = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      { 
        swap(arr[j], arr[j + 1]);
        count++;
      }
    }
    if (count == 0)
    {
      break;
    }
  }
  cout << "No. of swaps done: "<<count << endl;
}

int main()
{
  int arr[] = {8, 22, 7, 9, 31, 5, 13};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  return 0;
}