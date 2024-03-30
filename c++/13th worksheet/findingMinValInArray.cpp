// Find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {56, 25, 3, 90, 56, 76, 12, 67, 23, 81};
  int minVal = INT_MAX;
  for (int elem : arr)
  {
    minVal = min(elem, minVal);
  }
  cout << "Maximum value in the array is: " << minVal;
  return 0;
}