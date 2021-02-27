# include<stdio.h>

int main(){
    int a=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    do{
       printf("the value of a is %d\n",a);
       a++;
    } while(a<n);
    return 0;
}