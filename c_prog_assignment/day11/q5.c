//Write c programs to demonstrate various storages classes 
#include<stdio.h>
void autoincre (int);
void staticincre();
void registeriencre (int);
int main()
{
auto int c=5;
register int y=7;
extern int v;
printf("value of auto before function = %d\n", c);
autoincre(c);                                                  // auto storges
printf("value of auto c after function call = %d\n",c);
autoincre(c);
printf("value of auto c after function call = %d\n",c);

staticincre();
staticincre();
staticincre();

printf("value of resister before the function the call =%d\n",y);
registeriencre(y);                                                    // ragister storages
printf("value of register after function call = %d\n",y);
registeriencre(y);
printf("value of register after function call =%d\n",y);
printf("value of extern %d\n",v);
return 0;
}
int v =8;
void autoincre(int c)
{
c++;
printf("valueof auto c in function = %d\n", c);
}
void staticincre () 
{
static int d=6;                     //static storages
d++;
printf("value of static d in function = %d\n",d);
}
void registeriencre(int y)
{
y++;
printf(("value of register y in function = %d\n", y));
}
