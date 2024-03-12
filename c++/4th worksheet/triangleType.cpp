// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
#include<iostream>
using namespace std;

int main(){
  int sides[3] = {0};
  int count = 0;
  cout << "enter sides of the triangle";
  for (int i = 0; i < 3;i++){
    cin >> sides[i];
  }
  for (int i = 0; i < 2;i++){
    if(sides[i]==sides[i+1]){
      count++;
    }
  }
  switch(count){
    case 0:
      cout << "its a scalene triangle";
      break;
    case 1:
      cout << "the triangle is an isosceles triangle";
      break;
    case 2:
      cout << "the triangle is equilateral triangle";
      break;
  }

    return 0;
}