class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(auto& s:strs){
            vector<int>count(26, 0);
            for(char c:s){
                count[c-'a']++;
            }
            string str;
            for(int i=0; i<26; i++){
                str+="@"+to_string(count[i]);
            }
            mp[str].push_back(s);
        }
        vector<vector<string>>result;
        for(auto &i:mp){
            result.push_back(i.second);
        }
        return result;
    }
};