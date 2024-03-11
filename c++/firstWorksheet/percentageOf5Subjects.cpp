// calculate the percentage of five subjects.
#include <iostream>
using namespace std;

int main()
{
  int subjectMarks[5] = {0};
  int sum = 0;
  cout << "enter marks in the different subjects: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> subjectMarks[i];
    if (subjectMarks[i] > 100)
    {
      cout << "invalid input!\nenter marks out of 100 :";
      i -= 1;
    }
  }
  for (int i = 0; i < 5; i++)
  {
    sum += subjectMarks[i];
  }

  cout << "your percentage is: " << sum * 100 / 500;
  return 0;
}