#include <stdio.h>

main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a*a+b*b<=200*200){
		printf("inside\n");
	}
	else{
		printf("outside\n");
	}
}
