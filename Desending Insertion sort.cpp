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
      int current =a[i];
      int j=i-1;
      while(a[j]<current && j>=0)
      {
          a[j+1]=a[j];
          j--;
      }
      a[j+1]=current;
   }
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}



