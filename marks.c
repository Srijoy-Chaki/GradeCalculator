#include<stdio.h>
#include<conio.h>
void main()
{
/*program for a grade calculator*/
int marks;
clrscr();
printf("Enter the marks of the student: ");
scanf("%d",&marks);                                    /*Input of the marks of the student*/
printf("\nEntered marks of the student = %d",marks);
if(marks>=85 && marks<=100)                            /*Decision making body*/
printf("\nThe student secured Grade A");
else
{
 if(marks>=70 && marks<=84)
  printf("\nThe student secured Grade B");
 else
 {
  if(marks>=55 && marks<=69)
   printf("\nThe student secured Grade C");
  else
  {
   if(marks>=40 && marks<=54)
    printf("\nThe student secured Grade D");
   else
   {
    if(marks<40)
     printf("\nThe student secured Grade F);
    else
    printf("\nEnter marks below or equal to 100 because obtained marks of the student cannot be greater than 100");
    }
   }
  }
 }
 getch();
 }
   
  
