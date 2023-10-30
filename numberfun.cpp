#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a,b,c;
    scanf("%d", &n);
    while(n--){
        scanf("%lf %lf %lf", &a, &b, &c);
        if(a+b==c || a-b==c || b-a==c || a*b==c || a/b==c || b/a==c) printf("Possible\n");
        else printf("Impossible\n");
    }
    return 0;
}