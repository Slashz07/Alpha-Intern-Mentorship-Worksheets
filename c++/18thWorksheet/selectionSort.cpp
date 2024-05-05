// Selection Sort
#include<iostream>
using namespace std;

int main(){
  int arr[] = {23,1, 5, 6, 8, 12, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size-1;i++){
    int min = i;
    for (int j = i; j < size - 1;j++){
      if(arr[j+1]<arr[min]){
        min = j + 1;
      }
    }
    swap(arr[i], arr[min]);
  }

  cout << "Sorted array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }
    return 0;
}