#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name;
    cin >> name;

    set<char> s;

    for (char ch : name)
    {
        s.insert(ch);
    }

    int c= s.size();

    if (c%2==0)
    {
        cout << "CHAT WITH HER!" <<endl;
    }
    else
    {
        cout << "IGNORE HIM!" <<endl;
    }

}
