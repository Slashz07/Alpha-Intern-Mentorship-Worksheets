// Display this AP - 1, 3, 5, 7, 9.. upto ‘n’ terms.
#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "enter length for AP series: ";
  cin >> n;
  for (int i = 1; i <= n*2; i += 2)
  {
    cout << i << ' ';
  }
  return 0;
}