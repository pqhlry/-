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
		cout<<"����������"; 
		cin>>password;
		if(strcmp(password,"123456")==0)  
		{
			cout<<"������ȷ";
			break;
		} 
		else 
		{
			cout<<"����������"<<"\n";
		}	
	}
	if(i==3) cout<<555;
		
		return 0;
}
	
	
