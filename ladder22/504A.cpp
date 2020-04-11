#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	char p[n],s[n];
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>p[i];
		
		/* code */
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		
		int k = abs(p[i]-s[i]);

		if (k>5)
			k = 10 - k;
		ans +=k;

		/* code */
	}

	cout<<ans<<endl;
	return 0;
}