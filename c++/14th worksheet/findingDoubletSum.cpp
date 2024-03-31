// Find the doublet in the Array whose sum is
// equal to the given value x
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {2, 5, 3, 1, 8, 9, 12, 15, 21, 51};
  int sumNum;
  cout << "enter the sum whose doublet is to be found: ";
  cin >> sumNum;
  for (int i = 0; i < v.size() - 1; i++)
  {
    for (int j = i + 1; j < v.size(); j++)
    {
      if (v[i] + v[j] == sumNum)
      {
        cout << "doublet found in the array is: " << v[i] << " and " << v[j];
        exit(1);
      }
    }
  }
  cout << "no doublet with sum equal to " << sumNum << " could be found";
  return 0;
}