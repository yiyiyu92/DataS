#include <stdio.h>

main()
{
	int a;
	scanf("%d", &a);
	int i;
	int tot =0;
	for(i=1;i<=a;i++){
		if(i%3 == 0){
			tot+=i;
		}
	}
	printf("%d\n", tot);
}
