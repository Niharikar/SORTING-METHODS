#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void Selection_sort(int arr[],int len)
{
  
  int l = len-1;
  int f = 0;
    while(l--)
    {
        int min = arr[f];       // taking first element as min for passing of loop
        int ind = f;            // firt index in following passing of loop, changes when minimum value changes
        int s = f;              // first index for following passing of loop
        for(int i = ++f;i<len;i++)  // starting loop from second element in the pass
        {
            if(arr[i] < min)
            {
                min = arr[i];  // min value
                ind = i; // index of min value
            }
        }
        swap(arr[ind],arr[s]); // putting the min value in the start index of previous pass 
    }
}

int main()
{
    int arr[] = {64,25,12,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    Selection_sort(arr,len);
    for(int i = 0;i<len;i++)
    {
      cout << arr[i] <<" ";
    }
}
