#include <stdio.h> 
#include <string.h>

void conv(char *number){  
	char *Ones[19] = {"One", "two", "Three", "four","five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *Tens[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 
	
	int i = atoi(number), j, k;
	if(i < 20) {
		printf("%s \n", Ones[i - 1]);
	}
	else if (i == 40){
		printf("\n");
	}
	else if (i >= 20 && i % 10 == 0){
		printf("%s \n", Tens[i / 10 - 2]);
	} 
	else {

		printf("%s", Tens[i / 10 - 2]);
                printf("%s \n", Ones[i % 10 - 1]);

	}
	
} 
  
	int main(void) { 
		conv("6");  
		conv("20"); 
		conv("35");
		conv("4");
		conv("70");
		return 0; 
} 
