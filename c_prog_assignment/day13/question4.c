// Progam to count the vowels and latter from a file //

#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fp1;
 FILE *fp2;
 char ch;
 float a=0, e=0, i=0, o=0, u=0, rest_w=0, total_w;
 float perc_a, perc_e, perc_i, perc_o, perc_u, perc_r;
         // file open and ouput prog3.txt file automatically creat result3.text file
         fp1=fopen ("prog3.txt", "r");
         fp2=fopen ("result3.txt", "w");
                        
         if(fp1 ==NULL || fp2 ==NULL)
            {
              perror("Error in opening file");         // error in open file 
              return(-1);
            }
          while((ch= fgetc(fp1)) != EOF)                  //EOF end of file
             {
                                                // using if , else if statement vowels count
               if(ch=='A' || ch=='a')
                  a++;
               else if (ch=='E' || ch=='e')
                  e++;
               else if (ch=='I' || ch=='i')
                  i++;
               else if (ch=='O' || ch=='o')
                  o++;
               else if (ch=='U' || ch=='u')
                  u++;
               else if (ch==' ')
                continue;
               else
                 rest_w++;
             }
                                            // use in fprintf vowels if concider with respect to time 
        fprintf(fp2, "A comes %.1f times \n", a);
        fprintf(fp2, "E comes %.1f times \n", e);
        fprintf(fp2, "I comes %.1f times \n", i);
        fprintf(fp2, "O comes %.1f times \n", o);
        fprintf(fp2, "U comes %.1f times \n", u);
        fprintf(fp2, "rest words comes %.1f times \n", rest_w);
       
        total_w=a+e+i+o+u+rest_w;
        fprintf(fp2, "total words=%.1f\n",total_w);

        perc_a=(a/total_w)*100;
        perc_e=(e/total_w)*100;
        perc_i=(i/total_w)*100;
        perc_o=(o/total_w)*100;
        perc_u=(a/total_w)*100;
        perc_r=(rest_w/total_w)*100;
                                         // output print vowels in percentage float value 
        fprintf(fp2, "'a' percentage  is=%.2f\n", perc_a);
        fprintf(fp2, "'e' percentage  is=%.2f\n", perc_e);
        fprintf(fp2, "'i' percentage  is=%.2f\n", perc_i);
	fprintf(fp2, "'o' percentage  is=%.2f\n", perc_o);
	fprintf(fp2, "'u' percentage  is=%.2f\n", perc_u);
	fprintf(fp2, "rest percentage is=%.2f\n", perc_r);  
        
        printf("\nResult saved in result3.txt.\n");
     fclose(fp1);
     fclose(fp2);
     
     return 0;
}


