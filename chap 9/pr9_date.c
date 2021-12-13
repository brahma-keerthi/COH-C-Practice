// This program will compare the dates stored and will and also read the dates

#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}day;

int compare(day d, day c)
{
    if((d.year==c.year)&&(d.month==c.month)&&(d.date==c.date))
    return 0;

    else if((d.year>c.year))
    return 1;

    else if(d.year<c.year)
    return -1;

    else if(d.month>c.month)
    return 1;

    else if(c.month>d.month)
    return -1;

    else if(c.date>d.date)
    return -1;

    else
    return 1;
}

void main()
{
    day d1, d2;

    printf("Enter the date of day1 in dd mm yyyy format: ");
    scanf("%d%d%d", &d1.date, &d1.month, &d1.year);

    printf("Enter the date of day2 in dd mm yyyy format: ");
    scanf("%d%d%d", &d2.date, &d2.month, &d2.year);
    
    int x = compare(d1, d2);

    if(x==0)
    printf("Both date are same");

    else if(x==1)
    printf("Date1 is older than Date2");

    else if(x==-1)
    printf("Date2 is older than Date1");
}