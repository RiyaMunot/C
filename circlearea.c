#include<stdio.h>
int main()
{
    float r,a,l,b,h,answer;
    int choice;
    printf("\n----------MENU----------");
    printf("\n 1-> ADDITION");
    printf("\n 2-> SUBTRACTION");
    printf("\n 3-> MULTIPLICATION");
    printf("\n 4-> DIVISION");
    printf("\n 5-> AREA OF CIRCLE");
    printf("\n 6-> AREA OF RECTANGLE");
    printf("\n 7-> AREA OF TRAINGLE");
    printf("\n 8-> CIRCUMFERANCE OF CIRCLE");
    printf("\n 9-> MAX MIN");
    printf("\n 10-> SWAPPING");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:-
        printf("\n enter 2 values");
        scanf("%f%f",&a,&b);
        answer=a+b;
        printf("\n  addition =%f",answer);
        break;
        case 2:-
        printf("\n enter 2 values");
        scanf("%f%f",&a,&b);
        answer=a-b;
        printf("\n  subtraction =%f",answer);
        break;
        case 3:-
        printf("\n enter 2 values");
        scanf("%f%f",&a,&b);
        answer=a*b;
        printf("\n multiplication =%f",answer);
        break;
        case 4:-
        printf("\n enter 2 values");
        scanf("%f%f",&a,&b);
        answer=a/b;
        printf("\n division =%f",answer);
        break;
        case 5:- 
        printf("\n enter radius");
        scanf("%f",&r);
        answer=3.142*r*r;
        printf("\n area of circle =%f",answer);
        break;
         case 6:- 
        printf("\n enter length and bredth");
        scanf("%f%f",&l,&b);
        answer=l*b;
        printf("\n area of rectangle =%f",answer);
        break;
         case 7:- 
        printf("\n enter base and height");
        scanf("%f%f",&b,&h);
        answer=0.5*b*h;
        printf("\n area of traingle=%f",answer);
        break;
         case 8:- 
        printf("\n enter radius");
        scanf("%f",&r);
        answer=2*3.142*r;
        printf("\n circumerence of circle =%f",answer);
        break;
         case 9:- 
        printf("\n enter two numbers");
        scanf("%f%f",&a,&b);
         if(a>b)
        printf("\n a is maximum");
        else
        printf("\n b is maximum");
        break;
        case 10:-
        printf("\n enter two numbers");
        scanf("%f%f",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("value of a= %f  and b=%f  after swap",a,b);
        break;
          
    }
}
    