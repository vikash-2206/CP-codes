#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int C[N+1];
		int H[N+1];
		int RL[N+1];
		memset(RL, 0, sizeof(RL));
		C[0]=0;
		H[0]=0;
		for(int i=1;i<=N;i++)
		{
			cin>>C[i];
		}
		for(int i=1;i<=N;i++)
		{
			cin>>H[i];
		}
		

		sort(H+1,H+N+1);
		sort(RL+1,RL+N+1);
		int count=0;
		for(int i=1;i<=N;i++)
		{
			if (H[i]==RL[i])
				count++;
			else break;
		}
		if (count==N)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}
	return 0;
}