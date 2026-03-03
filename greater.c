#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a :",a);
    scanf("%d",&a);
    printf("enter b :",b);
    scanf("%d",&b);
    printf("enter c :",c);
    scanf("%d",&c);
    
    if(a>b){
        if(a>c){
            printf("a is greater than other two ");
            
        }
        
    }
    else if(b>a){
        if(b>c){
            printf("b is greatest");
            
        }
    }
    else if(c>a){
        if(c>b){
            printf("c is greater");
        }
    }
    else{
        printf("all number are same");
    }

return 0;
}
