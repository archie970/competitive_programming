#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 int max = 1;
 int i = 1;
 while(max<=count)
 {
    i+=1;
   max += (i*(i+1))/2;
  
   cout<<max<<endl;


 
 }
 cout<<i-1;
return 0;
}