class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 or nums.size()==1) return nums.size();
        sort(nums.begin(), nums.end());
        int ans=1;
        int i=1;
        int current_max_sequence=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]) {
                i++;
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                
                current_max_sequence++;
                i++;
                ans=max(ans, current_max_sequence);
                continue;
             }
             i++;
             current_max_sequence=1;

        }
        return ans;
    }
};