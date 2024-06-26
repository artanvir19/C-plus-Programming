#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,mid,p,n;
    int a[10001];
    while(cin>>n)
    {
        a[i]=n;
        sort(a,a+i+1);
        if(i==1){
            cout<<a[i]<<endl;
        }
        else if(i%2==0)
        {
            p=i/2;
            mid=(a[p]+a[p+1])/2;
            cout<<mid<<endl;

        }
        else
        {
            p=i/2;
            mid=a[p+1];
            cout<<mid<<endl;
        }
        i++;



    }

    return 0;
}
