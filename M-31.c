#include <stdio.h>

main()
{
	int a, b;
	int i;
	scanf("%d", &a);
	b = 0;
	for(i=1;i<=a;i++){
		if(i%2==0&&i%3 ==0 &&i%12!=0){
			b +=i;
		}
	}
	printf("%d\n", b);
}
