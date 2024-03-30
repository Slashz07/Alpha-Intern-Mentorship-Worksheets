// Find the second largest element in the given
// Array.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {56, 25, 34, 56, 12, 67, 23};
  int maxVal = INT_MIN;
  int diff=INT_MAX,max2;
  for (int elem : arr)
  {
      maxVal = max(elem, maxVal);
  }
  for (int elem : arr)
  {
    if(maxVal-elem<diff&&(maxVal-elem)!=0){
      max2 = elem;
      diff = maxVal - elem;
    }
  }

  cout << "2nd largest value in the array is: " << max2;
  return 0;
}