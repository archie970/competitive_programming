#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
   return n*(n+1)/2;
}
int len(int n)
{
   if(n == 0)
   return 0;
   return 1+ len(n/10);
}

int main()
{
 int count;
 
 
 cin >>count ;
 while(count--)
 {
   int n;
   cin>>n;
   int d = n%10;
   int l = len(n);
   int max = (d-1)*digit(4)+ digit(l);
   cout<<max<<endl;



 
 }
return 0;
}