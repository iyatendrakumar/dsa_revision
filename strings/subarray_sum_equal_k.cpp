class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum=0, count=0;
        unordered_map<int, int>mp;
        mp[0]=1;
        for(int i=0; i<nums.size(); i++){
            preSum+=nums[i];
            int extra=preSum-k;
            count+=mp[extra];
            mp[preSum]++;

        }
        return count;
    }
};