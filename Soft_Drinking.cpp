
#include <iostream>
using namespace std;
bool comp(int a, int b)   
{   
    return (a < b);   
}   
int main()
{   int ans =5;
    // n, k, l, c, d, p, nl, np
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks = ((k*l)/nl)/n;
    int lime = (c*d)/n;
    int salt = (p/np)/n;
    if (salt<lime)
    {
        /* i */
        ans = salt;
    }
    else 
    {
        ans = lime;
    }
    if (ans>drinks)
    {
        ans=drinks;
    }

    cout<<ans;

    
        

        




    

    


	return 0;
}
