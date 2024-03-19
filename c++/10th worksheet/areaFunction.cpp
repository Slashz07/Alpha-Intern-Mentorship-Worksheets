// Write a function that takes the radius of
//     a circle as an argument and returns its area.
#include<iostream>
#include<cmath>
    using namespace std;

int area(int num){
  int area= M_PI * pow(num, 2);
  return area;
}
int main(){
  int r;
  cout << "enter radius of circle :";
  cin >> r;
  cout << "area of circle: " << area(r);
  return 0;
}