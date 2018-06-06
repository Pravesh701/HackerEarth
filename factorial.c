#include<stdio.h>
 
int main(){
    int num,f=1;
    scanf("%d",&num);
    //x=num;
    while(num>=1){
        f=f*num;
        num--;
    }
    printf("%d",f);
    
}
