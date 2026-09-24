#include<stdio.h>
int main() {
int a;
float b; 
char ch;
double d;
char name[20];

printf("Enter the integer");
scanf("%d",&a);

printf("Enter a float value:");
scanf("%f",&b);

printf("Enter a double value:");
scanf("%lf",&d);

printf("Enter a single character:");
scanf(" %c",&ch);

printf("Enter a string (name): ");
scanf("%s",name);


printf("\n---Output---\n");
printf("Integer enetered : %d\n",a);
printf("Float enetered  :%.2f\n");
printf("Double enetered  :%.2lf\n",d);
printf("Character entered :%c\n",ch);
printf("String entered  :%s\n",name);

return 0;

}