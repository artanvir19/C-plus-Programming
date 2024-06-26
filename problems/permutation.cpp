#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m, n=5,c=0;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"possible Permutation"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]!=a[j])
                for(k=0; k<n; k++)
                {
                    if(a[i]!=a[k]&&a[j]!=a[k])
                        for(l=0; l<n; l++)
                        {
                            if(a[i]!=a[l]&&a[j]!=a[l] &&a[k]!=a[l])
                                    for(m=0; m<n; m++)
                                    {
                                        if(a[i]!=a[m]&&a[j]!=a[m] &&a[k]!=a[m]&&a[l]!=a[m])
                                        printf("%d %d %d  %d %d\n",a[i],a[j],a[k],a[l],a[m]);

                                    }


                        }


                }
        }

    }
     cout<<c<<endl;
}


