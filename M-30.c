#include <stdio.h>

main()
{
	int a, i;
	scanf("%d",&a);
	if(i!=0 && i<=2){
		printf("YES\n");
		return 0;
	}
	for(i=2;i<a;i++){
		if(a%i==0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
}
