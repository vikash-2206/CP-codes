#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//code by vikash choudhary
int main()
{	freopen("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	ll ans=0;
	cin>>ans;
	ll A[3],B[3];
	for (int i = 0; i < 3; ++i)
	{	
		cin>>A[i]>>B[i];
		if(A[i]==ans)
			ans=B[i];
		else if(B[i]==ans)
			ans=A[i];
		/* code */
	}

	cout<<ans<<endl;
	return 0;
}