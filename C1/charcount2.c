#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
    FILE *fp;
	double nc;

	fp = freopen("../resources/file.txt", "r", stdin);

	for (nc = 0; fgetc(fp) != EOF; ++nc)
		;
	printf("%.0f\n", nc);

	fclose(fp);
}
