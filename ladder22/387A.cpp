#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//code by vikash choudhary
int main()
{
	string s,t,p="";
	cin>>s>>t;

	p[4]=(s[4])-(t[4]);
	if(p[4]<0)
		{
			p[4] += 10;
			s[3]--;
		}
	p[3]=s[3]-t[3];
	if(p[3]<0)
	{
		p[3] +=10;
		s[1]--;
	}

	p[2]=':';
	p[1]=s[1]-t[1];
	if(p[1]<0)
	{
		p[1] =+10;
		s[0]--;
	}
	if(p[3]>=6)
	{
		p[3] -= 6;
		p[1]++;
	}
	p[0]=s[0]-t[0];
	if (p[0]<0)
	{
		p[0] =+ 24;
	}
	for(int i=0;i<5;i++)
	{	
		if(i==2)
			cout<<':';
		else cout<<p[i]+0;
	}
	return 0;
}