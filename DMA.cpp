#include <stdio.h>
#include<stdlib.h>
#include<String.h>

int main(void) {
	char *str1, *str2; 
	int n1, n2;
	printf("Enter the size 1 \n");
	scanf("%d", &n1);
	printf("Enter size 2 \n");
	scanf("%d", &n2);
	str1 = (char *)malloc(sizeof(char) * n1);
	str2 = (char *)malloc(sizeof(char) * n2);
	printf("enter the strings");
	scanf("%s", str1);
	scanf("%s", str2);
	
	realloc(str1, n1+n2);
	strcat( str1, str2);

	printf("%s ", str1);
	free(str1);
	free(str2);
	int x = (sizeof(char) * (n1 + (n2 *2)));
	printf("memory cleared %d", x);
	
	return 0;
}

