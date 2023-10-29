#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    printf("%s\n", s == "OCT 31" || s == "DEC 25" ? "yup" : "nope");
    return 0;
}