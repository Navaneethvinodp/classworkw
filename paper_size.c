    #include <stdio.h>
   
    int main(){
        
        int l,b,n,i;
        l= 1189;
        b= 841;
        printf("enter the number of seizes that you need ");
        scanf("%d\n",&n);
        for(i=0;i<n;i++){
            if (l>b){
                l=l/2;
                printf("A(%d)=%d x %d\n",i+1,l,b);
            }
            else{
                b=b/2;
                printf("A(%d)=%d x %d\n",i+1,l,b);
            }
        }
    }
        

        
        


    