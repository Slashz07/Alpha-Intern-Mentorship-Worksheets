// Given a stream of incoming numbers, find average or mean of the stream at every point.
#include<iostream>
using namespace std;

void average(int *arr,int len){
    int sum=0;
    cout<<"Average of all values till the present Index: ";
    for(int i=0;i<len;i++){
        sum+=arr[i];
        cout<<(float)sum/(float)(i+1)<<" ";
    }
}

int main(){
      int arr[]={4,6,8,12,9};
       int len=sizeof(arr)/sizeof (arr[0]);
       average(arr,len);
    return 0;
}