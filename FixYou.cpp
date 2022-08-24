#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 while(count--)
 {
   int a,b;
   cin>>a>>b;
   int sm = 0;
   for (int i = 0; i < a; i++)
   {
      for (int j = 0; j < b; j++)
      {
         char c;
         cin >> c;
         // cout<<i<<j<<"  ";
         
         if(i == a-1 && j != b-1 && c != 'R')
         {
            sm += 1;
         }
         if(j == b-1 && i != a-1 && c != 'D')
         {
            sm += 1;
         }
      }
      // cout<<endl;
      
   }
   cout<<sm<<endl;
   
   
 
 }
return 0;
}