#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    string even = l==r? "Even " : "Odd ";
    if(l==0 && r==0) cout << "Not a moose";
    else cout << even << max(l,r)*2;
}