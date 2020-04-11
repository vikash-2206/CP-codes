#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int m;
	cin>>m;
	int  arr[m];
	for (int i=0;i<m;i++)
		cin>>arr[i];

	sort(arr,arr+m,greater<int>());
	
	std::vector<int> ans;
	int j=0;
	ans.push_back(arr[j]);
	while(j<m && arr[j]==arr[j+1])
	{
		j++;
	}
	j++;
	while(j<m)
	{	int count=0;
		int i=j;
		while( i<m-1 && arr[i]==arr[i+1])
		{
			count++;
			i++;
		}
		if(count==0)
			ans.push_back(arr[j]);
		else if(count>0)
		{
			ans.push_back(arr[j]);
			ans.insert(ans.begin(),arr[j]);
		}


		j = j+count+1;
	}

	cout<<ans.size()<<endl;

	for (int i = 0; i < ans.size(); ++i)
	{
		/* code */
		cout<<ans[i]<<" ";
	}


	return 0;
}