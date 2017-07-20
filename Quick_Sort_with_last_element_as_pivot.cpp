#include<iostream>
using namespace std;

void Swap(int *a,int *b)
{
  int t = *a;
  *a = *b;
  *b = t; 
}

int Partition(int arr[],int l,int h)
{
  int i = l-1;
  for(int j = l;j<h;j++)
  {
    if(arr[j]<=arr[h])
    {
      i++;
      swap(arr[i],arr[j]);
    }
    
  }
  
  swap(arr[i+1],arr[h]);
  return i+1;
}

void Quick_sort(int a[],int l,int h)
{
  if(l<h)
  {
      int p = Partition(a,l,h);
      Quick_sort(a,l,p-1);
      Quick_sort(a,p+1,h);
  }
}


int main()
{
  int a[] = {10,80,30,90,40,50,70};
  Quick_sort(a,0,6);
  for(int i = 0;i<7;i++)
  {
    cout << a[i] << " ";
  }
}
