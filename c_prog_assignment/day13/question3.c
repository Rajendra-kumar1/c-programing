//Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file

#include <stdio.h>
#include <stdlib.h>
int main() 
{
FILE *f1, *f2, *f3;
 
char ch, file1[30], file2[30], file3[30];      // character file1,file2, file3 with array 
                                         
printf("Enter name of first file\n");
gets(file1);
 
printf("Enter name of second file\n");
gets(file2);
 
printf("Enter name of the output files\n");
gets(file3);
 
f1 = fopen(file1, "r");   //opening the file for reading.
f2 = fopen(file2, "r");
 
if(f1 == NULL || f2 == NULL) {
perror("Error ");
printf("Press any key to exit...\n");
exit(EXIT_FAILURE);
}
 
f3 = fopen(file3, "w");          // Opening in write mode
 
if(f3 == NULL) 
{
perror("Error ");
printf("Press any key to exit...\n");
exit(EXIT_FAILURE);
}
 
while((ch = fgetc(f1)) != EOF)              // EOF: end of file
fputc(ch,f3);
 
 while((ch = fgetc(f2)) != EOF)
 fputc(ch,f3);
 
printf("The two files were merged into %s file successfully.\n", file3);
                          //fclose: file close 
fclose(f1);
fclose(f2);          
fclose(f3);
return 0;
}
 

