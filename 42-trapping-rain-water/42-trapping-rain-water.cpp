class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int cells=0,current=0;
        int max_left=height[left],max_right=height[right];
        int m;
        while(left<right)
        {
            if(max_right<max_left)
            {
                right--;
                current=right;
                if(max_right<height[current])
                    max_right=height[current];
            }
            else{
                left++;
                current=left;
                if(max_left<height[current])
                    max_left=height[current];
            }
            m=min(max_left,max_right);
            if(m>height[current])
                cells+=(m-height[current]);
        }
        return cells;
    }
};