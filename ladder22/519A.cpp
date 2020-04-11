#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//code by vikash choudhary
int main()
{
	string s[8];
	int scorew=0,scoreb=0;
	for (int i = 0; i < 8; ++i)
	{
		cin>>s[i];
		/* code */
	}
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (s[i][j] == 'q')
				scoreb += 9;
			if (s[i][j] == 'r')
				scoreb += 5;
			if (s[i][j] =='b')
				scoreb += 3;
			if (s[i][j] == 'n')
				scoreb += 3;
			if (s[i][j] == 'p')
				scoreb += 1;
			if (s[i][j] == 'Q')
				scorew += 9;
			if (s[i][j]=='R')
				scorew += 5;
			if (s[i][j]=='B')
				scorew += 3;
			if (s[i][j]=='N')
				scorew += 3;
			if (s[i][j]=='P')
				scorew += 1;
			
		}
		
	}
	if (scorew>scoreb)
		cout<<"White"<<endl;
	if(scorew<scoreb)
		cout<<"Black"<<endl;
	if(scoreb==scorew)
	    cout<<"Draw"<<endl;
	
	return 0;
}