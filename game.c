#include <stdio.h>
#include <string.h>

int main ()
{
	printf("food   fd no.  price\n \n ---------------\n chips  0 100\n chapo  1 20\n kebab  2  50\n omena  3 50\n \n --- \n Enter food no. (space) table no.\n");
	char info[6];
	FILE* fp = fopen("op.txt", "a");
	if(fp==NULL)
	{return 1;}
	fgets(info, 6, stdin);
	fprintf(fp, ("\n %s ", info));
	fclose(fp);
 return 0;
}
