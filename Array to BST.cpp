class Solution {
  
    void solve(vector<int> nums,vector<int> &res, int l , int r)
    {
        //Base Condition
        if(l>r)
        {
            return ;
        }
        int mid = (l+r)/2;
           
        res.push_back(nums[mid]);
    
       
        //Recursively call the solve fauction
        solve(nums,res,l,mid-1);
        solve(nums,res,mid+1,r);
    }
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> res;
        solve(nums,res,0,nums.size()-1);
        return res;
    }
};
