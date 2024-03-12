#include<iostream>
using namespace std;

int main(){
  int p, t;
  float r;
  cout << "enter the principle, rate of interest and time period in years respectively";
  cin >> p >> r >> t;
  float si = (p * r * t) / 100;
  cout << "simple interest : " << si;
  return 0;
}