// Write a program to rotate the matrix by 90 
// degrees clockwise. 
#include<iostream>
using namespace std;

int main(){
  int arr[4][4] = {1, 2, 3, 4,
                   6, 7, 8, 9, 
                   11, 12, 13, 14, 
                   16, 17, 18, 19};
  int arr2[4][4];
  int firstColumn = 0;
  int firstRow = 0;
  int lastColumn =(sizeof(arr[0])/sizeof(arr[0][0]))-1;
  int lastRow =(sizeof(arr)/sizeof(arr[0]))-1 ;

  while (firstRow<=lastRow)
  {
    for (int i = firstColumn; i <= lastColumn; i++)
    {
      arr2[i][lastColumn] = arr[firstRow][i];
    }
    for (int i = firstRow; i <= lastRow; i++)
    {
      arr2[lastRow][3-i] = arr[i][lastColumn];
    }
    for (int i = firstColumn; i <= lastColumn; i++)
    {
      arr2[i][firstColumn] = arr[lastRow][i];
    }
    for (int i = lastRow; i >= firstRow; i--)
    {
      arr2[firstRow][3-i] = arr[i][firstColumn];
    }
    firstColumn++;
    firstRow++;
    lastColumn--;
    lastRow--;
}

for (int i = 0; i < 4;i++){
  for (int j = 0; j < 4;j++){
    cout << arr2[i][j]<<' ';
  }
  cout << endl;
}

  return 0;
}