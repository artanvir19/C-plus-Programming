#include <bits/stdc++.h>
using namespace std;
int main()
{
    float i, j, k, t;
    int c = 0;
    cin >> i >> j >> k;
    while (i != j)
    {
        t = abs(i - j);
        if (t > k)
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
                i += t / 2;
                j -= t / 2;
            }
            else
            {
                i -= t / 2;
                j += t / 2;
            }
        }
        c++;
    }

    cout << c << endl;
}