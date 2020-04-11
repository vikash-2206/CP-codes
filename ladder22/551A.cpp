#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		B[i]=1;

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (A[j]<A[i])
				B[j]++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<B[i]<<" ";
	}

	
	return 0;

}