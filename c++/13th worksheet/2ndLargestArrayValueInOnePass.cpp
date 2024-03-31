// Find the second largest element in the given Array in one pass.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {21,43,12,54,76,34,123,643,111,296};
  int size = sizeof(arr) / sizeof(arr[0]);
  int maxVal = INT_MIN, secMax, diff, newDiff;
  for (int i = 0; i < size; i++)
  {
    if (maxVal < arr[i])
    {
      secMax = maxVal;
      maxVal = arr[i];
    }
    if(i==size-1){
      continue;
    }else{
      diff = maxVal - secMax;
      newDiff = maxVal - arr[i + 1];
      if (diff > newDiff && newDiff > 0)
      {
        secMax = arr[i + 1];
      }
    }
  }
  cout << "the second largest value in the array is: " << secMax;
  return 0;
}