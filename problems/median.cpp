#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,p,len=0;
    int a[10000];
    while(cin>>a[i])
    {
        sort(a,a+i+1);
        if(i==0)
        {
            cout<<a[i]<<endl;
        }
        else if(i%2!=0)
        {
            n=i/2;
            p=(a[n]+a[n+1])/2;
            cout<<p<<endl;
        }
        else{
            n=(i+1)/2;
            p=a[n];
            cout<<p<<endl;
        }

       i++;
    }
}
