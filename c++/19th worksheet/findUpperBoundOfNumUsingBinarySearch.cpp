// Given a sorted integer array and an integer
// ‘x’, find the upper bound of x
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 8, 9, 11, 15};
  int i = 0, l = sizeof(arr) / sizeof(arr[0]) - 1, ans = 0;
  int x = 6;
  while (i <= l)
  {
    int mid = i + (l - i) / 2;
    if (arr[mid] <= x)
    {
      i = mid + 1;
    }
    else
    {
      ans = arr[mid];
      l = mid - 1;
    }
  }
  if (ans == 0)
  {
    cout << "the array doesnt contain any upperbound value";
  }
  else
    cout << "the upperbound is: " << ans;
  return 0;
}