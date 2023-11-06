#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int min = 1000000001;
    int minindex=0;
    for(int i=0; i<n; i++){
        int in;
        scanf("%d", &in);
        if(in < min) min = in, minindex = i;
    }
    printf("%d\n", minindex);
}