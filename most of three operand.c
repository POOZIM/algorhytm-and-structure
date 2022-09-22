#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;
	printf("find most of three operand.\n");
	printf("a operand : "); scanf("%d", &a);
	printf("b operand : "); scanf("%d", &b);
	printf("c operand : "); scanf("%d", &c);
	
	max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	
	printf("most of three operand is %d\n", max);
	
	return 0;
}

