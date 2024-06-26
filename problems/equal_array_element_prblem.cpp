#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0;
    cin>>n;
    int min, c,a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    min=c=*min_element(a,a+n);
    int m=*max_element(a,a+n);
    int d=m-c;

   for(i=0;i<m&&m!=c;i++)
   {
       for(j=0;j<d;j++)
       {
            if(a[i]!=c && a[i]>=b[i])
       {
           a[i]-=b[i];
           count++;
       }
       }
    m=*max_element(a,a+n);
    min=*min_element(a,a+n);
   }

 for(i=0;i<n;i++)
    cout<< a[i];
 cout<<endl;
    if(count==0||min!=c)
        cout<<-1;
    else
        cout<<count;
}
