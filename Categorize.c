#include<stdio.h>
int main(){
    int h;
    scanf("%d",&h);
    if(h<150) printf("The person is Dwarf.");
    else if(165>=h && h>150) printf("The person is average heighted.");
    else if(195>=h && h>165) printf("The person is taller.");
    else printf("Abnormal height.");
    
}