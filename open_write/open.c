/*
	Rachel A Schifano
*/
#include <stdio.h>
int main() {

	FILE *file;
	char *filename = "test.txt";

	/* open the file for reading */
	file = fopen(filename, "r");
	if (file == NULL) {
		fprintf(stderr, "File %s could not be opened\n", filename);
		exit(1);
	}

	/* loop while reading a line at a time from the file and printing */
	while (1) {
		char buffer[80];
		fgets(buffer, 80, file);
		
		/* if EOF, break out of loop */
		if (feof(file))
			break;

		printf("%s", buffer);
	}

	/* close the file */
	fclose(file);

	return 0;
}
