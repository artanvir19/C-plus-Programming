#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,n,m,q,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

      sort(a,a+n+1);

    /* for(i=0;i<n;i++)
            cout<<" "<< a[i];*/



     int b[n];
     int c[n];

      int odd=0,max=a[0];
   int min;

     for(i=0;i<n;i++)
     {
         if(a[i]>max)
            max=a[i];
        if(a[i]%2==0)
            b[j++]=a[i];
        else
            c[k++]=a[i];
     }
     if(k>0&&max%2==0)
     {
         for(i=0;i<=j;i++)
         {
             if(b[i]<c[0])
                f++;
         }
     }





   if(c>0)
    cout<<"\n1"<<endl;
   else
    cout<<"\n0"<<endl;




}
