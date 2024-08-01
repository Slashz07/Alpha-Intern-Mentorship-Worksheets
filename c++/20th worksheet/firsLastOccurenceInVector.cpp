#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int>vec1={2,4,6,7,7,7,7,7,12,15,21};
    int num;
    cout<<"enter the number you wish to find: ";
    cin>>num;
   
    for(int i=0;i<2;i++){
         int beg=0;
         int end=vec1.size()-1;
         int mid=(beg+end)/2;
         int numFound=0;

  while(beg<=end){
        if(num==vec1[mid]){
            if(i==0){
            numFound=mid;
            beg=mid+1;
            }else{
                numFound=mid;
                end=mid-1;
            }
          
        }else if(vec1[mid]<num){
            beg=mid+1;
        }else{
            end=mid-1;
        }
        mid=(beg+end)/2;

    }

       if(numFound !=-1 &&i==0){
        cout<<"num last occurence found  at index :"<<numFound;
    }
    else if(numFound !=-1 &&i==1){
        cout<<"num first occurence found  at index :"<<numFound;
    }else{
        cout<<"given number isnt present in the vector array";
        break;
    }

    }
  
   
    return 0;
}