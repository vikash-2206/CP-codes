#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m[5],w[5],hs=0,hu=0;
	for (int i =0 ;i<5;i++)
	{
		cin>>m[i];
	}
	for (int i =0 ;i<5;i++)
	{
		cin>>w[i];
	}
	cin>>hs;
	cin>>hu;
	long long int ans = max(3 * 50 , (250 - m[0])*2 - 50 * w[0]);
	ans += max(3 * 100 , (250 - m[1])*4 - 50 * w[1]);
	ans += max(3 * 150 , (250 - m[2])*6 - 50 * w[2]);
	ans += max(3 * 200 , (250 - m[3])*8 - 50 * w[3]);
	ans += max(3 * 250 , (250 - m[4])*10 - 50 * w[4]);
	ans += 100*hs;                                                                                                            
	ans -= 50*hu;
	cout<<ans<<endl;
	



	return 0;
}