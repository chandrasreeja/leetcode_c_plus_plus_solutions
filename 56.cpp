class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer;
        sort(intervals.begin(),intervals.end());
        //sorts based on the first element in the vector of vectors
        for(auto x:intervals)
        {
            if(answer.empty() || answer.back()[1]<x[0])  //if there is no element in the answer then push x. also if the last elements ,last nmber ,in answer is less than the first number in x ,push x into answer. 
            {
                answer.push_back(x);
            }
            else
            {
                answer.back()[1]=max(answer.back()[1],x[1]);
            }
        }
        return answer;
    }
};
