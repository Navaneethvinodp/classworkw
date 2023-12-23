    #include <stdio.h>
   
    int main(){
        
        int l,b,r;
        int reactangle_area,reactangle_peri,circle_area,circle_per;
        printf("enter the l,b,r\n");
        scanf("%d\n",&l);
        scanf("%d\n",&b);
        scanf("%d\n",&r);
        reactangle_area= l*b;
        reactangle_peri=2*(l+b);
        printf("are= %d\n",reactangle_area);
        
        printf("perimeter of reactangele=%d\n",reactangle_peri);
        circle_area=3.15*(r*r);
        circle_per=2*3.15*r;
        printf("%d\n",circle_area);
        printf("%d\n",circle_per);

        
        


    }