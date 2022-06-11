#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X , Y ; 
        cin>>X>>Y;
        int a , b;
        a=(500-(X*2))+(1000-((X+Y)*4));
        b=(1000-Y*4)+(500-(X+Y)*2);
        if(a>b)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
}
