#include <stdio.h>

main()
{
	int a, b;
	double tot;
	tot = 0;
	scanf("%d %d", &a, &b);
	if(a<=60){
		printf("%.1f\n", a*b);
	}
	else if(a<=120){
		tot += b*60;
		a-=60;
		tot += a*b*1.33;
		printf("%.1f\n", tot);
	}
	else{
		tot+=b*60;
		a-=60;
		tot+=b*60*1.33;
		a-=60;
		tot+=a*b*1.66;
		printf("%.1f\n", tot);
	}
}
