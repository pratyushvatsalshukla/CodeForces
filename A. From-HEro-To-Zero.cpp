#include<iostream>
using namespace std ;
int main(){
    long long t, n, k ;
    cin >> t ;
    for(int i = 0 ; i < t ; i++ )
    {
        long  Count = 0 ;
        cin >> n >> k ;
        while(n != 0)
        {
            if( n%k > 0)
            {
                n = n - 1 ;
                Count++ ;

            }
            else
            {
                 n = n/k ;
                Count++ ;
            }
        }
        cout << Count << "\n" ;
    }

}
