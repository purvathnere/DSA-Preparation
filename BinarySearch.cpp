#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={9,2,8,5,6,7};
    int odd[5]={12,10,19,20,35};
    int evenIndex=BinarySearch(even,6,8);
    cout<<"Index of 8 is :"<<evenIndex<<endl;
    int oddIndex=BinarySearch(odd,5,35);
    cout<<"Index of 35 is :"<<oddIndex<<endl;
  
}
