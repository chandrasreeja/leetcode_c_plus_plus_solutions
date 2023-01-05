class Solution {
public:
       vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> v2;
        if(nums.size()<3){
           
         return v2;
         }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low=i+1;
                int high=nums.size()-1;
                int sum=0-nums[i];
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        vector<int>v1;
                        v1.push_back(nums[i]);
                        v1.push_back(nums[low]);
                        v1.push_back(nums[high]);
                        v2.push_back(v1);
                        while(low<high && nums[low]==nums[low+1])
                            low++;
                        while(low<high && nums[high]==nums[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]>sum)
                    {
                        high--;
                    }
                    else
                        low++;
                }
            }
        }
        return v2;
    }
};