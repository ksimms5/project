#include <stdio.h>
int main(){
        int x;
        printf("Insert a year to see if it is a leap year\n");
        scanf("%d", &x);
	if (x % 400 == 0) {
     printf("%d is a leap year\n", x);
} 
 if ( x % 4 == 0) {
     printf("%d is a leap year\n", x);
}

	else if (x % 100 ==0) {
		printf("%d is not a leap year\n", x);
}
	else {
                    printf("%d is not a leap year\n", x);
}                               return 2;
         }

