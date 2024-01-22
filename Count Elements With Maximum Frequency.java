class Solution {
    public int maxFrequencyElements(int[] nums) {
        int b[] = new int[101];
        //Iterate
        for(int k:nums)
        {
            b[k]++;
        }
        //Intialize max to zero
        int maxi = 0;
        for(int k=0;k<=100;k++)
        {
            maxi=Math.max(maxi,b[k]);
        }
        //Intialize answer to zero
        int answer=0;
        for(int k=0;k<=100;k++)
        {
            if(b[k]==maxi)
            {
                maxi=b[k];
                answer+=b[k];
            }
        }
        return answer;
    }
}
