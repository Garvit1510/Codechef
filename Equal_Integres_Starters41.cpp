#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X , Y;
        cin>>X>>Y;
        int nos=0;
        while(X!=Y)
        {
            while(X>Y)
            {
                Y+=2;
                nos++;
            }
            while(X<Y)
            {
                X+=1;
                nos++;
            }  
        }
        cout<<nos<<endl;
    }
}
