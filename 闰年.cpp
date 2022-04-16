#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int is_leap_year(int n)
{
	if(n%4==0 && n%100!=0 || n%400==0)
		return 1;
	else 
		return 0;
}

int main()
{
	int year = 0;
	//打印1000-2000之间的闰年
	for(year=1000;year<=2000;year++)
		{
			if(1==is_leap_year(year))
			printf("%d是闰年\n",year); 
		} 
	return 0;
}
	
	
