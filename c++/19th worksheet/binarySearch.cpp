#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int num){
  int beg = 0;
  int end = size - 1;
  int mid = (beg + end) / 2;
  while(beg<=end){
    if(arr[mid]==num){
      return mid;
    }else if(num<arr[mid]){
      end = mid - 1;
    }else{
      beg = mid + 1;
    }
    mid = (beg + end) / 2;
  }
  return -1;
}

int main(){
  int arr[] = {1, 4, 7, 12, 15, 21, 25};
  int searchNum = 25;
  int size = sizeof(arr) / sizeof(arr[0]);
  int isFound = binarySearch(arr, size, searchNum);
  if (isFound!=-1)
  {
    cout << "Num found at index: " << isFound;
  }else{
    cout << "Num could not be found";
  }
  return 0;
}