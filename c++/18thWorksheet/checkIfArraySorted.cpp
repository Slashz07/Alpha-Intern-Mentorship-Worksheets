// GIVEN AN ARRAY FIND ITS SORTED OR NOT

#include<iostream>
using namespace std;

int main(){
  int arr[] = {1, 4, 6, 7, 12, 15};
  bool notSorted=false;
  int size = (sizeof arr) / (sizeof arr[0]);
  for (int i = 0; i < size - 1;i++){
    if(arr[i]>arr[i+1]){
      notSorted = true;
      break;
    }
  }
  if(notSorted){
    cout << "provided array is not sorted";
  }else{
    cout << "provided array is sorted";
  }

    return 0;
}