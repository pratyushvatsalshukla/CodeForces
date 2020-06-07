#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int num = n ;
	int count = 0 ;
	while(num > 0)
	{
		if(num >= 100)
		{
//			cout << "100 Done" ;
			count += 1 ;
//			cout << count << endl ;
			num = num - 100 ;
		}
		else if(num % 20 == 0)
		{
//			cout << "20 Done" ;
			count += 1 ;
//			cout << count << endl ;
			num = num - 20 ;
		}
		else if(num % 10 == 0)
		{
//			cout << "10 Done" ;
			count += 1 ;
//			cout << count << endl ;
			num = num - 10 ;
		}
		else if(num % 5 ==0)
		{
//			cout << "5 Done" ;
			count += 1 ;
//			cout << count << endl ;
			num = num - 5 ;
		}
		else{
//			cout << "1 Done" ;
			count +=1 ;
//			cout << count << endl ;
			num = num - 1 ;
		}
	}
	cout << count ;
	
	
}
