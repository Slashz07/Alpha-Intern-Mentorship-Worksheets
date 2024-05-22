#include<iostream>
using namespace std;


// find pivot in sorted rotated array-->

int findPivot(int arr[], int n)
{
  int s = 0, e = n - 1, mid = s + (e - s) / 2;
  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return mid;
}
int main()
{
  int arr[] = {9, 10, 14, 5, 7, 8};
  int index = findPivot(arr, 6);
  cout << "pivot is : " << index;
}
