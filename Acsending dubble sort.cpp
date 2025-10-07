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
    int counter=1;
    while(counter<n)
    {
        for(i=0;i<n-counter; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp =a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }


     counter++;}
     for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
