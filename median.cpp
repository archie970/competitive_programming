#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;

 while(count--)
 {
    vector<int> i ;
   int v;
 cin >>v ;
 v = v*2;
 while(v--)
 {
   int x;
   cin>>x;
   i.push_back(x);


 
 }
 
   sort(i.begin(), i.end());
   int l = i.size()/2;
   // cout<<i[l]<<"  "<<i[l-1]<<endl;
   cout<< i[l]-i[l-1]<<endl;


 
 }
return 0;
}
