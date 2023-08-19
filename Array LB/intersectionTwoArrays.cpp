//// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
 
// *********************************************
#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i1 = 0, i2 = 0;
        while (i1 < nums1.size() && i2 < nums2.size()) {
            if (nums1[i1] == nums2[i2]) {
                if (result.empty() || result.back() != nums1[i1]) result.push_back(nums1[i1]);
                i1++; i2++;
            } else if (nums1[i1] < nums2[i2]) i1++; else i2++;
        }
        return result;
    }

int main(){
    vector<int> arr1 = {1,2,2,1};
    vector<int> arr2 = {2,2};

    vector<int> result = intersection(arr1, arr2);

    cout<<"The required intersection Array : "<< endl;
    for(int em : result){
        cout<<em<<" ";
    }
} 