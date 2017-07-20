#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void Bubble(int arr[],int len)
{
  int k = len-1;
  int s = 1;
  while(s)
  {
      s = 0;
      for(int i = 0;i<k;i++)
      {
        if(arr[i] > arr[i+1])
        {
          s = 1;
          swap(arr[i],arr[i+1]);
        }
      } 
   }
}

int main()
{
  int arr[] = {5,1,4,2,8};
  int len =sizeof(arr)/sizeof(arr[0]);
  Bubble(arr,len);
  for(int i = 0;i<len;i++)
  {
    cout << arr[i] << " ";
  }
}

