#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	std::vector<int> v;
	int flag=0,ans=-1;
	for(int i = 1;i<=1000;i++)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr[j]==i)
			{	
				if(j==0 || j== n-1)
				{
					v.push_back(j);
					ans=arr[j];
					flag=1;
					break;
				}
				else  v.push_back(j);
				
				sort(v.begin(),v.end());
				for (int k = 0; k< v.size()-1; ++k)
				{
					if(v[k]+1==v[k+1])
					{	
						ans=max(arr[v[k]],arr[v[k+1]]);
						flag=1;
						break;
					}

					/* code */
				}
				if (flag==1)
				{
					/* code */
					break;
				}

			}
		}
		if (flag==1)
		{
			/* code */
			break;
		}
	}	
		
		cout<<ans<<endl;
	

	return 0;
}