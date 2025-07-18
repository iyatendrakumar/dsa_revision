class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int largest_area=0;
        for(int i=0; i<=heights.size(); i++){
            int current_height= (i==heights.size()) ? 0 : heights[i];
            while(!st.empty() && current_height<heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int width=st.empty()? i : i-st.top() -1 ;
                largest_area=max(largest_area, height*width);
            }
            st.push(i);
        }
        return largest_area;
    }
};