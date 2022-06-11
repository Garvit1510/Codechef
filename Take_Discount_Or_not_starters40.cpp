
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N , X , Y;
	    cin>>N>>X>>Y;
	    int A[N];
	    int tp1=0,tp2=0;
	    for(int i=0 ; i<N ; i++)
	    {
	        cin>>A[i];
	        	        tp1+=A[i];
	        if(A[i]-Y<=0)
	        {
	            tp2+=0;
	        }
	        else
	        {
	            tp2=tp2+A[i]-Y;
	        }
	    }
	    tp2+=X;
	    if(tp1>tp2)
	    {
	        cout<<"COUPON\n";
	    }
	    else
	    {
	        cout<<"NO COUPON\n";
	    }
	}
	return 0;
}
