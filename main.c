#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int main(int argc, char **argv)
{
	int sum, prod, i, num;

	fprintf(stdout, "This is a demo app. It received %d arguments\n", argc);

	if (argc  < 2) {
		fprintf(stderr, "We need arguments. Please provide!!\n");
		return 1;
	}

	sum = 0;
	prod = 1;
	for (i = 1; i < argc; i++) {
		fprintf(stdout, "Debug: argv[%d] = %s\n", i, argv[i]);
		if (sscanf(argv[i], "%d", &num) <= 0)
			continue;
		fprintf(stdout, "Debug: argv[%d] = %d\n", i, num);

		sum = add(sum, num);
		prod = mul(prod, num);
	}

	fprintf(stdout, "Sum is %d.\nProd is %d.\n", sum, prod);

	return 0;
}
