#include <stdio.h>

main()
{
	int a, b, tot;
	int i;
	scanf("%d", &a);
	b = a;
	tot = 0;
	while(a != 0){
		i = a%10;
		tot+= i*i*i;
		a /=10;
	}
	if(b == tot){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
}
