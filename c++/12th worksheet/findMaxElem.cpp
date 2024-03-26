// Find the maximum value out of all the elements
// in the array.
#include<iostream>
#include<climits>
using namespace std;

int main(){
  int arr[] = {56, 25, 34, 90, 56, 76, 12, 67, 23, 81};
  int maxVal = INT_MIN;
  for(int elem:arr){
    maxVal = max(elem, maxVal);
  }
  cout << "Maximum value in the array is: " << maxVal;
  return 0;
}