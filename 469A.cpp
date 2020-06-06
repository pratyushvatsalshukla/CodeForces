#include<iostream>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int p ;
	cin >> p ;
	int arr[p] ;
	int q ;
	cin >> q ;
	int arr1[q] ;
	
	for(int i = 0 ; i < p ; i++)
	{
		cin >> arr[i] ;
	}
	
	for(int i = 0 ; i < q ; i++)
	{
		cin >> arr1[i] ;
	}
	
	int arr2[n] ;
	for(int i = 0 ; i < p ; i++)
	{
		for(int j = 0 ; j < q ; j++)
		{
			if(arr[i] == arr1[j])
			{
				arr2[i] = arr[j] ;
			}
			else
			{
				arr2[i] == arr[j] ;
			}
		}
	}
	
}
