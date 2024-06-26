#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j=0,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=a[0];int b[n],c[n],d[n];
    for(i=0;i<n;i++)
    {
        if(t<=a[i])
        b[k++]=a[i];
        else
        c[j++]=a[i];

    }
    int y,z;
    y=z=0;
    for(;y<=(k+1)&&z<=(j+1);i++)
    {
        if(b[i]<c[i])
        {
            d[i]=b[y++];
        }
        else{
            d[i]=c[z++];
        }
    }

    for(;y<=(j+1);i++)
    {
        d[i]=b[y++];
    }
    for(;z<=(k+1);i++)
    {
        d[i]=b[z++];
    }

    for(i=0;i<n;i++)
    {

        cout<<d[i]<<endl;
    }



}
