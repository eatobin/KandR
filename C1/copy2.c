#include <stdio.h>

/* copy input to output; 2nd version */
//main()
//{
//	int c;
//
//	while ((c = getchar()) != EOF)
//		putchar(c);
//}

int main() {
    FILE *fp;
    int c;

    fp = freopen("../resources/file.txt", "r", stdin);

    while ((c = fgetc(fp)) != EOF)
        putchar(c);

    fclose(fp);

    return 0;
}
