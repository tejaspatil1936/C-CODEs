#include <stdio.h>
int main() {
    int i,n;
        printf("enter the value of n\n");
        scanf("%d",&n);

        for(i=0;i<n;i++){
        
        {for(int j=0;j<i+1;j++)
        printf("*");}
        printf("\n");
        }
    return 0;
}