#include<iostream>
using namespace std;


float sqrt(int num)
{
  int s = 0, e = num;
  long long int mid = s + (e - s) / 2;
  int ans = -1;
  while (s < e)
  {
    if (mid * mid > num)
    {
      e = mid - 1;
    }
    else
    {
      ans = mid;
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

double dec(double n, int num, int pre)
{
  double p = 1;

  double ans;
  while (pre > 0)
  {
    p *= 0.1;
    while (n * n < num)
    {
      ans = n;
      n += p;
    }
    n = ans;
    pre--;
  }
  return n;
}

int main()
{
  int num = 80;
  int pre = 6;
  int n = sqrt(num);
  if (n * n < num)
  {
    cout << dec(n, num, pre);
  }
  else
  {
    cout << n;
  }
}