#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> duplicates(vector<int> arr)
{
    int arrLen = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0;
    vector<int> duplicateArr;
    int end = arrLen - 1;
    while (i < end )
    {
        if (arr[i] == arr[i + 1] && (duplicateArr.empty() || find(duplicateArr.begin(), duplicateArr.end(), arr[i]) == duplicateArr.end()))
        {
            duplicateArr.push_back(arr[i]);
            i += 2;
        }
        else if (arr[i] == arr[i + 1])
        {
            i += 2;
        }
        else
        {
            i++;
        }
     
    }
    if (duplicateArr.size() == 0)
    {
        duplicateArr.push_back(-1);
        return duplicateArr;
    }
    else
    {
        return duplicateArr;
    }
}

int main()
{
    vector<int>arr={4 ,10 ,6 ,12 ,8 ,2 ,7, 17, 5 ,2, 16, 15, 18, 20 ,10, 5 ,1, 3, 20, 13, 3 ,14 ,14};
    vector<int> duplicateArr=duplicates(arr);
    for(const int&i : duplicateArr){
        cout<<i<<" ";
    }
}