// Print the given pattern(BINARY TRIANGLE)
// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 4; i++)
  {
    int k = i;
    for (int j = 1; j <= i; j++)
    {
      if(k%2==0){
        cout << 0 << ' ';
        k++;
      }else{
        cout << 1 << ' ';
        k++;
      }
    }
    cout << endl;
  }
  return 0;
}