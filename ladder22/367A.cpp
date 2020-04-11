#include <bits/stdc++.h>
using namespace std;
int main(){

	string s;
	cin>>s;
	long long int leftsum=0,rightsum=0;
	int i=0,p=0;
	int n = s.length();
	//cout<<s;
	for(int j=0;j< n;j++)
	{
		if (s[j]=='^')
			{	p=j;
				break;
			}
		else continue;
	}
	
	while(s[i]!='^')
	{	if (s[i]=='=')
			{	i++;
				continue;}
		else leftsum += ((s[i]-48)*(p-i));
		i++;
	}
	// cout<<leftsum<<endl;
	
	
	i++;
	while(i!= n)
	{	
		if (s[i]=='=')
			{ i++;
			continue;
		}
		else rightsum += ((s[i]-48)*(i-p));
		i++;

	}
	//cout<<rightsum<<endl;
	if(rightsum == leftsum)
		cout<<"balance"<<endl;
	if(rightsum>leftsum)
		cout<<"right"<<endl;
	if(leftsum>rightsum)
		cout<<"left"<<endl; 

	return 0;
}