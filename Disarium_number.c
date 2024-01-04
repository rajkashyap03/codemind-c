#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,f,i,g=0,h;
    c=0;
    scanf("%d",&a);
    b=a;
    while(a!=0){
        c=c*10+a%10;
        a=a/10;
        f++;
    }
    d=0;
    for(i=1;i<=f;i++){
        e=c%10;
        h=pow(e,i);
        g=g+h;
        c=c/10;
    }
    if(g==b) printf("True");
    else printf("False");
    }