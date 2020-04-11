#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){

	int a,b,c=0;
	cin>>a>>b;
	vector<int> x,y;
	while(a>=3)
	{
		int k = a%3;
		x.push_back(k);
		a= a/3;
	}
	x.push_back(a);

	while(b>=3)
	{
		int k = b%3;
		y.push_back(k);
		b= b/3;
	}
	y.push_back(b);
	
	
	if (x.size() > y.size())
	{
		int n = x.size()-y.size();
		for (int i=1;i<=n;i++)
		{
			y.push_back(0);
		}
	}
	if (x.size() < y.size())
	{
		int n = y.size()-x.size();
		for (int i=1;i<=n;i++)
		{
			x.push_back(0);
		}
	}
	int size = x.size();
	int z[size];
	for (int i = 0; i < size; ++i)
	{	
		//cout<<y[i];

		z[i] = x[i] + y[i];
		z[i] %= 3;
		//cout<<z[i];
		c += (pow(3,i))*z[i];
		
	} 
	cout<<c<<endl;
	

	return 0;
}