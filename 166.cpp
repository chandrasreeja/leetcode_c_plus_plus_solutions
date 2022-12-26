class Solution {
public:
    string fractionToDecimal(int num, int den) {
        string ans ="";
        long n=num;
        long d=den;
        if(n==0)
        {
            ans+='0';
            return ans;
        }
         if((n<0 && d>0) || (n>0 && d<0))
         {
             ans+='-';
         }
        if(n<0)
        {
            n=labs(n);
        }
        if(d<0)
        {
            d=labs(d);
        }
         long q = n/d;
         long rem = n%d;
         
         ans += to_string(q);

         if(rem==0)
         {
             return ans;
         }
         else{
             ans += '.';
             unordered_map<int,int> m;
            
             while(rem!=0)
             {
                 if(m.find(rem)!=m.end())
                 {
                     ans+=')';
                     string open="(";
                     ans.insert(m[rem],open);
                     return ans;
                 }
                 else{
                    m[rem]=ans.length();
                    rem *= 10;
                     q = rem/d;
                     rem = rem % d;
                     ans+= to_string(q);
                 }
             } 
             return ans;
         }
    }
};