#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        int s=0,l=0;
        cin>>N;
        string A[N];
        for(int i=0 ; i<N ; i++)
        {
            cin>>A[i];
            if(A[i]=="START38")
            {
                s++;
            }
            else
            {
                l++;
            }
        }
        cout<<s<<" "<<l<<endl;
    }
}
