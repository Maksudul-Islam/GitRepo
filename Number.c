#include <stdio.h>
int main(){
    int n;
    printf("How many number do you want: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
}