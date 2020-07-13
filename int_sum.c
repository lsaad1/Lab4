#include <stdio.h>

int main(){
int i, sum =0;
for(i =1; i < 1000; i++){
	if(i % 3 == 0 || i % 5 == 0) {
		sum += i;
}
}
printf("sum of  all the integers below 1000 that are multiples of 3 or 5 is:  %d\n", sum);
return 0;
} 
