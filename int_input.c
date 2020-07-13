#include <stdio.h>

int main() {
char inputstr[10];
printf(" \n Enter a input to check for int : ");
scanf("%s",inputstr);
int a;
a = atoi(inputstr);
printf("you entered %d\n", a);
return 0;
}
