    #include <stdio.h>
    int main(){
        int eng,maths,phy,sci,hindi;
        float total_marks;
        printf("enter the marks of the subjects = eng,maths,phy,sci,hindi\n");
        scanf("%d\n",&eng);
        scanf("%d\n",&maths);
        scanf("%d\n",&phy);
        scanf("%d\n",&sci);
        scanf("%d\n",&hindi);
        total_marks=(eng+maths+phy+sci+hindi)/500;
        printf("total marks = %d",total_marks);
        return 0;

    }