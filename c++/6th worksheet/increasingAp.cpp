// Display this AP - 4, 7, 10, 13, 16.. upto ‘n’ terms.
#include<iostream>
using namespace std;

int main(){
  int n, count = 0;
  cout << "enter length for AP series: ";
  cin >> n;
  for (int i = 4; count<=n; count++)
  {
    cout << i << ' ';
    i += 3;
  }
  return 0;
}