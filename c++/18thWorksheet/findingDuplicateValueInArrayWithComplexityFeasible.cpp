#include<iostream>
using namespace std;
// finding duplicate value in an array of n natural numbers of length n+1(since one value extra is the duplicate one)
int main(){
  int arr[] = {1, 9, 3, 4, 2,2, 7, 5, 6, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int arrSum = 0;
  for (int i = 0; i < size;i++){
    arrSum += arr[i];
  }
  int sumOfNNaturalNo = (size - 1) * (size) / 2;
  cout << "Duplicate Value: " << arrSum - sumOfNNaturalNo;
  return 0;
}