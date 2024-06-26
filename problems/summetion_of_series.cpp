#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a,i;
    long long sum=0;
    cin>>n>>a;

    for(i=1;i<=n;i++)
    {

       sum+=(i*pow(a,i));
    }
    cout<<sum<<endl;
}
}
