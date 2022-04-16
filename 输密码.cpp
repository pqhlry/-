#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	char password[10]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
		cout<<"请输入密码"; 
		cin>>password;
		if(strcmp(password,"123456")==0)  
		{
			cout<<"密码正确";
			break;
		} 
		else 
		{
			cout<<"请重新输入"<<"\n";
		}	
	}
	if(i==3) cout<<555;
		
		return 0;
}
	
	
