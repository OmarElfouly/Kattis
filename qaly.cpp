#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    double qaly = 0;
    while(t--){
        double a,b;
        scanf("%lf %lf", &a, &b);
        qaly += a*b;
    }
    printf("%.3lf\n", qaly);
}