#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision;
using namespace std;

int main(){

	int T;
	cin>>T;
	while(T--)
	{
		cpp_int N,K;
		cin>>N>>K;
		
		if(N%(K*K)==0)
        {
            
                cout<<"NO"<<endl;
           
        }

		else cout<<"YES"<<endl;
	}

	return 0;
}