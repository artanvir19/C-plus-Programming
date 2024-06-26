#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l,r,k,m,s=0,p=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        s+=a[i];
    }
    for(i=0; i<n; i++)
    {
        m=1;
        m*=a[i];
        for(j=i; j<=i; j++)
        {
            m*=a[j];
        }
        for(k=0; k<i&&k>j&&k<n; k++)
        {
            m+=a[k];
        }
        if(s<m)
        {
            cout<<i<<" "<<j<<endl;
            p++;
            break;
        }


    }
}
