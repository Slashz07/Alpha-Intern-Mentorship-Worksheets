// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int r;
  cout << "enter the radius of the circle: ";
  cin >> r;
  int circumference = 2 * M_PI * r;
  int area = M_PI * pow(r, 2);
  if(area>circumference){
    cout << "the area of  circle is greater than that of its circumference";
  }else{
    cout << "circumference of circle is greater than area";
  }
  return 0;
}