#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int binary_search(int arr2[],int k,int sz)
{
	int left = 0;
	int right = sz-1;
	//int t = 0;
	//scanf("%d",t);
	while(left<=right)
		{	int mid = left+(right-left)/2;
			if(k<arr2[mid])
				{
					right=mid-1;
				}
			else if(k>arr2[mid])
				{
					left=mid+1;
				}
			else 
				{
					return mid;
				}
		}
		return -1;
} 

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 9;
	int ret = 0; 
	ret = binary_search(arr , k, sz);
	if(ret==-1)
		{
			printf("没找到");
		}
	else
		{
			printf("找到了，下标是：%d",ret);	
		}
	
	return 0;
}
	
	
