#include<iostream>
using namespace std;
int main()
{
    int T ; 
    cin>>T;
    while(T--)
    {
        int X;
        cin>>X;
        int Y ; 
        cin>>Y;
        int a;
        a=(Y-X)/8;
        if(X+a*8>=Y)
        cout<<a<<endl;
        else
        cout<<a+1<<endl;
    }
}
