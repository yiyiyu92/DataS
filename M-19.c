#include <stdio.h>

main()
{
	int a;
	double tot;
	scanf("%d", &a);
	tot = a*0.9;
	if(a<=800){
		printf("%.1f\n", tot);
	}
	else if(a<1500){
		printf("%.1f\n", tot*0.9);
	}
	else{
		printf("%.1f\n", tot*0.79);
	}
	
	
}
