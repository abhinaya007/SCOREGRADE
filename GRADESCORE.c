#include<stdio.h>

void main()

{

 int x=0;

 printf("Enter the mark : ");

 scanf("%d", &x);

 if(x>=85 && x<=100)

  printf("The grade is A");

else if (x>=70 && x<=84)

  printf("The grade is B");

else if (x>=55 && x<=69)

  printf("The grade is C");

else if (x>=40 && x<=54)

  printf("The grade is D");

else if (x<40)

  printf("The grade is F");

else

  printf("Invalid Score !");

}
