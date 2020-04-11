#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	while (T--)
	{
	    int a,b,c;
	    int x,y,z;
	    cin>>a>>b>>c>>x>>y>>z;
	 if (a>17 || b>17 || c>17 || x>100 || y>100 || z>100)
	 continue;
	 
	    if (a>b)
	    {
	        if (b>c && (a!=c))
	            if (x>y && (y >z))
	                cout<<"FAIR"<<endl;
	           else cout<<"NOT FAIR"<<endl;
	        else if (c>a && b!=c)
	            if (x>y && (z>x))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (b==c)
	            if (x>y &&( y==z))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (b<c && a!=c)
	        	 if (x>y && y<z)
	        	 	cout<<"FAIR"<<endl;
	        	 else cout<<"NOT FAIR"<<endl;
	        else if (a==c)
	            if (x>y && (x==z))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (a>c && b!=c)
	        	if (x>y && x>z)
	        		cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;

	    }
	    else if (a<b)
	    {
	        if (a>c && (c!=b))
	            if (x<y &&( x>z))
	                cout<<"FAIR"<<endl;
	           else cout<<"NOT FAIR"<<endl;
	        else if (c>a && c!=b)
	            if (x<y && (z>x))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (c>b && a!=c)
	        	if (x<y && z>y)
	        		 cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (b==c)
	            if (x<y &&( y==z))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (a==c)
	            if (x<y && (x==z))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (b>c && a!=c)
	        	if (y>x && y>z)
	        		cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	    }
	    else if (a==b)
	    {
	        if (b>c && b!=c)
	            if (x==y && (y >z))
	                cout<<"FAIR"<<endl;
	           else cout<<"NOT FAIR"<<endl;
	        else if (c>b && b!=c)
	            if (x==y && (z>y))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	        else if (b==c)
	            if (x==y && (y==z))
	                cout<<"FAIR"<<endl;
	            else cout<<"NOT FAIR"<<endl;
	    }
	       
	    
	}
	return 0;
}
