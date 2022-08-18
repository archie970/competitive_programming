#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,k,w;
 cin >>k>>w>>n ;
 n = k*(n*(n+1))/2;
 if (n-w < 0)
 {
    n =w;
 }
 
 cout<<n-w;


 
return 0;
}