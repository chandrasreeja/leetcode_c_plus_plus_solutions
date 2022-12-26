class Solution {
public:
    string reverseWords(string s) {
        stack <string> words;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            string word="";
            while(i<len && s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            if(word.length()>0)
            words.push(word);
        }
        string ans="";
        while(!words.empty() && words.size()!=1)
        {
            ans+=words.top();
            words.pop();
            ans+=' ';
        }
        ans+=words.top();
        return ans;
    }
};