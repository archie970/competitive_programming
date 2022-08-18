#include<bits/stdc++.h>
using namespace std;
int main()
{
 int count;
 cin >>count ;
 int i =1;
 int c = count;
vector <pair<int,int> > v;
int n ;
 while(count--)

 {
    cin>>n;
    pair <int ,int> p= {n,i++};
    
    v.push_back(p);

 }
    sort(v.begin(), v.end());
  
     // Printing the sorted vector(after using sort())
    // cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<c; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        
        cout<< v[i].second<<" ";
    }

return 0;
}