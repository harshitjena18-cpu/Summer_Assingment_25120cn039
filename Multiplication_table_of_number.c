#include<stdio.h>
int main(){
    int a,i;
    printf("enter the number for which table is required: \n");
    scanf("%d",&a);
    for(i=0;i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);

    }
    return 0;
}