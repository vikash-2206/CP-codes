#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

	ll n;
	cin>>n;
	ll a[n];
	ll odds=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]%2 !=0)
			 odds++;

	}
	ll oddmin=INT_MAX,index2=-1;
	if (odds%2 !=0)
	{
		for (ll i = 0; i < n; ++i)
		{
			/* code */
			if (a[i] <= oddmin && a[i]%2 != 0 )
			{	index2 =i;
				oddmin =a[i];
			}
		}
	}
	ll ans=0;
	
	for(ll i =0;i<n;i++)
	{
		if (i == index2 )
			continue;
		else ans += a[i];
	}
	cout<<ans;

	return 0;
}