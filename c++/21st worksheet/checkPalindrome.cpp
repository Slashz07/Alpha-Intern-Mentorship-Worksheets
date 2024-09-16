#include <iostream>
using namespace std;

#include <string>
 	int isRotatedPalindrome(string s){
	    // code here
	    int i=0;
	    int j=s.length()-1;
	    int isPalindrome=1;
	    while(i<j){
	        if(s[i]!=s[j]){
	            isPalindrome=0;
	            break;
	        }
	        i++;
	        j--;
	    }
	    return isPalindrome;
	}
int main() {
  
    
    cout<<isRotatedPalindrome("abab");

    return 0;
}
