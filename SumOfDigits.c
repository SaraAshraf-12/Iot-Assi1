#include<stdio.h>
int main(){
    int sum=0, number;
    scanf("%d",&number);
    if(number<0){
        number=-number;
    }
    while(number>0){
        sum+=number%10;
        number/=10;
    }
    printf("%d",sum);
}