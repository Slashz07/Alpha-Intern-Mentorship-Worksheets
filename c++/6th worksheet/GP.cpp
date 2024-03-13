// Display this GP - 1, 2, 4, 8, 16, 32, ..upto ‘n’ terms.n
#include<iostream>
using namespace std;

int main(){
  int n,count=0;
  cout << "enter length for GP series: ";
  cin >> n;
  for (int i = 1; count<=n; count++)
  {
    cout << i << ' ';
    i *= 2;
  }
  return 0;
}