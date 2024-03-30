// Count the number of elements in given array
// greater than a given number x.
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {56, 25, 34, 90, 56, 76, 12, 67, 23, 81};
  int num, count = 0;
  cout << "enter the number: ";
  cin >> num;
  for (int elem : arr)
  {
    if(elem>num){
      count++;
    }
  }
  cout << "Total number of array elements greater than "<<num<<": "<<count;
  return 0;
}