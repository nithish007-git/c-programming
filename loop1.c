#include<stdio.h>
int main(){
    int a;
    int sum=0;
    for(int i=1;i<=7;i++){
        printf("  %d ",i);
        sum+=i;
    }
    printf("  %d \n",sum);
}
