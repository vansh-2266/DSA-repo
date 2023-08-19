////Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.You must implement a solution with a linear runtime complexity and use only constant extra space.

// Input: nums = [4,1,2,1,2]
// Output: 4

// **********************************************


    int singleNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size()){
            int count = 1 ;
            for(int j = i+1 ; j < nums.size();  j++){
                if(nums[i] == nums[j]){
                    count++;
                }else{
                    break;
                }
            }
            
            if(count == 1){
                 ans = nums[i];
            }

            i = i + count;
        }
      return ans;  
    }
