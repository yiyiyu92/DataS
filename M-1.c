#include <stdio.h>

main()
{
	int i;
	int dat[3];
	for(i=0;i<3;i++){
		scanf("%d", &dat[i]);
	}
	printf("Trapezoid area:%.1f\n", (dat[0]+dat[1])*dat[2]/2.0);
}
