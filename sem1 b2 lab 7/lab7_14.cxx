#include <stdio.h>
int hcf(int n1, int n2);

int main()
{
	int n1, n2;
	printf("Enter numbers for which you want to calculate Highest Common Factor ");
	scanf("%d %d", &n1, &n2);
	printf("HCF is %d", hcf(n1, n2));

	return 0;
}

int hcf(int n1, int n2)
{
	if (n2 != 0)
		return hcf(n2,n1%n2);
	else
		return n1;
}
