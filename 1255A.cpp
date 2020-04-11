#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,x=0,ans=0;
        cin>>a>>b;
        x=b-a;
        if(x<0)
        x= -(x);
        
        if(x>=5)
        {
            ans = ans+(x/5);
            x=x%5;
        }
        if(x<5 && x>2)
        {
            ans = ans + (x/2);
            x = x%2;
        }
        if (x==1)
        ans++;
        
        cout<<ans<<endl;
        
    }
    
    
    
    return 0;
}