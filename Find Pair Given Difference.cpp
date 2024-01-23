bool findPair(int arr[], int size, int n)
{
    int i=0,j=0;
   
     for( i=0;i<size;i++)
  {
      for( j=i+1;j<size;j++)
      {
          if(abs(arr[i]-arr[j])==n)
          
              return true;
      }
      }
      return false;
  }
   
