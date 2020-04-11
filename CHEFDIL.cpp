#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    string S;
	    cin>>S;
	    int n = S.length();
	    int a=0;
	    for(int i=0;i<n;i++)
	    {
	    	if (S[i]=='0')
	    	  {
	    	  	a++;
	    	  }
	    	cout<<S[i]<<endl;
	    }
	    cout<<a<<endl;
	    
	    if (n%2==0 && a%2==0)
	    	cout<<"LOSE"<<endl;
	    else if (n%2!=0 && a%2!=0)
	    	cout<<"LOSE"<<endl;
	    else cout<<"WIN"<<endl;
	}
	
	return 0;
}
