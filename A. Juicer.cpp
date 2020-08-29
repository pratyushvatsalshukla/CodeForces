#include<iostream>
using namespace std ;
int main()
{

    int n, b, d ;
    cin >> n >> b >> d ;
    int a[n] ;
    int Sum = 0 ;
    int Count = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > b)
        {

        }
        else{
            Sum += a[i] ;
        }
        if(Sum > d)
        {
            Sum = 0 ;
            Count++ ;
        }
    }

    cout<< Count ;
}
