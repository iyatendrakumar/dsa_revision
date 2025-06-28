class Solution {
public:
    vector<vector<int>> permute(vector<int>&v) {
    
    vector<vector<int>>result;
    sort(v.begin(), v.end());
    result.push_back(v);
    int n=v.size();
    // kind of next_permutation implementation
    while(true){
        int break_point=-1;
    for( int last_point=n-2; last_point>=0; last_point--){
        if(v[last_point]<v[last_point+1]){
            break_point=last_point;
            break;
        }
        
    }
    if(break_point==-1) break;
    for(int j=n-1; j>break_point; j--){
            if(v[j]>v[break_point]) {
                swap(v[j], v[break_point]);
            
            break;
            }
            
        }
    
    reverse(v.begin()+break_point+1, v.end());
    result.push_back(v);
    }
    
    return result;
    }
};