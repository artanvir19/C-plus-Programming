#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float i, j, k, n;
        int c = 0;
        cin >> i >> j >> k;
        while (abs(i-j)>0.000000001)
        {
            n = abs(i - j);
            if (n > k)
            {
                if (i > j)
                {
                    i -= k;
                    j += k;
                }
                else
                {
                    i += k;
                    j -= k;
                }
            }
            else
            {
                if (i < j)
                {
                    i += n / 2;
                    j -= n / 2;
                }
                else
                {
                    i -= n / 2;
                    j += n / 2;
                }
            }
            c++;
        }

        cout << c << endl;
    }
}
