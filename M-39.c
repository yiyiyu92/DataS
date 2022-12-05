#include <stdio.h>


cmp(const void *a, const void *b)
{
	return (*(int *)a-*(int *)b);
}
main()
{
	int dat[3];
	int i;
	scanf("%d %d %d", dat, (dat+1), (dat+2));
	
	qsort(dat, 3, sizeof(int), cmp);

	if(dat[2]>=(dat[1]+dat[0])){
		printf("Not Triangle\n");
		return;
	}
	if(dat[1]*dat[1]+dat[0]*dat[0] == dat[2]*dat[2]){
		printf("Right Triangle\n");
	}
	else if(dat[1]*dat[1]+dat[0]*dat[0]<dat[2]*dat[2]){
		printf("Obtuse Triangle\n");
	}
	else{
		printf("Acute Triangle\n");
	}
	
	
}
