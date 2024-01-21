class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
       
       priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
       int count = 0;
       while(pq.size()>1 && pq.top()<k)
       {
           count++;
           int x=pq.top();pq.pop();
           int y = pq.top();pq.pop();
           pq.push(x+y);
           
       }
       if(pq.top()<k)return -1;
       return count;
    
      
    }  
    
};
