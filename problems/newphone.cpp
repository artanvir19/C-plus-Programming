#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	float y=x%100;
	if(y==0)
	{
	    cout<<"K"<<"00"<<endl;
	}
	else if(y<10)
	{
		cout<<"k0"<<y<<endl;
	}
	else
	cout<<"K"<<y<<endl;

}