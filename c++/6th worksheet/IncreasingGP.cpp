// Display this GP - 3, 12, 48, ..upto ‘n’ terms.
#include<iostream>
using namespace std;

int main(){
  int n, count = 0;
  cout << "enter length for GP series: ";
  cin >> n;
  for (int i = 3; count <= n; count++)
  {
    cout << i << ' ';
    i *= 4;
  }
  return 0;
}