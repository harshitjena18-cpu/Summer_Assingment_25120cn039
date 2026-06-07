#include<stdio.h>
int main(){
    int f1=0,f2=1,f3,i,n;
    int num, flag=0;
    printf("Enter the range upto whuch series is to be printed: \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d",f1);
        printf("%d",f2);
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
    
    printf("Enter the term you want to find: \n");
    scanf("%d",&num);
    for(i=0;i<=n;i++){
        f1=0;
        f2=1;
        f3=f1+f2;
        f1=f2;;
        f2=f3;
        if(num==f1 ||  num==f2 || num==f3){
            i=i+1;
            printf("THE TERM IS FOUND AT %d POSITION",i);
            flag=0;
        }
    }
    if(flag==1){
        printf("THE TERM IS NOT PRESENT IN THE SERIES \n");
    }
 return 0;

}
