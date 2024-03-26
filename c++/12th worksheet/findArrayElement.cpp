// Find the element x in the array . Take array and
// x as input.
#include<iostream>
using namespace std;

int main(){
  int size,elem;
  cout << "enter array size: ";
  cin >> size;
  int arr[size]={0};

  cout << "enter array elements:\n";
  for (int i = 0; i < size;i++){
    cin >> arr[i];
  }
  
  cout << "enter the element you are searching for in the array: ";
  cin >> elem;
  for(int i:arr){
    if(i==elem){
      cout << elem << " is present in the array";
      exit(1);
    }
  }
  cout << elem << " is not present in the array";

  return 0;
}