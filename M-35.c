#include <stdio.h>

main()
{
	int a;
	scanf("%d", &a);
	 if(a%4 == 0){
        if(a%100 == 0){
            if(a%400 == 0){
                printf("Bissextile Year\n");
            }
            else{
                printf("Common Year\n");
            }
        }
        else{
            printf("Bissextile Year\n");
        }
    }
    else{
        printf("Common Year\n");
    }
}
