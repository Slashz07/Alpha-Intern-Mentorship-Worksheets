// Merge two sorted arrays
#include<iostream>
using namespace std;

void mergingSortedArr(int arr[],int len1,int arr2[],int len2){
  int i = 0, j = 0,count=0;
  int mergeLen = len1+len2;
  int mergeArr[mergeLen];
  while(i<len1&&j<len2){
    if(arr[i]<arr2[j]){
      mergeArr[count] = arr[i];
      i++;
      count++;
    }else{
      mergeArr[count] = arr2[j];
      j++;
      count++;
    }
  }
  while(i<len1){
    mergeArr[count] = arr[i];
    i++;
    count++;
  }
  while(j<len2){
    mergeArr[count] = arr2[j];
    j++;
    count++;
  }
  cout << "sorted array: ";
  for (int i = 0; i < mergeLen;i++){
    cout << mergeArr[i] << ' ';
  }
}

int main(){
  int arr[] = {2,5,7,9,12,15,45};
  int arr2[] = {3,4,6,8,11,14,21,56};
  int size1 = sizeof(arr) / sizeof(arr[1]);
  int size2 = sizeof(arr2) / sizeof(arr2[1]);
  mergingSortedArr(arr,size1, arr2,size2);
  return 0;
}