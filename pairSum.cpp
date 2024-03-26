#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &a, int s){

  vector<vector<int>> ans;

  

    for(int i=0;i< a.size();i++)

    {

        for(int j=i+1;j< a.size();j++)

        {

            if(a[i]+a[j]==s)

            {

                vector<int> vh;

                vh.push_back(min(a[i],a[j]));

                vh.push_back(max(a[i],a[j]));

                ans.push_back(vh);

          }   

        }

    }

    sort(ans.begin(),ans.end());

    return ans ;

}
