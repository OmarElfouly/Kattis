#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r,e,c;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d", &r, &e, &c);
        if(e-c>r) printf("advertise\n");
        else if(e-c==r) printf("does not matter\n");
        else printf("do not advertise\n");
    }
    return 0;
}