#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2;
 int op;
 int result;
 printf("Enter the value:");
 scanf("%d",&n1);
 printf("Enter the value:");
 scanf("%d",&n2);
 printf("Choose your choice:");
 printf("\n1.Addition\n");
 printf("\n2.Subtraction\n");
 printf("\n3.Multiplication\n");
 printf("\n4.Division\n");
 scanf("%d",&op);
switch(op)
 {
     case 1 :result=n1+n2;
              printf("The Addition is",result);
              break;
     case 2 :result=n1-n2;
              printf("The Subtraction is:");
              break;
     case 3 :result=n1*n2;
              printf("The Multiplication is:");
              break;
     case 4 :result=n1/n2;
              printf("The Division is:");
              break;
     default :
              printf("WRONG choice");

 }
}


