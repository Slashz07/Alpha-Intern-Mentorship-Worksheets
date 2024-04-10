// Write a program to store roll number and
// marks obtained by 4 students side by side in a
// matrix
#include <iostream>
using namespace std;

int main()
{
  int arr[4][2];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      if (j == 0)
        cout << "enter student roll no.: ";
      else
        cout << "enter student marks: ";
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      if (j == 0)
        cout << " student roll no.: ";
      else
        cout << " student marks: ";
      cout << arr[i][j];
    }
    cout << endl;
  }
  return 0;
}