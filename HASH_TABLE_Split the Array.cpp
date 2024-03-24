class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
      unordered_map<int,int>k;
      for(int i=0;i<nums.size();i++)
      {
        k[nums[i]]++;
      }  
      for(int i=0;i<nums.size();i++)
      {
        if(k[nums[i]]>2)
        {
            return false;
        }
      }
      return true;
    }
};
