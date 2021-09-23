#include <stdio.h>
int main ()
{
int age=0;
 scanf("%d",&age);
if(age<18&&age>=0)
printf("the young\n");
else if(age>=18&&age<65)
printf("the middle\n"); 
else if(age>=65)
printf("the older\n");
else
printf("error");


 








//	int day=0;
//	int n=1;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//			printf("the day of work\n");
//				break;
//		case 2:
//			printf("the day of rest\n");
//			break;
//	} 
//	
	return 0;
 } 
