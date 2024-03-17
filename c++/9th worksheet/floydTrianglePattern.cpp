// PRINT THE FLOYD TRIANGLE PATTERN
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main()
{
  int j = 1;
  for (int i = 1; i <= 4; i++)
  {
    int count = 0;
    for (; count < i; j++)
    {
      cout << j << ' ';
      count++;
    }
    cout << endl;
  }
  return 0;
}