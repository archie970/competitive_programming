#include<bits/stdc++.h>
using namespace std;
int main()
{
 string count;
 int a[26]={};
 cin >>count ;
 for (auto i : count)
 {
   a[int(i)-97]= 1;
 }
 
 int sum = 0;
for (auto i : a)
{
   sum += i;
}
if (sum%2==0)
{
   cout<<"CHAT WITH HER!";
}
else
{
   cout<<"IGNORE HIM!";
}


return 0;
}