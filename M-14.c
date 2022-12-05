#include <stdio.h>

main()
{
	int a;
	scanf("%d", &a);
	printf("%d days\n", a/86400);
	a%=86400;
	printf("%d hours\n",a/3600);
	a%=3600;
	printf("%d minutes\n", a/60);
	a%=60;
	printf("%d seconds\n", a);
}
