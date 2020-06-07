//#include<bits/stdc++.h>
//using namespace std ;
//int main(){
//	
//	int q ;
//	cin >> q ;
//	for(int i = 0 ; i < q ; i++)
//	{
//		int n ;
//		cin >> n ;
//		long int a[n] , b[n] ;
//		long int sum = 0 ;
//		for(int j = 0 ; j < n ; j++)
//		{
//			cin >> a[j] ;
//			sum += a[j] ;
//			b[j] = a[j]*n;
//		}
//
//		sort(b, b+n) ;
////		for(int j = 0 ; j < n ; j++)
////		{
////			cout<< b[j] ;
////		}
//		for(int j = 0 ; j < n ; j++)
//		{
//			if(b[j] == sum)
//			{
//				cout << b[j]/n << endl;
//				break ;
//			}
//			else if(b[j] > sum)
//			{
//				cout << b[j]/n << endl;
//				break ;
//			}
//		}
//		
//	}
//}

#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int q ;
	cin >> q ;
	for(int i = 0 ; i < q ;i++)
	{
		int n ;
		cin >> n ;
		int a[n], b[n] ;
		int sum = 0 ;
		for(int j = 0 ; j < n ; j++)
		{
			
			cin >> a[j] ;
			sum += a[j] ;
			b[j] = a[j]*n ;
			
		}
		sort(b, b+n) ;
		for(int j = 0 ; j < n ; j++)
		{
			if(b[j] == sum)
			{
				cout << b[j]/n << endl ;
				break ;
			}
			else if(b[j] > sum)
			{
				cout << b[j]/n << endl ;
				break ;
			}
		}
	}
	
}



































