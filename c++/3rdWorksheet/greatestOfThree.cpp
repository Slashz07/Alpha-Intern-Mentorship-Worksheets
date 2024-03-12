#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int num[3] = {0};
  int max = INT_MIN;
  cout << "enter the 3 numbers: ";
  for (int i = 0; i < 3; i++)
  {
    cin >> num[i];
  }
  for (int i = 0; i < 3; i++)
  {
    if (max < num[i])
    {
      max = num[i];
    }
  }

  cout << "the max value out of the entered values is :" << max;
  return 0;
}