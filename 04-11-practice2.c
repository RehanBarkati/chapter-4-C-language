# include<stdio.h>

int main(){
    /*int i=1, n;
    int sum=0;
    printf("Enter the value of n\n");
     scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
       printf("the sum of first %d natural number is %d\n",n,sum);*/
     int sum=0,n;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(int i=1; i<=n; i++){   
         sum+=i;
     }
     printf("the sum of first %d natural number is %d",n,sum);
    return 0;
}