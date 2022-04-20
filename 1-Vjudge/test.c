#include<stdio.h>
int main(){
    int n,i;
    int temp;
    int a[7]={100,50,20,10,5,2,1};
    scanf("%d", &n);
    printf("%d\n", n);
    for(i=0;i<=7;i++){
        temp=n/ a[i];
        n = n% a[i];
        printf("%d nota(s) de R$ %d,00\n",temp, a[i]);
        
    }
}