#include<bits/stdc++.h>
using namespace std ;
int main(){
	int a, b ;
	cin >> a >> b ;
	int count = 0 ;
	while(a>0)
	{
		a = a/10 ;
		count++ ;
	}
	int arr[count] ;
	while (a > 0){
    int temp1 = a%10 ;
    int temp2 = b%10 ;
    a = a/10 ;
    b = b/10 ;
    int Xor = temp1^temp2 ;
    static int i = 1 ;
    arr[count-i] = Xor ;
    i++ ;
	}
	for(int i = 0 ; i < count; i++)
	{
		cout << arr[i] ;
	}

  
	
}
