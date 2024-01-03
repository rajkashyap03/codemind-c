#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    z=x*y/(x+y);
    printf("%d",z);
}