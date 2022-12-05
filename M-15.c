#include <stdio.h>

main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<0){
		printf("outside\n");
		return 0;
	}
	if(a>100){
		printf("outside\n");
		return 0;
	}
	if(b<0){
		printf("outside\n");
		return 0;
	}
	if(b>100){
		printf("outside\n");
		return 0;
	}
	printf("inside\n");
}
