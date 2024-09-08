#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="hn k";
    string vowels="aeiou";
    int count=0;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<vowels.length();j++){
        if(str[i]==vowels[j]){
        count++;
        break;
        }
      
        }
    }
    cout<<"no. of vowels: "<<count;
    return 0;
}