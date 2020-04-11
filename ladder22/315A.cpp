//code by vikash
#include<bits/stdc++.h>
using namespace std;
int main(){
	

	int n;
	cin>>n;
	
	int a[n],b[n],ans[1001];
	memset(ans,0,sizeof(ans));
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
		cin>>b[i];
		if(a[i]!=b[i])
		{
			ans[a[i]]++;
			ans[b[i]]++;
		}
	}
	int count=0;
	for (int i = 0; i < 1001; ++i)
	{
		if (ans[i]==2)
		{
			count++;			/* code */
		}
		/* code */
	}
	cout<<n-count<<endl;
		
	 

	return 0;
}