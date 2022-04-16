#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int is_prime(int n)
{
	int p = 0;
	
	for(p=2;p<=sqrt(n);p++)
	{
		if(n%p==0)
		return 0;
	}
	return 1;
		
} 

int main()
{
	int i = 0;
	for(i=101;i<=200;i+=2)
		{
			if(is_prime(i)==1)
			printf("%d ",i);
		}
	return 0;
}
	
	
