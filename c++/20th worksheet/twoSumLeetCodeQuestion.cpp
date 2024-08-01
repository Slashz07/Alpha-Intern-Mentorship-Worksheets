 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sol;
        for(int i=0;i<nums.size()-1;i++){
            
            for(int j=i+1;j<nums.size();j++){
                    cout<<"sum:"<<nums[i]+nums[j]<<endl;
                
                if((nums[i]+nums[j])==target){
                    sol.push_back(i);
                    cout<<"sum:"<<i<<" "<<j<<endl;
                for(int num:sol){
                    cout<<"sol value "<<num<<" ";
                }
                    sol.push_back(j);
                    
                    break;
                }
                
            }
            if(sol.size()){
                cout<<sol.size();
                break;
            }
        }

        return sol;
    }
    int main(){
        vector<int>nums ={-3,4,3,90};
        vector<int>num=twoSum(nums,0);
    
    }