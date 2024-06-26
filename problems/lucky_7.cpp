#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    char x;
    if(n>=10)
    {
        for (size_t i = 0; i < n; i++)
        {
            if(i==6)
            x=s[i];
        }
        
    }
    cout<<x;
}
