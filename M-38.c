#include <stdio.h>

main()
{
	int dat[3];
	scanf("%d %d %d", &dat[0], &dat[1], &dat[2]);
	if(dat[0]+dat[1]<=dat[2]){
		printf("unfit\n");
		return 0;
	}
	if(dat[0]+dat[2]<=dat[1]){
		printf("unfit\n");
		return 0;
	}
	if(dat[1]+dat[2]<=dat[0]){
		printf("unfit\n");
		return 0;
	}
	printf("fit\n");
}
