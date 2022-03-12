//Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. Initialize union/structures members and print.
#include <stdio.h>
#include <string.h>
struct member{
int a;
char b[20];
union member1{
int a;
char b[20];
}x;
}x;
int main()
{
printf("Size of Structure : %ld bytes\n",sizeof(struct member));   // sizeof structure member
printf("Size of Union : %ld bytes\n",sizeof(union member1));        // sizeof union memebr

printf("\nStructure Member\n");                 //user initialize structure memeber 
printf("Enter the No in Structure = ");
scanf("%d",&x.a);
printf("Enter the name in Structure = ");
scanf("%s",x.b);
printf("Number in Structure = %d\n",x.a);
printf("Name in Structure = %s\n",x.b);

printf("\nUnion Member\n");               //user initialize union member
printf("Enter the No in union = ");
scanf("%d",&x.a);
printf("Enter the name in union = ");
scanf("%s",x.b);
printf("Number in union = %d\n",x.a);
printf("Name in union = %s\n",x.b);
return 0;
}                 
               /*  Size of Structure : 44 bytes
                 Size of Union : 20 bytes

                Structure Member
                Enter the No in Structure = 3
                Enter the name in Structure = 4
                Number in Structure = 3
                Name in Structure = 4

                Union Member
                Enter the No in union = 7
                Enter the name in union = 4
                Number in union = 7
                Name in union = 4
                                  */
