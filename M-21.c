#include <stdio.h>

main()
{
	int i;
	int a;
	long long int tot;
	scanf("%d", &a);
	tot =1;
	for(i=1;i<=a;i++){
		tot*=i;
	}
	printf("%lld\n", tot);
}
