class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        
        int r=matrix.size();  //1
        int c=matrix[0].size(); //1
        int r1=0,r2=r-1,mid;  //r1=0,r2=0
        while(r1<r2)
        {
            mid=r1+(r2-r1)/2;
            if(target>matrix[mid][c-1])r1=mid+1;
            else if(target<matrix[mid][0])r2=mid-1;
            else {r1=mid;break;}
        }
        
    int c1=0,c2=c-1;
        while(c1<=c2)
        {
            mid=c1+(c2-c1)/2;
            if(target>matrix[r1][mid])c1=mid+1;
            else if(target<matrix[r1][mid])c2=mid-1;
            else return true;
        }
        return false;
    }
};