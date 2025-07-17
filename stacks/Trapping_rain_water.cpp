class Solution {
public:
    int trap(vector<int>& height) {
        int left_pointer=0, right_pointer=height.size()-1;
        int left_max_height=0, right_max_height=0;
       int stored_water=0;
        while(left_pointer<right_pointer){
            if(height[left_pointer]<height[right_pointer]){
                if(height[left_pointer]>=left_max_height){
                    left_max_height=height[left_pointer];
                    left_pointer++;
                }
                else{
                     stored_water+=left_max_height-height[left_pointer];
                     left_pointer++;
                }
            }
            else{
                if(height[right_pointer]>=right_max_height){
                    right_max_height=height[right_pointer];
                    right_pointer--;
                }
                else{
                    stored_water+=right_max_height-height[right_pointer];
                    right_pointer--;
                }
                
            }
        }
        return stored_water;
    }
};