#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Na , Nb , Nc;
        cin>>Na>>Nb>>Nc;
        if(Na>Nb+Nc || Nb>Na+Nc || Nc>Na+Nb)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
