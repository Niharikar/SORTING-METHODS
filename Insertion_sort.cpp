#include<iostream>
using namespace std;

void Insertion _sort(int a[],int len)
{
    int i,j,key;
    for(i = 1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        
        while(j>=0 && a[j] < key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
    }
}

int main()
{
    int a[] = {12,11,13,5,6};
    int len = sizeof(a)/sizeof(a[0]);
    Insertion_sort(a,len);
    for(int i = 0;i<len;i++)
    {
        cout << a[i] << " ";
    }
}
