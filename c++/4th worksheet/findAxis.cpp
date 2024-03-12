// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;

int main(){
  int x, y;
  cout << "enter the x and y axis respectively: ";
  cin >> x >> y;
  if(x==0){
    if(y==0)
    cout << "the point is at origin";
    else
      cout << "point is on the y axis";
  }
  else if(y==0){
    if(x==0)
    cout << "the point is at origin";
    else
      cout << "point is on the x axis";
  }
  else{
    cout << "the point does not lie on any axis but a quadrant";
  }

  return 0;
}