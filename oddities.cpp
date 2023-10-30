#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        printf("%d is %s\n", x, x%2==0? "even" : "odd");
    }
}