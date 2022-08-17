#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 int a  = 0;
 int n ;
 while(count--)
 {
   cin>>n;
   a += n;
 }
// cout<<a;
 if(a==0)
 {
   cout<<"EASY";
 }
 else
 {
   cout<<"HARD";
 }
 
return 0;
}