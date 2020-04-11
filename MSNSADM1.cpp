#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,max=0;
		cin>>N;
		int A[N],B[N],C[N];
		for (int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for (int i=0;i<N;i++)
		{
			cin>>B[i];
			C[i]= (A[i]*2) - B[i];
			if (C[i]>max)
			{
				max = C[i];
			}
		}
			if (max<=0)
				cout<<"0"<<endl;
			else cout<<max*10<<endl;

	}

	return 0;
} 