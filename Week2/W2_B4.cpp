#include<iostream>
#include<stdio.h>

using namespace std;
int main (){
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;

    for ( int numChicken = 1; numChicken <= total; ++numChicken )
    {
        if ( numChicken*2+(total-numChicken)*4 == totalLegs )

              {
                cout << "chicken = " << numChicken << ", " << "dog = " << total-numChicken;
                flag = true;
               break;
              }

    }
    if ( flag == false)
        cout << "invalid";
    return 0;

}
