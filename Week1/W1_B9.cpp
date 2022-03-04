#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main (){
     int a, b, c;
     float p, S;
     cin >> a >> b >> c;
     if (a + b > c && b + c > a && c + a > b)
        {
            p = (float)(a+b+c)/2;
            S = (float)sqrt(p*(p-a)*(p-b)*(p-c));
            cout << fixed << setprecision(2) << S;
        }
     else cout << "invalid";
 }
