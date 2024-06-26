#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,a;

    cin>>x>>y>>a;

    float p,q;

    p=ceil(x/a);
    q=ceil(y/a);

    cout<<(p*q)<<endl;

}
