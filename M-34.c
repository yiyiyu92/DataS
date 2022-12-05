#include <stdio.h>

main()
{
	int i;
	int a;
	scanf("%d", &a);
	for(i=1;i<a;i++){
		if(a%i == 0){
			printf("%d ",i);
		}
	}
	printf("%d\n", a);
}
