#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
int flag = 0;
for (auto i : s)

{
    // cout<<i<<endl;
    if(i ==  '4' || i== '7'){
        flag += 1;
        
    }
}
// cout<<flag<<endl;
if (flag==0)
{
    cout<<"NO";
}
else if (flag ==  4 || flag== 7)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}



return 0;
}