#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 bool hasArrayTwoCandidates(vector<int>& arr,int x){
        // code here
       sort(arr.begin(),arr.end());
       int i=0;
       int j=arr.size()-1;
       while(i<j){
        if(arr[i]+arr[j]<x){
            i++;
        }else if(arr[i]+arr[j]>x){
            j--;
        }else{
            return true;
        }
       }
        return false;
    }
int main(){    
    vector<int>arr={1, 2, 4, 3, 6,5};
    bool res=hasArrayTwoCandidates(arr,100);
    cout<<res;
    return 0;
}