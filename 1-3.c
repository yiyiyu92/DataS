#include <stdio.h>

main()
{
	int a[6];
	int i;
	for(i=0;i<6;i++){
        scanf("%d", &a[i]);
	}
	int tot;
	for(i=0;i<6;i++){
		tot+= (a[i]*a[i]*a[i]);
	}
	printf("%d\n", tot);
}
