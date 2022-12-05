#include <stdio.h>

main()
{
	int a;
	int max;
	int check;
	scanf("%d", &a);
	int i, j;
	if(a == 2){
		printf("1\n");
		return;
	}
	if(a == 3){
		printf("2\n");
		return;
	}
	for(i=3;i<a;i++){
		check = 1;
		for(j=2;j<i;j++){
			if(i%j == 0){
				check = 0;
				break;
			}
		}
		if(check == 1){
			max = i;
		}
	}
	printf("%d\n", max);
}
