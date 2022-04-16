#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	char a1[]="welcome to C++!!!!!!!";
	char a2[]="#####################";
	int i=0;
	int p=strlen(a1)-1;
	
	while(i<=p)	
	{
		a2[i]=a1[i];
		a2[p]=a1[p];
		i++;
		p--;
		Sleep(1000);
		system("cls");
		cout<<a2<<'\n';	
	}
		return 0;
}
	
	
