// Print all numbers from 1 to 100 that are divisible by 3

#include<iostream>
    using namespace std;

int main(){
  for (int i = 1; i <=100/3; i++ )
  {
    cout << i*3 << ' ';
  }
  return 0;
}