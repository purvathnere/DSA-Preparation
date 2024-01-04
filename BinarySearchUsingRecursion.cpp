//using Recursion
#include<iostream>
using namespace std;
void print(int arr[], int s, int e) {
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr , int key , int start , int end)
{
	cout<<endl;
	print(arr , start , end);
	//Base Case
	//Element not found
	if(start>end)
	{
		return false;
	}
	int mid=start+(end-start)/2;
	cout<<"Value of arr mid is"<<arr[mid]<<endl;
	//Element is found
	if(arr[mid]==key)
	{
		return true;
	}
	if(arr[mid]<key)
	{
		return binarySearch(arr , key, mid+1,end);
	}
	else
	{
		return binarySearch(arr ,key ,start,mid-1);
	}
}
int main()
{
 int arr[]={4,5,18,2,19,20};
 int size=6;
 int key = 19;
 int ans = binarySearch(arr , key , 0 , size-1);
 cout<<key<<endl;
 if(ans)
 {
	 cout<<"Key is found : = "<<key<<endl;
 }
 else{
	 cout<<"key is not found"<<endl;
 }
 return 0;
}

