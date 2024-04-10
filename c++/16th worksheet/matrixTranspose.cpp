// Write a program to print the transpose of 
// the matrix entered by the user and store it in a new 
// matrix. 
#include<iostream>
using namespace std;

int main(){
  int arr[4][5] = {2, 6, 1, 3, 7,
                    8, 12, 20, 5, 2,
                    7, 25, 32, 6, 2,
                    1, 9, 1, 0, 1};
  int transpose[5][4];
  for (int i = 0; i < 5;i++){
    for (int j = 0; j < 4;j++){
      transpose[i][j] = arr[j][i];
    }
  }
  cout << "transposed array: " << endl;

  for (int i = 0; i < 5;i++){
    for (int j = 0; j < 4;j++){
      cout << transpose[i][j]<<' ';
    }
    cout << endl;
  }
    return 0;
}