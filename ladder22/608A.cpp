#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//code by vikash choudhary
int main()
{
	ll n,s;
	cin>>n>>s;
	ll F[n],T[n];
	ll maxt = -1,index=-1;
	for (int i = 0; i < n; ++i)
	{
		cin>>F[i]>>T[i];
		if(T[i]+F[i]>=maxt)
			{
				maxt=T[i]+F[i];
				index =i;
			}
		/* code */
	}
	ll ans =T[index]+F[index];
	if(s>ans)
	cout<<s<<endl;
	else cout<<ans<<endl;
	return 0;
}