// Given a sorted integer array and an integer
// ‘x’, find the lower bound of x
#include <iostream> 
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5,6, 8, 9, 11, 15};
  int i = 0, l = sizeof(arr) / sizeof(arr[0]) - 1, ans = 0;
  int x = 6;
  while (i <= l)
  {
    int mid = i + (l - i) / 2;
    if(arr[mid]==x){
      ans = arr[mid];
      break;
    }
    else if (arr[mid] > x)
    {
      ans = arr[mid];
      l = mid - 1;
    }
    else
    {
      i = mid + 1;
    }
  }
  if (ans == 0)
  {
    cout << "the array doesnt contain any lowerbound value";
  }
  else
    cout << "the lowerbound is: " << ans;
  return 0;
}