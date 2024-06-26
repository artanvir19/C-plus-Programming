#include<bits/stdc++.h>
using namespace std;
int c=0;
void display(int a[],int n);
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    do
    {
        display(a,n);
    }
    while(next_permutation(a,a+n));

    cout<<endl<<c;
}

void display(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;

    }
    c++;
    cout<<endl;
}
