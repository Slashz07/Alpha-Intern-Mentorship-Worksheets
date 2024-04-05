// Sort the array of 0’s and 1’s
#include<iostream>
using namespace std;

void sort(int arr[],int len){
  int i = 0, j = len - 1;
  while(i<j){
    if(arr[i]==0){
      i++;
    }
    if(arr[i]==1&&arr[j]==0){
      swap(arr[i], arr[j]);
    }
    if(arr[j]==1){
      j--;
    }
  }
  cout << "sorted array: ";
  for (int i = 0; i < len;i++){
    cout << arr[i] << ' ';
  }
}

int main(){
  int arr[] = {0,1,1,0,0,1,0,0,1};
  int size = sizeof(arr) / sizeof(arr[1]);
  sort(arr, size);
  return 0;
}