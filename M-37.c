#include <stdio.h>

main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a ==0 && b == 0){
		printf("Origin\n");
		return ;
	}
	if(a==0){
		printf("y-axis\n");
		return 0;
	}
	if(b == 0){
		printf("x-axis\n");
		return 0;
	}
	if(a>0&&b>0){
		printf("1st Quadrant\n");
	}
	if(a<0&&b>0){
		printf("2nd Quadrant\n");
	}
	if(a<0&&b<0){
		printf("3rd Quadrant\n");
	}
	if(a>0&&b<0){
		printf("4th Quadrant\n");
	}
}
