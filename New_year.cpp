
#include <iostream>



using namespace std;
   
int main()
{   
    
    int a,b,c;
    cin>>a>>b>>c;
    int m1 = max(max(a,b),c);
    int m2 = min(min(a,b),c);
    int ans = (m1+m2)/2;
    ans = abs(m1-ans)+abs(m2-ans);
    cout<<ans;


	return 0;
}
