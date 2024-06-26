#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,k,c=0;
    int a[3]={0};

    cin>>t;
    while(t--){
            cin>>n;

    for(i=1;i<n/2;i++)
    {
        for(j=1;j<=n/2;j++)
        {   if(i!=j){
            k=n-i-j;
            if((i!=j&&j!=k&&i!=k)&&(n==(i+j+k))&&(i%3!=0&&j%3!=0&&k%3!=0)&&k>=1)
            {
                c++;
                a[0]=i;
                a[1]=j;
                a[2]=k;
                break;
            }
        }


        }
        if(c>0)
                break;

    }

   if(c>0)
   {
     cout<<"YES"<<endl<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        --c;

   }

    else
        cout<<"NO"<<endl;

}
}
