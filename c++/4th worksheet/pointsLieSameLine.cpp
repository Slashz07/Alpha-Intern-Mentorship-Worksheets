// Given three points(x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include <iostream>
using namespace std;
class coordinates
{
public:
  int x;
  int y;
  coordinates(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
};
int main()
{
  coordinates p1(1, 2), p2(3, 4), p3(5, 6);
  int m1 = (p2.y - p1.y) / (p2.x - p1.x);
  int m2 = (p3.y - p2.y) / (p3.x - p2.x);
  if (m1 == m2)
  {
    cout << "the given points lie on the same line";
  }
  else
  {
    cout << "the points do not lie on the same line";
  }
  return 0;
}