#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        // int ans = 0;
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == nums[i+1]){
                result.push_back(nums[i]);
            }
        }

        return result;
    }

int main(){
    vector<int> ip = {1};

    vector<int> res = findDuplicates(ip);

    for(int i : res){
        cout<<i<<" ";
    }
}