#include<iostream>

using namespace std;
int main (){
    const int MAX_N = 1000;
    int n;
    cin >> n;
    int a[MAX_N];
    for ( int i = 1; i <= n; i++)
        cin >> a[i];
    for ( int i = 1; i <= n; i++ )
    {
        if ( a[i] != a[i-1] )
            cout << a[i] << " ";
    }    
}