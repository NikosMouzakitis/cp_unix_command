/* My implementation on Linux's cp command */

#include <stdio.h>


int main(int argc,char *argv[])
{
    FILE *inf,*outf;
    char ch;

    if(argc != 3)
    {
        printf("Error:2 arguments are required.\n");
        return -1;
    }

    inf = fopen(argv[1],"r");
    if(inf == NULL)
    {
        printf("Error opening %s file.\nProgram failed.\n",argv[1]);
        return -1;
    }

    outf = fopen(argv[2],"w");

    while( fscanf(inf,"%c",&ch) != EOF)
        fprintf(outf,"%c",ch);

    fclose(inf);
    fclose(outf);

    return (0);
}
