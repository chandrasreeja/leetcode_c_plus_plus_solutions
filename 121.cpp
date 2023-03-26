class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer=0;
        int n=prices.size();
        int arr[n];
        int maximum=0;
        arr[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            maximum=max(prices[i+1],maximum);
            if(maximum>prices[i])
                arr[i]=maximum;
            else
                arr[i]=0;
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                flag=1;
                break;
            }          
        }
        if(flag==0)
            return 0;
        
         for(int i=0;i<n;i++)
         {
           answer=max(arr[i]-prices[i],answer);
         }
        return answer;
    }
};