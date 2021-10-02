#include <stdio.h>
#include <string.h>
#include <time.h>

void delay(int ms)
{
long dur;
clock_t  then, now;

dur = ms*(CLOCKS_PER_SEC/1000);
now = then = clock();
while((now-then)<dur);
now=clock();
}

int main ()
{
	char data[20];
	int fd;
	int tbl;
	int cntr = 0;
	 FILE* fp = fopen("op.txt", "r");
 ROG : if (fp == NULL)
  {return 1;}
/* ROG : */if(fp != NULL)
     {
	 fseek(fp, (5*cntr), SEEK_SET);
		fgets(data, 20, fp);
	    sscanf(data, "%d %d", &fd, &tbl);
	}	 
	if(!feof(fp))
	{ 
      printf("Take %d to table %d and %d \n", fd, tbl, cntr);
	   cntr++;
	 // delay(1000);
      goto ROG;
	}
	else
	{
		printf("Waiting for order\n");
		/*delay(2000);*/
		//goto ROG;
	}
	
    fclose(fp);
	
		
		
return 0;
}

 /* int i = 0;
 %d %d\n", fd, tbl, cntr
		 while(!feof(fp))
		 {*/
			// pary[i] = &ary[i];