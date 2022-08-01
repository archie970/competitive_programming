#include<iostream>
#include <cmath>
#include<string>  
using namespace std;
int main()
{
    int count = 1;
    // cin>>count;
    for (int i = 0; i < count; i++)
    {
        string n;
        string s;
        getline(cin,n);
        
        for (int i = n.size()-1; i >=0; i++)
        {
            
            char c = n[i];
            int a = c - '0';
            a = a*pow(10,i);
            s = s+ to_string(a) +" ";

        }
        cout<<s<<endl;

        
        

    }
    
}
