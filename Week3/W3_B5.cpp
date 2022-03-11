#include<iostream>

using namespace std;
int main (){
    const int MAX_N = 1000;
    bool check = false;
    int n;
    cin >> n;
    int array[MAX_N];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int k = 0; k < n/2; k++)
    {
        if (array[k] == array[n-1-k])
            check = true;
            break;
    }
    if (check) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
}