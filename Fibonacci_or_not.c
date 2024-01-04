#include<stdio.h>
int main(){
    int num,fib,fib1=0,fib2=1,c,count=0;
    scanf("%d",&num);
    c=num;
    while (c!=0){
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
        c--;
        if(fib1==num) count++;
    }
    if(count>0) printf("True");
    else printf("False");
}