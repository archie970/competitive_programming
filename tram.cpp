#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 
 int max = 0;
 int p = 0;
 while(count--)
 {
    int a,b;
    cin>>a>>b;
    p += b-a;
    if(max < p)
    max = p;
    // cout<<p<<endl;
    
 }

cout<<max<<endl;
return 0;
}