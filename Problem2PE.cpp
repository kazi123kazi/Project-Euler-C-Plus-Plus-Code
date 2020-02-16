#include<bits/stdc++.h>
#define max 4000000
using namespace std;
int main()
{
	long long int f1=1,f2=2,sum=2,f3=0;
	while(f3<max)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		if(f3%2==0)
		{
		    sum+=f3;
		  //	cout<<f3<<" ";	
		}
		
		//cout<<f3<<" ";
	}
	cout<<sum;
	
	return 0;
}
