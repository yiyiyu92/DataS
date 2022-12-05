#include <stdio.h>

main()
{
	int a;
	int i;
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		if(i%5==0&&i%7==0){
			printf("%d", i);
			if(i+35>a){
			break;
		    }
		    printf(" ");
		}
	}	
	printf("\n");
}
