class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string output;
        int i=0,j=0;
        while(i<word1.size() && j<word2.size())
        {
            output+=word1[i];
            output+=word2[j];
            i++;
            j++;
        }
        if(i==word1.size())
        {
            while(j<word2.size())
            {
                output+=word2[j];
                j++;
            }
        }
        else
        {
            while(i<word1.size())
            {
                output+=word1[i];
                i++;
            }
        }
        return output;
    }
};