class Solution {
public:

    void fill(vector<vector<int>>& image, int sr, int sc, int color,int x)
    {
        if(sr > image.size()-1 || sr < 0 || sc < 0 || sc > image[0].size()-1 || image[sr][sc] == color)
        {
            return ;
        }
        
        
        else if(image[sr][sc] == x)
        {
             image[sr][sc] = color;
             fill(image,sr-1,sc,color,x);
             fill(image,sr+1,sc,color,x);
             fill(image,sr,sc-1,color,x);
             fill(image,sr,sc+1,color,x);
        }
        
      return ;

    }
   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x=image[sr][sc];
        fill( image, sr, sc, color, x);
        return image;

    }
};
