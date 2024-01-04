#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f",&a);
    double d;
    if(a<=10000){
        b=a*0.8;
        c=a*0.2;
    }
    else if(a<=20000 && a>10000){
        b=a*0.9;
        c=a*0.25;
    }
    else if(a>20000){
        b=a*0.95;
        c=a*0.3;
    }
    d=a+b+c;
    printf("%.2f",d);
}