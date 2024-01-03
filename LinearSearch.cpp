//Linear Search using recursion 
#include<iostream>
using namespace std;
bool LinearSearch(int *arr , int size , int k)
{
	//Base class
	if(size==0)
	{
		return  false;
	}
	if(arr[0]==k)
	{
		return true;
	}
	//Recurrence Relation
	{
		bool remainingPart = LinearSearch(arr+1,size-1,k);
		return remainingPart;
	}
}
int main()
{
 int arr[]={1,2,5,9,4};
 int size = 5;
 int key = 9;
 int ans = LinearSearch(arr , size , key);
 if(ans)
 {
	 cout<<"Key is Present"<<endl;
 }
 else
 {
	 cout<<"Key is not present"<<endl;
 }

}

