#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//code by vikash choudhary
int main()
{
	ll na,nb;
	cin>>na>>nb;
	ll k,m;
	cin>>k>>m;
	ll A[na],B[nb];
	for (int i = 0; i < na; ++i)
	{
		cin>>A[i];
		/* code */
	}
	for (int i = 0; i < nb; ++i)
	{
		cin>>B[i];
		/* code */
	}
	if(A[k-1]<B[nb-m])
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	

	return 0;
}