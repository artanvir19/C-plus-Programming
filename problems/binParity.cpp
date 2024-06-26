#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i, d,bin[32];
	    
	    cin>>d;
	    int c=0;
	    
	    while(d!=0)
	    {
	        bin[c]=d%2;
	        d=d/2;
	        c++;
	    }


        for (size_t i = 0; i < c; i++)
        {
          cout<<bin[i];
        }
        


	    int s=0;
	    for(i=0;i<c;i++)
	    {
	       s+=bin[i]; 
	    }
	    
	    if(s%2==0)
	    cout<<"EVEN";
	    else
	    cout<<"ODD";
	   
	}

}