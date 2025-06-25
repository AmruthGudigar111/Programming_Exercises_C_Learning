
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello file handling in C!\n");
    fclose(fp);

    fp = fopen("data.txt", "r");
    while(fgets(str, 100, fp) != NULL)
        printf("%s", str);
    fclose(fp);

    return 0;
}
