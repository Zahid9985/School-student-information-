#include<stdio.h>
void main()
{
    int roll;
    printf("School Student Information...\n");
    printf("Enter student Roll...");
    scanf("%d",&roll);
    
    
    if (roll==110)
    {
       printf( "NAME-Zahid Mondal \n");
       printf("COURSE- B-TCSE\n");
       printf("Roll No-110\n");
    }
    else if (roll==93)
    {
        printf( "NAME-Pritam Goroi \n");
        printf("COURSE- B-TCSE\n");
        printf("Roll No-93\n");
    }
    else if (roll==94)
    {
        printf( "NAME-SK. Samim \n");
        printf("COURSE- B-TCSE\n");
        printf("Roll No-94\n");
    }
    else
    {
        printf("Stuend name is not register...\n");
    }
    
    
    


   
}
/*char string[25];
printf("Enter the name:");
scanf("%[^\n]*c",string);
printf("My name is %s",string);*/