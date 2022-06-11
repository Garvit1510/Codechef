#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int P[N];
        int p=0;
        for(int i=0 ; i<N ; i++)
        {
            cin>>P[i];
        }
        for(int i=0 ; i<N ; i++)
        {
            for(int j=i ; j<N ; j++)
            {
                if(P[i]>P[j])
                p++;
            }
        }
        if(p>0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}
