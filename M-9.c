#include <stdio.h>
#include <math.h>

main()
{
	int a;
	int i;
	int tot;
	scanf("%d", &a);
	if(a>31){
		printf("Value of more than 31\n");
	}
	else{
		tot =1;
		for(i=0;i<a;i++){
			tot*=2;
		}
		printf("%d\n", tot);
	}
}
