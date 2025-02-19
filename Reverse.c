#include<stdio.h>
#include <string.h>
int main(){
    char temp;
   int num;
   scanf("%d",&num);
   char arr[20];
   sprintf(arr,"%d",num);
   int length = strlen(arr);
   printf("%d\n",length);
   printf("%c\n",arr[0]);
  for(int i=0;i<length/2;i++)
  {
       temp=arr[i];
       arr[i]=arr[length-1-i];
       arr[length-1-i]=temp;
   }
   printf("%s\n",arr);
}