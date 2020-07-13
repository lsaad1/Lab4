#include <stdio.h>

static int isPalindrome(int n);
int main(void) {
    int i, j;
    int maxProduct = 0;
    for(i = 100; i <= 999; i++) {
        for(j = 10; j <= 99; j++) {
            int product = i * j;
            if(isPalindrome(product) && product > maxProduct){
             
                maxProduct=product;
            }
        }
    }
	 printf("The largest palindrome product of 2 and  3 digit numbers is %d\n",maxProduct);
    		return 0;
}
	int isPalindrome(int n) {
    	int reverse = 0;
	int copyNum = n;
    	while(copyNum) {
        	reverse = 10 * reverse + (copyNum % 10);
        	copyNum /= 10;
    }
    		return reverse == n;
}

