#include<iostream>
using namespace std;


int binarySearch2DArray(int arr[][6], int trow, int tcol, int num)
{
  int s = 0, e = trow * tcol - 1, mid = s + (e - s) / 2;
  while (s <= e)
  {
    if (num == arr[mid / tcol][mid % tcol])
    {
      return 1;
    }
    else if (num < arr[mid / tcol][mid % tcol])
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return 0;
}

int main()
{
  int arr[3][6] = {
      {1, 2, 3, 4, 5, 6},
      {10, 14, 16, 18, 19, 20},
      {21, 25, 28, 31, 35, 38}};
  int rows = 6, col = 6;
  if (binarySearch2DArray(arr, rows, col, 16))
  {
    cout << "num is present";
  }
  else
  {
    cout << "num is not present";
  }
  return 0;
}