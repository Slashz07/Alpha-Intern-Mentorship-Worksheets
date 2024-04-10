// Write a program to print sum of all the
// elements of a 2D matrix.

#include <iostream>
using namespace std;

int main()
{
  int arr[4][5] = {2, 6, 1, 3, 7,
                   8, 12, 20, 5, 2,
                   7, 25, 32, 6, 2,
                   1, 9, 1, 0, 1};
  int sum = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      sum += arr[i][j];
    }
  }
  cout << "sum of all 2d array elements: " << sum;
  return 0;
}