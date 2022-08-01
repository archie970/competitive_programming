#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a =0; 
    int b;
    cin >>b ;
    for (int i = 0; i < b; i++)
    {
        
        string c;
        cin >>c ;
        if (c[1]=='+')
        {
           a = a+1;
        }
        else
        {
            a = a-1;
        }
        
        

    
    }
    
    cout<<a;
        
    return 0;
}
