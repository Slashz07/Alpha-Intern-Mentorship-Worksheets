// Push zeroes to end while maintaining the
// relative order of other elements.
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 4, 7, 12, 10, 0, 7};
  int i = 0, j = -1, size = (sizeof arr) / (sizeof arr[0]);
  while (i < size)
  {
    if (arr[i] == 0 && j == -1)
    {
      j = i;
    }
    if (j != -1 && arr[i] != 0)
    {
      swap(arr[j], arr[i]);
      j++;
    }
    i++;
  }

  cout << "array after pushing 0s to the right: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }
  return 0;
}