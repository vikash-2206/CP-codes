#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[n];
	int dist=0,x=0,y=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i]==1)
			x=i;
		if (a[i]==n)
			y=i;


		/* code */
	}
	int temp =x;
	if (y<x)
		{
			x=y;
			y=temp;
		}
	dist = y - x;
	
	if (dist == n)
		cout<<dist<<endl;
	else{
		int z=0;
		int swapd1 = n-1-y;
		int swapd2 = x-0;
		if (swapd2>swapd1)
			z = swapd2;
		else z = swapd1;

		dist += z;


	}

	cout<<dist<<endl;
	return 0;
}