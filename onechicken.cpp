#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin >> n >> m;
if(m>n){
    if(m-n==1) cout << "Dr. Chaz will have " << m-n << " piece of chicken left over!";
    else cout << "Dr. Chaz will have " << m-n << " pieces of chicken left over!";
}
else{
    if(n-m==1) cout << "Dr. Chaz needs " << n-m << " more piece of chicken!";
    else cout << "Dr. Chaz needs " << n-m << " more pieces of chicken!";
}
}