# include<stdio.h>

int main(){
    int n, prime;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=2;i<n/2;i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime==0){
        printf("this is not a prime number");
    }
    else{
        printf("this is a prime number");
    }
    return 0;
}