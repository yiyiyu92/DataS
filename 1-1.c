#include <stdio.h>

main()
{
	int i, j;
	int a[100];
	i=0;
	while(scanf("%d", &a[i]) != EOF){
		i++;
	}
	i--;
	for(j=i;j>0;j--){
		printf("%d ", a[j]);
	}
	printf("%d", a[j]);
	printf("\n");
}
