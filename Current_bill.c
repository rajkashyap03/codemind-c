#include<stdio.h>
int main(){
    int a;
    float b,c;
    scanf("%d",&a);
    if(a<=199){
        b=1.20*a+100.00;
    }
    else if(a==200 || a<400){
        b=1.50*a+100.00;
    }
    else if(a==400 || a<600){
        b=1.80*a+0.15*a*1.80;
    }
    else{
        b=2.00*a+0.15*a*2.00;
    }
    printf("%0.2f",b);
    }
