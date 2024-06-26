#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int index;
        int freq[26]={0};
        int  n=s.length();
        for (size_t i = 'a'; i < 'z'; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if(i==s[j])
                {
                    freq[i]++;
                }
            }
            
        }


        
        int sn[n]={0};


      int min=freq[0];
      for (size_t i = 0; i <26; i++)
      {
        if(min>freq[i])
          min=freq[i];
          index=i;
      }

      char c=static_cast<char>(index);

      for (size_t i = 0; i <n; i++)
      {
        if(c==s[i])
        sn[i]=1;
      }

      


      


      
      
        
    }
}