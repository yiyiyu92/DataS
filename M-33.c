#include <stdio.h>

main()
{
	int a;
	int i, j;
	int tot;
	int check;
	check = 0;
	scanf("%d", &a);
	for(i=2;i<=a;i++){
		tot = 1;
		for(j=2;j<i;j++){
			if(i%j == 0){
				//printf("%d %d\n", i, tot);
				tot+=j;
			}
		}
		if(tot == i && check == 0){
			printf("%d",j);
			check = 1;
		}
		else if(tot == i){
		    printf(" %d", j);
		}
	}
	printf("\n");
}
