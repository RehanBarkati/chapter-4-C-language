# include<stdio.h>

int main(){
    int i,sum=0;
    for(i=1;i<=10;++i){
      sum+=8*i;
    }
    printf("sum of numbers occuring in the multiplication of 8 is %d",sum);
    return 0;
}