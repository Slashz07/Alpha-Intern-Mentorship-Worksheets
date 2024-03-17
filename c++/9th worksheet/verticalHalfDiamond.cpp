// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int len;
  cout << "enter the length of vertically halved diamond (Give an odd value for the perfect shape) :";
  cin >> len;
  int peak = ceil(len/2.0);
  for (int i = 1; i <= peak;i++){
    for (int j = 1; j <= i;j++){
      cout << '*';
    }
    cout << endl;
  }
  for (int i = len-peak; i >=1;i--){
    for (int j = 1; j <= i;j++){
      cout << '*';
    }
    cout << endl;
  }

    return 0;
}