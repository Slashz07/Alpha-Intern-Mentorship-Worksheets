// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;

int main(){
  int length = 8;
  int breadth= 7;
  int area = length * breadth;
  int perimeter = 2 * (length + breadth);
  if(perimeter>area){
    cout << "perimeter is greater";
  }
  else if(perimeter==area){
    cout << "perimeter is equal to area";
  }
  else{
    cout << "area is greater than perimeter ";
  }
  return 0;
}