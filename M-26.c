#include <stdio.h>

main()
{
	int a;
	int i;

	scanf("%d", &a);
	for(i=1;i<=a;i++){
		printf("%d*%d=%d\n", i, i, i*i);
	}
}
