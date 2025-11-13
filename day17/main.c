#include <stdio.h>
int main() 
{
    char name[50], reg[20], sec[10];
    float s[10], total=0, avg, high, low, temp;
    int n, i, j, ch, above, below;

    printf("========= Employee Salary Analysis System =========\n");

    printf("Enter Student Name: ");
    gets(name);

    printf("Enter Registration Number: ");
    gets(reg);

    printf("Enter Section: ");
    gets(sec);

    printf("\nEnter number of employees: ");
    scanf("%d", &n);

    printf("Enter salaries:\n");

    for(i=0;i<n;i++)
    {
        printf("%d: ",i+1);
        scanf("%f",&s[i]);
    }

    do
   {
        printf("\n========== Menu ==========\n");
        printf("1. Display All Salaries\n");
        printf("2. Display Total and Average Salary\n");
        printf("3. Display Highest and Lowest Salary\n");
        printf("4. Count Above/Below Average\n");
        printf("5. Display Sorted Salaries\n");
        printf("6. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            for(i=0;i<n;i++)
                printf("%.0f\n",s[i]);
        }
          else if(ch==2)
         {
            total=0;

            for(i=0;i<n;i++)

                total+=s[i];
            avg=total/n;
            printf("Total Salary = %.0f\n",total);
            printf("Average Salary = %.0f\n",avg);
         }

        else if(ch==3)
          {
            high=s[0];
            low=s[0];

            for(i=1;i<n;i++)
            {
                if(s[i]>high)
                    high=s[i];
                if(s[i]<low)
                    low=s[i];
            }

            printf("Highest Salary = %.0f\n",high);
            printf("Lowest Salary = %.0f\n",low);
          }
 
           else if(ch==4)
         {
            total=0;

            for(i=0;i<n;i++)

                total+=s[i];
            avg=total/n;
            above=0;
            below=0;

            for(i=0;i<n;i++)
             {
                if(s[i]>avg)
                    above++;

                else if(s[i]<avg)
                    below++;
             }
            printf("Above Average = %d\n",above);
            printf("Below Average = %d\n",below);
        }
        else if(ch==5)
        {
            for(i=0;i<n-1;i++)
           {
                for(j=i+1;j<n;j++)
               {
                    if(s[i]>s[j])
                    {
                        temp=s[i];
                        s[i]=s[j];
                        s[j]=temp;
                    }
                }
            }

            for(i=0;i<n;i++)

                printf("%.0f\n",s[i]);
        }
        else if(ch==6)
        {
            printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",name,reg,sec);
            printf("Challenge Day 17 - Code2Grow Program\n");
        }

        else
            printf("Invalid choice\n");
    }while(ch!=6);
     return 0;
}


