#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[50];

    FILE *fptrw;
    fptrw = fopen("Orosz.txt", "w");
    fprintf(fptrw, "%s %s %s", "Orosz Daniel", "Uzemmernok-informatikus", "C5S7FM");
    fclose(fptrw);

    FILE *fptrr;
    fptrr = fopen("Orosz.txt", "r");
    while (fgets(data, 50, fptrr)){
        printf("%s", data);
    }
    fclose(fptrr);
    return 0;
}
