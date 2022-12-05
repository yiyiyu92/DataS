#include <stdio.h>

main()
{
	int a, b;
	int i;
	int tot = 0;
	scanf("%d %d", &a, &b);
	if(a<b){
	    for(i=a;i<=b;i++){
	     	tot+=i;
        }
    }
    else if(a>b){
    	for(i=b;i<=a;i++){
	     	tot+=i;
        }
	}
	else{
		tot = a;
	}
    printf("%d\n", tot);
}
