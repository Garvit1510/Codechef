#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N ;
        cin>>N;
        int k=0;
        int A[N];
        for(int i=0 ; i<N ; i++)
        {
            cin>>A[i];
        }
        for(int i=0 ; i<N ; i++)
        {
            if(A[i]==A[i+1])
            {
                k++;
            }
        }
        cout<<N-k<<endl;
    }
}
