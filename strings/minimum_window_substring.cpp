class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty() || t.empty()) return "";
        unordered_map<char, int>mp;
        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }
        int start_index=0, j=0, r=0;
        int required=mp.size();
        int min_len=INT_MAX;
        while(r<s.size()){
            mp[s[r]]--;
            if(mp[s[r]]==0)
            required--;
            while(required==0){

                if(r-j+1<min_len){
                    min_len=min(min_len, r-j+1);
                    start_index=j;
                }
                    char leftChar=s[j];
                    mp[leftChar]++;

                    if(mp[leftChar]>0) required++;
                   j++;
            }
            r++;
        }
        return min_len==INT_MAX ? "": s.substr(start_index, min_len);
    } 
};