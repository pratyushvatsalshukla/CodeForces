#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		string name ;
		cin >> name ;
		int length = name.length() ;
		if(length <= 10)
		{
			cout << name <<"\n";
		}
		else if(length > 10)
		{
			int len = length - 2 ;
			cout << name[0] << len << name[length-1] <<"\n" ;			
			
		}
	}

	
}
