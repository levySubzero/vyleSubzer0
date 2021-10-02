#include <stdio.h>
#include <stdlib.h>


  int main()
{	
int temp;
int volt[] = {0, 1, 2, 3, 4, 5};

char decision[3];

printf("What's the temperature?:");
scanf("%d", &temp);

if(temp <= 15)
{
printf("Temperature is normal\n");
}
else if(temp == 16)
{
	printf("Temperature medium\n");
}
else if(temp >= 17)
{
	printf("Temperature high should turn AC on, activate? :\n");
	scanf("%s", &decision);
	if(decision == "yes")
  {
	  printf("Turning A/C on\n");
  }
  else if(decision == "no")
  {
	  printf("No change in condition \n");
  }
  else
  {
	  printf("Invalid response!\n");
  }
}
else
{
	printf("No response!\n");
}

 return 0;
}