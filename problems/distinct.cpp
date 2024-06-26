#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,j;
    string s;
    cin>>s;
    string ss="";
    l=s.length();

    for(i='a';i<='z';i++)
    {
        for(j=0;j<l;j++)
        {
            if(i==(char)tolower(s[j]))
            {
               ss+=s[j];
               break;
            }
        }
    }

    cout<<ss.length()<<endl;
}
