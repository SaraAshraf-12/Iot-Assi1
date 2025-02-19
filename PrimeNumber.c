#include <stdio.h>
int main() {
    int number,count=0;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(number%i==0)
        count++;
    }
    if(count==2)
    printf("Number is Prime");
    else
    printf("Number not Prime");
}