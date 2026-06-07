#include<stdio.h>
#include<math.h>
int main(){
    int num,a,r,n=0,result=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    a=num;
    while(a!=0){
        a/=10;
        n++;
    }
    a=num;
    while(a!=0){
        r=a%10;
        result+=pow(r,n);
        a/=10;
    }
    if(result==num){
        printf("IT IS A ARMSTRONG NUMBER \n",num);

    }
    else{
        printf("IT IS NOT A ARMSTRONG NUMBER \n",num);
    }
}