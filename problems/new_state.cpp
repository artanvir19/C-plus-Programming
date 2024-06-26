#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 0;
    // cin >> t;
    // while (t--)
    // {
        int n, m, s, p;
        cin >> n >> m;
        int a[n];
        while (i < n)
        {
            cin >> a[i];
            i++;
        }
        p = 0, s = 0;
        for (i = 0; i < n; i++)
        {

            if (a[i] < m)
            {
                s+=(a[i]+a[i+1]);
                i++;
                if(s>=m)
                {
                    s+=a[i];
                    i++;
                    p++;
                    s=0;
                }

            }

            else
            {
                p++;
            }
        }

        cout << p << endl;
// }
    
}