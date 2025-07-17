class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()<=1) return 0;
        stack<int>st;
        st.push(-1);
        int n=s.length();
        int i=0;
        int maxLen=0;
        while(i<n){
            if(s[i]=='(') st.push(i);
            else {
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    maxLen=max(maxLen, i-st.top());
                }
            }
            i++;
        }
        return maxLen;

    }
};