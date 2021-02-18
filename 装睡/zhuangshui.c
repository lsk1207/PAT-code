#include <bits/stdc++.h>//一次一输出式
using namespace std;
int main ()
{
	int n,a,b;
	string c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c>>a>>b;
		if(a<15||a>20||b<50||b>70)
		{
			cout << c << endl;
		}
	}
	return 0;
}

