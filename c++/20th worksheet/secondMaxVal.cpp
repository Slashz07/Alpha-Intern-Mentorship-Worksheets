#include<iostream>
#include<climits>
using namespace std;

// Seond largest value-->

int secondMaxVal(int *arr,int len){
    int max=INT_MIN;
    int secondMax=0;
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];

        }else if(arr[i]!=max){
            
            if(arr[i]>secondMax){
                secondMax=arr[i];
            }
        }
    }
    return secondMax;
} 

int main(){
    int arr[]={2,2,2,2,2,2};
    int len=sizeof(arr)/sizeof (arr[0]);
    int val=secondMaxVal(arr,len);
    if(val>INT_MIN)
    cout<<"second max val: "<<val;
    else
    cout<<"there is no second largest value in given array";
    return 0;
}
