#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int in;
  cout << "enter  radius of circle: ";
  cin >> in;
  int p = 2 * M_PI * in;
  int area = M_PI * in * in;
  if (area > p)
  {
    cout << "area is larger";
  }
  return 0;
}