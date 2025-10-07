#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a size:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
       int min=i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[min])
           {
               min=j;
           }
       }
       if(min!=i)
       {
           int temp =a[i];
           a[i]=a[min];
           a[min]=temp;
       }
   }
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

