// Calculate the sum of all the elements in the
// given array.
#include <iostream>
using namespace std;


int main()
{
  int arr[] = {56, 25, 34, 90, 56, 76, 12, 67, 23, 81};
  int sum = 0;
  for(int i:arr){
    sum += i;
  }
  cout << "sum of all the no.s in given array: " << sum;
  return 0;
}