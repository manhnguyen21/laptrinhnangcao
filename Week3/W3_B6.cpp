#include<iostream>
#include<string>

using namespace std; 
int main(){
    int num_word = 0;
    string s;
    getline(cin, s);
    s = " " + s; 
    for (int i = 1; i < s.length(); i++) { 
        if (s[i] != ' ' && s[i-1] == ' ') {
            num_word++;
        }
}   
    cout << num_word << endl;
}