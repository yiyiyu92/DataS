#include <stdio.h>

main()
{
	int a, i, check;
	check = 0;
	int tot;
	tot = 1;
	scanf("%d", &a);
	printf("1");
	for(i=2;i<=a;i++){
		tot += i;
		printf(" + %d", i);
	}
	printf(" = %d\n", tot);
}
