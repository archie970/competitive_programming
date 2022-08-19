#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 vector <int> v;
 int max = 1;
 int n1 = 0;
 cin>>n1;
 count -= 1;
 while(count--)
 {
   int n ;
   cin>>n;
   if(n>n1)
   {
      max += 1;
      n1 = n;
   }
   else{
      v.push_back(max);
      max = 1;
      n1 = n;
   }
   // cout<<n<<"  "<<max<<endl;
 
 }
 v.push_back(max);
//  cout<<max<<endl;
 auto m = *max_element(v.begin(),v.end());
 cout<<m;

return 0;
}