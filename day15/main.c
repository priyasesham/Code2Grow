#include<stdio.h>
int main()
{
  int n;

  printf("====== Student Performance Analyzer ======\n");
  printf("Enter total number of students: ");
  scanf ("%d",&n);

  int marks[n];
  int i;

  printf("Enter marks for each student: \n");
  
  for(i=0; i<n; i++)
   {
     printf("Student %d: ",i + 1);
     scanf ("%d", &marks[i]);
   }

  float sum = 0;
  int   highest = marks[0];
  int   lowest  = marks[0];

  int   pass = 0, fail = 0;
  int  Aplus = 0, A = 0, B = 0, C = 0, D = 0, F = 0;

  for(i=0; i<n; i++)
   {
     sum += marks[i];

     if(marks[i] > highest)         
       highest = marks[i];
     
     if(marks[i] < lowest)
       lowest = marks[i];

     if(marks[i] >= 50)
         pass++;
    
     else
         fail++;

     if(marks[i] >= 90)
         Aplus++;

     else if(marks[i] >= 80)
          A++;

     else if(marks[i] >= 70)
          B++; 

     else if(marks[i] >= 60)
          C++;
 
     else if(marks[i] >= 50)
          D++;

     else 
          F++;
   }

  float avg = sum / n;
   
  printf("\n======== Result Summary ========\n");
  printf("Average Marks: %.2f\n", avg);
  printf("Highest Marks: %d\n", highest); 
  printf("Lowest Marks : %d\n\n", lowest);
  printf("Total Passed Students: %d\n", Pass); 
  printf("Total Failed Students: %d\n", Fail);

  printf("Grade Distribution: \n");
  printf("A+ : %d\n", Aplus);
  printf("A  : %d\n", A);
  printf("B  : %d\n", B);
  printf("C  : %d\n", C);
  printf("D  : %d\n", D);
  printf("Fail : %d\n", F);

  printf("====================\n");

  return 0;  
}



      
