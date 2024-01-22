class Solution
{
    public:
    int countFractions(int n, int num[], int den[])
    {
        unordered_map<double,int>m;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
         double nm = num[i];
         double dm = den[i];
         double x = (dm-nm)/dm;
         double y=nm/dm;
         if(m[x]>0)
         {
             ans+=m[x];
         }
         m[y]++;
    }
    return ans;
    }
};
