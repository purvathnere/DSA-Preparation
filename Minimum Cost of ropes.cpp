class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
    priority_queue<long long,vector<long long>,greater<long long>>minheap;
    long long sum = 0;
    for(long long i=0;i<n;i++) minheap.push(arr[i]);
    while(minheap.size()!=1)
    {
        long long a = minheap.top();minheap.pop();
        long long b = minheap.top();minheap.pop();
        sum+=a+b;
        minheap.push(a+b);
    }
    return sum;
    }
};
