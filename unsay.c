#include<stdio.h>
#include<string.h>

int main() {
    
    printf("Enter a number: \n");
    
    char number[10];
    scanf("%s", number);
    
    	int n=0, i,length=sizeof(number);
    	for(i=0; i < length; i++) {
        if(number[i]=='-') {
            n++;
        }
    }

	//const char* str1, const char* str2);. The strcmp() function takes two strings and returns an integer.
		 if(n <= 0) {
        
        if(strcmp(number,"zero") == 0){
            printf("0 ");
        }
        else if(strcmp(number,"one") == 0){
           printf("1 ");
        }
        else if(strcmp(number,"two") == 0) {
            printf("2");
        }
        else if(strcmp(number,"three") == 0){
        
           printf("3");
        }
        else if(strcmp(number,"four") == 0) {
           printf("4");
        }
        else if(strcmp(number,"five") == 0) {
           printf("5");
        }
        else if(strcmp(number,"six") == 0) {
            printf("6");
            
        }
        else if(strcmp(number,"seven") == 0) {
          printf("7");
        }
        else if(strcmp(number,"eight") == 0) {
            printf("8");
        }
        else if(strcmp(number,"nine") == 0) {
            printf("9");
        }
        if(strcmp(number,"ten") == 0) {
            printf("10");
        }
        else if(strcmp(number,"eleven") == 0)  {
            printf("11");
        }
        else if(strcmp(number,"twelve") == 0 ) {
        
            printf("12");
        }
        else if(strcmp(number,"thirteen") == 0) {
        
         printf("13");
        }
        else if(strcmp(number,"fourteen") == 0){
        
           printf("14");
        }
        else if(strcmp(number,"fifteen") == 0) {
    
           printf("15");
        }
        else if(strcmp(number,"sixteen") == 0) {
        
           printf("16");
        }
        else if(strcmp(number,"seventeen") == 0) {
        
           printf("17");
        }
        else if(strcmp(number,"eighteen") == 0) {
         
            printf("18");
        }
        else if(strcmp(number,"nineteen") == 0) {
        
           printf("19");
        }
        else if(strcmp(number,"twenty") == 0) {
         
            printf("20");
        }
        else if(strcmp(number,"thirty") == 0) {
        
            printf("30");
        }
        else if(strcmp(number,"fourty") == 0) {
        
            printf("40");
        }
        else if(strcmp(number,"fifty") == 0) {
        
            printf("50");
        }
        else if(strcmp(number,"sixty") == 0) {
        
            printf("60");
        }
        else if(strcmp(number,"seventy") == 0) {
        
            printf("70");
        }
        else if(strcmp(number,"eighty") == 0) {
        
            printf("80");
        }
        else if(strcmp(number,"ninety") == 0) {
        
            printf("80");
        }
    } 
    else {
        //strchr(const char *str, int c) searches for the first occurrence of //the character c (an unsigned char) in the string
        
	int dash='-';
	char *ones = strchr(number, dash) + 1;
        int arr = strchr(number,dash) - number;
        char tens[arr];
//strncpy(copies up to n characters
	strncpy(tens, number, arr);
//strcmp(const char* str1, const char* str2)
	if(strcmp(number,"zero") == 0){
            printf("0");
        }
        else if(strcmp(number,"one") == 0){
            printf("1");
        }        
	else if(strcmp(ones,"two") == 0) {
            printf("2");
        }
        else if(strcmp(ones,"three") == 0) {
            printf("3");
        }
        else if(strcmp(ones,"four") == 0) {
           printf("4");
        }
        else if(strcmp(ones,"five") == 0) {
            printf("5");
        }
        else if(strcmp(ones,"six") == 0) {
            printf("06");
        }
        else if(strcmp(ones,"seven") == 0) {
            printf("07");
        }
        else if(strcmp(ones,"eight") == 0)   {
            printf("8");
        }
        else if(strcmp(ones,"nine") == 0) {
            printf("9");
        }
        if(strcmp(tens,"twenty") == 0) {
            printf("20");
        }
        else if(strcmp(tens,"thirty") == 0) {
            printf("30");
        }
        else if(strcmp(tens,"fourty") == 0) {
            printf("40");
        }
        else if(strcmp(tens,"fifty") == 0) {
            printf("50");
        }
        else if(strcmp(tens,"sixty") == 0) {
            printf("60");
        }
        else if(strcmp(tens,"seventy") == 0){
            printf("70");
        }
        else if(strcmp(tens,"eighty") == 0){
            printf("80");
        }
        else if(strcmp(tens,"ninety") == 0) {
            printf("90");
        }
 }
return 0;
}
