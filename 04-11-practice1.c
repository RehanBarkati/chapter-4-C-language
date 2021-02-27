# include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("****multiplication table of %d****\n",n);
     for(int i=10;i;--i){
         printf("%d x %d= %d\n",n,i,n*i);
     }
    return 0;
}