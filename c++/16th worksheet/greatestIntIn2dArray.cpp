// Write a C++ program to find the largest
// element of a given 2D array of integers
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[4][5] = {2, 6, 11, 3, 7,
                   8, 12, 23, 45, 21,
                   78, 23, 21, 56, 2,
                   1, 9, 19, 20, 411};
  int max = INT_MIN;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (max < arr[i][j])
        max = arr[i][j];
    }
  }
  cout << "the max value in the matrix is :" << max;
  return 0;
}