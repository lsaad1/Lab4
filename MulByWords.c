#include<stdio.h>
#include<string.h>

int MulbyWords(char number[]) {
    	int n=0, i,length=sizeof(number);
    	for(i=0; i < length; i++) {
        if(number[i]=='-') {
            n++;
        }
    }

    int result = 0;
    if(n <= 0) {
 //const char* str1, const char* str2);. The strcmp() function takes two strings and returns an integer.
  if(strcmp(number,"zero") == 0){
            result += 0;
        }
        else if(strcmp(number,"one") == 0){
            result+=1;
        }
        else if(strcmp(number,"two") == 0) {
            result+=2;
        }
        else if(strcmp(number,"three") == 0){
        
            result+=3;
        }
        else if(strcmp(number,"four") == 0) {
            result+=4;
        }
        else if(strcmp(number,"five") == 0) {
            result+=5;
        }
        else if(strcmp(number,"six") == 0) {
            result+=6;
        }
        else if(strcmp(number,"seven") == 0) {
            result+=7;
        }
        else if(strcmp(number,"eight") == 0) {
            result+=8;
        }
        else if(strcmp(number,"nine") == 0) {
            result+=9;
        }
        if(strcmp(number,"ten") == 0) {
            result+=10;
        }
        else if(strcmp(number,"eleven") == 0)  {
            result+=11;
        }
        else if(strcmp(number,"twelve") == 0 ) {
        
            result+=12;
        }
        else if(strcmp(number,"thirteen") == 0) {
        
            result+=13;
        }
        else if(strcmp(number,"fourteen") == 0){
        
            result+=14;
        }
        else if(strcmp(number,"fifteen") == 0) {
    
            result+=15;
        }
        else if(strcmp(number,"sixteen") == 0) {
        
            result+=16;
        }
        else if(strcmp(number,"seventeen") == 0) {
        
            result+=17;
        }
        else if(strcmp(number,"eighteen") == 0) {
         
            result+=18;
        }
        else if(strcmp(number,"nineteen") == 0) {
        
            result+=19;
        }
        else if(strcmp(number,"twenty") == 0) {
         
            result+=20;
        }
        else if(strcmp(number,"thirty") == 0) {
        
            result+=30;
        }
        else if(strcmp(number,"fourty") == 0) {
        
            result+=40;
        }
        else if(strcmp(number,"fifty") == 0) {
        
            result+=50;
        }
        else if(strcmp(number,"sixty") == 0) {
        
            result+=60;
        }
        else if(strcmp(number,"seventy") == 0) {
        
            result+=70;
        }
        else if(strcmp(number,"eighty") == 0) {
        
            result+=80;
        }
        else if(strcmp(number,"ninety") == 0) {
        
            result+=90;
        }
    } 
    else {
	 int dash='-';
//strchr(const char *str, int c) searches for the first occurrence of //the character c (an unsigned char) in the string
        char *ones = strchr(number, dash) + 1;
        int arr = strchr(number,dash) - number;
        char tens[arr];
//strncpy(copies up to n characters
	strncpy(tens, number, arr);
//strcmp(const char* str1, const char* str2)
	 if(strcmp(number,"zero") == 0){
            result += 0;
        }
        else if(strcmp(number,"one") == 0){
            result+=1;
        }        
	else if(strcmp(ones,"two") == 0) {
            result+=2;
        }
        else if(strcmp(ones,"three") == 0) {
            result+=3;
        }
        else if(strcmp(ones,"four") == 0) {
            result+=4;
        }
        else if(strcmp(ones,"five") == 0) {
            result+=5;
        }
        else if(strcmp(ones,"six") == 0) {
            result+=6;
        }
        else if(strcmp(ones,"seven") == 0) {
            result+=7;
        }
        else if(strcmp(ones,"eight") == 0)   {
            result+=8;
        }
        else if(strcmp(ones,"nine") == 0) {
            result+=9;
        }
	if(strcmp(tens,"twenty") == 0) {
            result+=20;
        }
        else if(strcmp(tens,"thirty") == 0) {
            result+=30;
        }
        else if(strcmp(tens,"fourty") == 0) {
            result+=40;
        }
        else if(strcmp(tens,"fifty") == 0) {
            result+=50;
        }
        else if(strcmp(tens,"sixty") == 0) {
            result+=60;
        }
        else if(strcmp(tens,"seventy") == 0){
            result+=70;
        }
        else if(strcmp(tens,"eighty") == 0){
            result+=80;
        }
        else if(strcmp(tens,"ninety") == 0) {
            result+=90;
        }
 
        
    }
    return result;
}
int main()
{
    char number1[10];
    printf("Enter first number: \n");
    scanf("%s", number1);

    char number2[10];
    printf("Enter second number: \n");
    scanf("%s", number2);

    int product;
    product = MulbyWords(number1) * MulbyWords(number2);
    printf("%d * %d = %d \n", MulbyWords(number1), MulbyWords(number2), product);
    return 0;
}


