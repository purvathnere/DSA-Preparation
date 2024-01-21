class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k) {
	 sort(arr,arr+n);
	 reverse(arr,arr+n);
	 vector<int>v;
	 for(int i=0;i<k;i++)
	 {
	     v.push_back(arr[i]);
	 }
	 return v;
	}

};
