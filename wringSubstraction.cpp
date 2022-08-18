#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,count;
 cin >>n>>count ;
 while(count--)
 {
    if (n%10 ==0)
    {
        n = n/10;
    }
    else
    {
        n = n-1;
    }
    
    
 
 }
 cout<<n;
return 0;
}