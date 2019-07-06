#include<stdio.h>

int main(void)
{
    int hours, in_min, minutes_time,t8_00am,t9_43am,t11_19am,t12_47pm,t2_00pm,t3_45pm,t7_00pm,t9_45pm,tmidnight24,tmidnight0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &in_min);

    in_min = hours*60 + in_min;

    /* Depature time as minutes since midnight */
    t8_00am = (60 * 8);
    t9_43am = (60 * 9) + 43;
    t11_19am = (60 * 11) + 19;
    t12_47pm = (60 * 12) + 47;
    t2_00pm = (60 * 14);
    t3_45pm =(60 * 15) + 45;
    t7_00pm =(60 * 19);
    t9_45pm =(60 * 21) + 45;

    //both representation of midnight
    tmidnight24 = 24 * 60 ;
    tmidnight0 = 0 ;

    if (in_min>= tmidnight24 || in_min<= tmidnight0)
        printf("Invalid time");

    else
    {
        printf("Close departure time is ");
        if (in_min>tmidnight0 && in_min<t8_00am)
            printf("8:00 a.m., arriving at 10:16a.m.");

        if (in_min>=t8_00am && in_min<t9_43am)
        {
            if(in_min - t8_00am < t9_43am - in_min)
                printf("8:00 a.m., arriving at 10:16a.m.");
            else printf("9:43 a.m., arriving at 11:52a.m.");
        }
        if (in_min>=t9_43am && in_min< t11_19am)
        {
            if(in_min - t9_43am < t11_19am - in_min)
                printf("9:43 a.m., arriving at 11:52a.m.");
            else printf("11:19 a.m., arriving at 1:31p.m.");
        }
        if (in_min >=t11_19am && in_min<t12_47pm )
        {
            if(in_min - t11_19am < t12_47pm - in_min)
                printf("11:19 a.m., arriving at 1:31p.m.");
            else printf("12:47 p.m., arriving at 3:00 p.m.");
        }
        if (in_min >=t12_47pm && in_min < t2_00pm)
        {
            if(in_min -t12_47pm < t2_00pm - in_min)
                printf("12:47 p.m., arriving at 3:00 p.m.");
            else printf("2:00 p.m., arriving at 4:08 p.m.");
        }
        if(in_min >=t2_00pm && in_min <t3_45pm)
        {
            if(in_min - t2_00pm < t3_45pm -in_min)
                printf("2:00 p.m., arriving at 4:08 p.m.");
            else printf("3:45 p.m., arriving at 5:55 p.m.");
        }
        if(in_min >=t3_45pm && in_min<t7_00pm)
        {
            if (in_min -t3_45pm < t7_00pm -in_min)
                printf("3:45 p.m., arriving at 5:55 p.m.");
            else printf("7:00 p.m., arriving at 9:20 p.m.");
        }
        if(in_min >= t7_00pm && in_min < t9_45pm)
        {
            if(in_min-t7_00pm < t9_45pm - in_min)
                printf("7:00 p.m., arriving at 9:20 p.m.");
            else printf("9:45 p.m., arriving at 11:58 p.m.");
        }
        if(in_min >= t9_45pm && in_min<tmidnight24)
            printf("9:45 p.m., arriving at 11:58 p.m.");
    }

    printf("\n\n");
    return(0);
}
