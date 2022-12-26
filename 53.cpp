class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int sumSoFar=0;
        for(int i=0;i<nums.size();i++)
        {
            sumSoFar+=nums[i];
            if(sum<sumSoFar)
                sum=sumSoFar;
            if(sumSoFar<0)
                sumSoFar=0;
        }
        return sum;
    }
};