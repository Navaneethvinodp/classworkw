#include <stdio.h>
int main(){
    int km,m,feet,inch,cm;
    printf("enter the km");
    scanf("%d",&km);
    m=km*1000;
    feet=km*3280;
    inch=km*39370;
    cm=km*100000;
    printf("meter=%d\n feet=%d\n inches=%d\n cm=%d\n",m,feet,inch,cm);
    
}