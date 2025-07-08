class Solution {
public:
    
    string longestPalindrome(string s) {
       int n=s.length();
       if(n<=1) return s;
       auto expanding_and_checking=[&](int l, int r){
        
        while(l>=0 && r<n && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1, r-l-1);
    };
        string max_length_palindromic_substring=s.substr(0, 1);
         for(int i=0; i<n-1; i++){
            string odd=expanding_and_checking(i, i);
            string even=expanding_and_checking(i, i+1);
            if(odd.length()>max_length_palindromic_substring.length()) max_length_palindromic_substring=odd;
            if(even.length()>max_length_palindromic_substring.length()) max_length_palindromic_substring=even;
         }
         return max_length_palindromic_substring;
    }
};