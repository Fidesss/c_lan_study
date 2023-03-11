#include <stdio.h> 

int main()
{
	int data = 5, i;

	for (i = 1; i < 5; i++) {
		printf("%0*d\n", i, data);
	}

	return 0;
}
