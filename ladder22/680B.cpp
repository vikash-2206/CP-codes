#include <bits/stdc++.h>
using namespace std;
 int main()
{
	int a,n,count=0;
	cin>>n>>a;
	a--;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
		/* code */
	}
	if(A[a]==1)
		count++;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		if (a+i < n && a-i >=0 )
		{
			if(A[a-i]==1 && A[a+i]== 1)
				count = count+2;
		}
		 
		else if (a+i < n)
			{
				if (A[a+i]==1)
					count++;
			}
		else if (a-i >= 0)
		{
			if (A[a-i]==1)
				count++;
		}
		
	}

	cout<<count<<endl;

	return 0;
}