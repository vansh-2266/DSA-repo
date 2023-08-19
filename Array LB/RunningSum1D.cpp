#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        int sum = 0 ;

        vector<int> result;
        
        for(int i =0; i < nums.size(); i++){
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }

int main(){
    vector<int> nums = {1,2,3,4,5};
    
    vector<int> ans = runningSum(nums);

    cout<<"Required Answer of Running Sum : ";

    for(int i = 0 ; i < ans.size() ; i++){
   
        cout<<ans[i]<< " ";
    } 
}