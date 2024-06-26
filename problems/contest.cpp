#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[3],s,c=0;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
         for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    s=0;
    for (int i = 0; i <3 ; i++)
    {
        s+=a[i];
    }
   if(s>=2)
   {
    c++;
   }
    }

    cout<<c<<endl;





}
