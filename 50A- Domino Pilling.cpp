#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int x, y;
	cin>>x>>y;
	
	cout<<((x*y)%2 == 0 ? x*y/2 : (x*y-1)/2); 
}
