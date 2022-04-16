#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	int i=0;
	double sum=0.0;
	int t=1;
	for(i=1;i<=100;i++)
		{
			sum += t*1.0/i;
			t=-t;
		} 
	cout<<sum;
		return 0;
}
	
	
