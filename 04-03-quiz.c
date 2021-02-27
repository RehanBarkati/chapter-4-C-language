# include<stdio.h>

int main(){
   int a;
   printf("Enter the value of a\n");
   scanf("%d",&a);
    while(a<=20){
    if(a>=10){
        printf("the value of a is %d\n",a);
        }
      else if (a<10){
        printf("Your number is below 10\n");
      }
      a++;
    }
    printf("your number is greater than 20");
    return 0;
}