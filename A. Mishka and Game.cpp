#include<iostream>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int countA = 0, countB = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int a, b ;
		cin >> a >> b ;
		if(a < b)
		{
			countB++ ;
		}
		else if(a > b)
		{
			countA++ ;
		}
		else
		{
			countA++ ;
			countB++ ;
		}
	}
	if(countA == countB)
	{
		cout << "Friendship is magic!^^" ;
		exit(0) ;
	}
	else if(countA > countB)
	{
		cout << "Mishka" ;
		exit(0) ;
	}
	else
	{
		cout << "Chris" ;
		exit(0) ;
	}
	
}
