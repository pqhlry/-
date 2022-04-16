#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	int i=0;
	int j=0;
	int t=0;
	for(i=1;i<10;i++)
	{		cout<<"\n";
			for(j=1;j<=i;j++)
		{
			t=i*j;
			cout<<i<<"*"<<j<<"="<<t<<" ";
		}
	
	}
	   
		return 0;
}
	
	
