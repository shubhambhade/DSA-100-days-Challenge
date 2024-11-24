class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();
        int leftmax = 0, rightmax = 0 , water = 0, index = 0;
        int maximumHeigth = height[0];

        // find maximum height 
        for(int i = 1; i < n; i++)
        {
            if(height[i] > maximumHeigth)
            {
                maximumHeigth = height[i];
                index = i;
            }
        }
        //left part calculation
        for(int i = 0; i < index; i++)
        {
            if(leftmax > height[i])
            {
                water += leftmax - height[i];
            }
            else
            {
                leftmax = height[i];
            }
        }
        // right part calculations
        for(int i = n-1; i > index; i--)
        {
            if(rightmax > height[i])
            {
                water += rightmax - height[i];
            }
            else{
                rightmax = height[i];
            }
        }
        return water;
    }
};