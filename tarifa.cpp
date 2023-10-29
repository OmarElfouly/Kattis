#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,p;
    scanf("%d\n%d", &x, &n);
    int sum = x;
    while(n--){
        scanf("%d", &p);
        sum += x-p;
    }
    printf("%d\n", sum);

}