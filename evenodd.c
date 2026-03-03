#include<stdio.h>
int main(){
    int n;
    printf("enter the number which you want check the input is even or odd:",n);
    scanf("%d",&n);
    if(n%2==0){
        printf("your given input is even");
    }
    else {
        printf("your given input is odd");
    }
return 0;
}
