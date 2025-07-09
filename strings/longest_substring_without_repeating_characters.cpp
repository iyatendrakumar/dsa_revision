#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        int max_length=0;
        int j=0, ans=0; 
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            max_length++;
            if(mp.size()<max_length-j){
                int n=mp.size();
                ans=max(ans, n);
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
            }
        }
        int map_size=mp.size();
        ans=max(ans, map_size);
        return ans;
    }
};