# include<stdio.h>

int main(){
    int a=5;
    //a++-->pehle print then increment
    //++a-->pehle increment then print
    printf("the value of a++ is %d\n",++a);
    printf("the value of a is %d\n",a);
    a+=10;
    a-=5;
    printf("the value of a is %d",a);
    return 0;
}