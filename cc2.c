//Given a number rows
// Input:
// R=5
// Output:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        printf("%d ",j);
	    }
	    printf("\n");
	}
	return 0;
}

