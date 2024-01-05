#include<stdio.h>
void main()
{
  int day;
  printf("Enter the day(1-7)");
  scanf("%d",&day);

  switch (day)
  {
  case 1:printf("The day is monday");
    break;
  case 2:  printf("The day is tuesday");
    break;
  case 3: printf("The day is wednesday");
    break;
   case 4: printf("The day is thursday");
    break;
   case 5: printf("The day is Friday");
    break;
   case 6: printf("The day is Saturday");
    break;
   case 7: printf("The day is Sunday");
    break;
  
  default: printf("Not valid day:");
    break;
  }
}