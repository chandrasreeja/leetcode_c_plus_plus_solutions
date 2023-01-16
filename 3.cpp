class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if(s.length()==0)
    return 0;
    if(s.length()==1)
    return 1;
    int fre[128]={0};
    int i=0,j=0;
    fre[s[0]]++;
    int ans=1;
    while(j!=s.length()-1){
      if(fre[s[j+1]]==0)
      {
        j++;
        fre[s[j]]++;
        ans=max(ans,j-i+1);
      }
      else{
        fre[s[i]]--;
        i++;
      }
    }
    return ans;
  }
};