#include <stdio.h>
int main() {   
    int sal;
    int allow,grosssal,rent;
    
    printf("enter the salary");
    scanf("%d",&sal);
    printf(" %d\n",sal);
    allow=(sal*40)/100;
    printf("%d",allow);
    rent=(sal*20)/100;
    printf("rent %d",rent);
    grosssal=sal-(allow+rent);
    printf("grosssal= %d",grosssal);
};
