#include <stdio.h>
int main() {
int pal(int q);
int i,j,max=0;
    for(i=100; i <=999; i++) {
	for(j=100; j <= 999; j++) {
int k = i*j;
if(pal(k) && k > max) {
 max=k; 
}
}
}
printf("%d\n", max);
return 2;
}
int pal(int q) {
int reverse=0; 
int twin=q;
while(twin) {
reverse = 10*reverse +(twin % 10);
twin /= 10;
}
return reverse == q;
}
