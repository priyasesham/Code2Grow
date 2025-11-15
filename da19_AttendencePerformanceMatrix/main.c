#include <stdio.h>
int main()
{
    int attendance[10], marks[10];
    int i, choice;

    for(i=0;i<10;i++)
    {
        attendance[i]=(i%2==0)?1:0;
        marks[i]=50+i;
    }

    while(1)
     {
        printf("========= MENU =========\n");
        printf("1. Display Attendance Matrix\n");
        printf("2. Display Marks Matrix\n");
        printf("3. Attendance Report\n");
        printf("4. Performance Report\n");
        printf("5. Grade Report\n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Attendance Matrix:\n");
            for(i=0;i<10;i++) printf("%d ",attendance[i]);
            printf("\n");
        }

        else if(choice==2)
         {
            printf("Marks Matrix:\n");
            for(i=0;i<10;i++) printf("%d ",marks[i]);
            printf("\n");
         }

        else if(choice==3)
         {
            int p=0;
            for(i=0;i<10;i++) if(attendance[i]==1) p++;
            printf("Total Present: %d\n",p);
         }

        else if(choice==4)
          {
            int sum=0;
            for(i=0;i<10;i++) sum+=marks[i];
            printf("Average Marks: %.2f\n",(float)sum/10);
          }

        else if(choice==5)
        {
            for(i=0;i<10;i++)
            {
                if(marks[i]>=90) printf("Roll %d: A\n",i+1);
                else if(marks[i]>=75) printf("Roll %d: B\n",i+1);
                else if(marks[i]>=60) printf("Roll %d: C\n",i+1);
                else printf("Roll %d: D\n",i+1);
            }
        }
     
        else if(choice==6)
         {
            break;
         }

        else
        {
            printf("Invalid Choice\n");
        }
    }
   return 0;
}
