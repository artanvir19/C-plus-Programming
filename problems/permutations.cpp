#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    int i;
   for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;

}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for ( i = 0; i <n; i++)
    {
       cin>>a[i];
    }

    sort(a,a+n);

    do{
        print(a,n);
    }while(next_permutation(a,a+n));

}
