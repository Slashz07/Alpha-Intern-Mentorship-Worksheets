// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3,5,7,2,4};
  int prod=1;
  for (int elem : arr)
  {
    prod *= elem;
  }
  cout << "product of array elements: "<<prod;
  return 0;
}