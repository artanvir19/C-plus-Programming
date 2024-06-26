#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main()
{

    int n ,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    do
    {
        print(a,n);
    }while(next_permutation(a,a+n));
}
