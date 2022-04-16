#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int Add(int * k)
{	
	(*k)+=1; 
}	

int main()
{
	int k=0;
	Add(&k);
	printf("%d\n",k);
	Add(&k);
	printf("%d\n",k);
	Add(&k); 
 	printf("%d\n",k);
	return 0;
}
	

