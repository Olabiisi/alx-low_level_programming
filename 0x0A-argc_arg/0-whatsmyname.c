#include <stdio.h>

int main(int argc, char *argv[]) {
	/* Print the name of the program */
	(void)argc; /* Suppress unused parameter warning */
	printf("%s\n", argv[0]);
	return 0;
}
