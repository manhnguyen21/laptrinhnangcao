#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    for ( int i = -n; i <= n; i++ )
    {
        for ( int j = -n; j <= n; j++ )
        {

            temp = i;
            if ( i >= -(n+temp) && i <= n+temp )
                temp = j;
            if ( j >= -(n+temp) && j <= n+temp )
                cout << "* ";
            else cout << ". " ;

        }
        cout << endl;
    }
    return 0;
}
