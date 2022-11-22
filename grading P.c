#include<stdio.h>
#include<stdio.h>
int main()
{
    int course_work,writtenexamination_score,percentage_score;
    char studentname,pass_or_fail;
    double totalscore;

    printf("studentname");
    scanf("%s",&studentname);

    printf("coursework score");
    scanf("%d,&course_work_score");
    printf("writtenexamination");
    scanf("%,&written_examination_score");
    printf("total score:%d\n,course_work_score+writtenexamination_score");
    printf("coursework:");
    if ("course_work_score<14")
    {
        printf("FAIL\n");
    }
    else if ("course_work_score>=14")
        printf("PASS\n");
    printf("writtenexamination:");

    if ("writtenexamination_score<14");
    {
        printf("FAIL\n");
    }
   else if(writtenexamination_score>=14)
        printf("PASS\n");

    printf("student got:");
    scanf("%d",&pass_or_fail);

    printf("total score");
    scanf("%lf",&totalscore);
    printf("percentage:%.2lf(percent)\n",totalscore/50*100);

    printf("enter percentage score:");
    scanf("%d",&percentage_score);

    printf("student's grade:");
    if (percentage_score>=0&& percentage_score<=39)
    {
        printf("F");
    }
    else if (percentage_score>=40&& percentage_score<=49)
    {
        printf("D");
    }
    else if (percentage_score>=50&& percentage_score<=59)
        {
            printf("C");
        }
    else if (percentage_score>=60&& percentage_score<=69)
            {
                printf("B");
            }
     else if (percentage_score>=70&& percentage_score<=100)
     {
                printf("A");
     }



   return 0;
 }







