# include<stdio.h>

int main(){
   /* int n, product=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        product*=i;
    }
    printf("the value of %d! is %d",n,product);*/

    int i=1,n,product=1;
     printf("Enter the value of n\n");
    scanf("%d",&n);
    while (i<=n)
    {
      product*=i;
      ++i;
    }
    printf("the value of %d! is %d",n,product);
    return 0;
}