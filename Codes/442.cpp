#include<bits/stdc++.h>

int main(){
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b) std::swap(a,b);
    if(b>c) std::swap(c,b);
    if(a>b) std::swap(a,b);
    printf("%d,%d,%d",a,b,c);
    return 0;
}