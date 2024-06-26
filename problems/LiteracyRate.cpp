#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    double x,p,l,i;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>p>>l;
        x=(l/p)*100;
        
        if(x<75)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

}
