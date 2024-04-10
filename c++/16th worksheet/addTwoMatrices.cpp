// Write a program to add two matrices

#include<iostream>
    using namespace std;

int main(){
  int arr1[4][5] = {2, 6, 1, 3, 7,
                   8, 12, 20, 5, 2,
                   7, 25, 32, 6, 2,
                   1, 9, 1, 0, 1};
                   
  int arr2[4][5] = {20, 42, 12, 31, 47,
                   8, 12, 20, 75, 62,
                   7, 5, 2, 16, 22,
                   12, 91, 18, 10, 11};

  int sum[4][5];
  for (int i = 0; i < 4;i++){
    for (int j = 0; j < 5;j++){
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  cout << "sum of matrices: "<<endl;
  for (int i = 0; i < 4;i++){
    for (int j = 0; j < 5;j++){
      cout << sum[i][j] << ' ';
    }
    cout << endl;
  }

    return 0;
}