/HOSPITAL MANAGEMENT SYSTEM/
#include<stdio.h>
#include<process.h>
#include<string.h>
int i,ch,p,q,n,d,f,m;
    char pname[10][10];
    char paddress[10][10];
    char pdecease[10][10];
    int pdate[10];
    int pid[10];

    char dname[10][10];
    char daddress[10][10];
    char dspecialize[10][10];
    int did[10];
void patient_read();
void patient_display();
void doctor_read();
void doctor_display();
void main()
{
void display();
void Display();
  char str1[10],str2[10];
  char str3[10]="batch7";
   char str4[10]="bca@123";


   printf("Enter the user name:\n ");
   scanf("%s",str1);
   printf("Enter the password:\n");
   scanf("%s",str2);
   if((strcmp(str1,str3)==0)&&(strcmp(str2,str4)==0))
   {
    printf("-------------------------------------------------------------\n\n");
    printf("\t\t----WELCOME TO PROJECT----\n");
    printf("\n-------------------------------------------------------------\n");
while(1)
{
	display();
    printf("\n<<<---Hospitel management system--->>>\n");
    display();

    printf("\n1,Addmitte patient\n");
    printf("2,patient datails\n");
    printf("3,add new patient\n");
    printf("4,patient list\n");
    printf("5,add doctor\n");
    printf("6,doctor details\n");
    printf("7,add new doctor\n");
    printf("8,doctor list\n");
    printf("0,exit\n");
    Display();

    printf("\nEnter your choise\n");
    scanf("%d",&ch);
       switch(ch)
       {
    case 1:
        printf("\\\\\\\\ Addmitte patient \\\\\\\\\n");
        printf("Enter the number of patient\n");
        scanf("%d",&p);
        for(i=0;i<p;i++)
        {
        patient_read();
        }
        printf("////// Patient Addmitte Succesfully //////\n");
        display();
        printf("\n");
        break;
    case 2:
printf("\n///Patient details///\n");
       for(i=0;i<p;i++)
       {
        patient_display();
       }
       break;
    case 3:
        printf("///Add new patient///\n");
        printf("Enter the number of new patient\n");
        scanf("%d",&n);
        q=p;
        n=n+p;
           for(i=q;i<n;i++)
           {
              patient_read();
           }
           printf("///New atient adding successfully///\n");
        Display();
        printf("\n");
           break;
    case 4:
        printf("///Patient list///\n");
        q=p;
        n=n+p;
           for(i=0;i<n;i++)
           {
              patient_display();
           }
           display();
            printf("\n");
           break;
   case 5:
        printf("///Add doctor///\n");
        printf("Enter the number of doctor:\n");
        scanf("%d",&d);
           for(i=0;i<d;i++)
           {
              doctor_read();
           }
           printf("////Doctor adding successfully////\n");
           display();
            printf("\n");
           break;

    case 6:
        printf("///Doctor details///\n");
           for(i=0;i<d;i++)
           {
                doctor_display();
           }
       display();
        printf("\n");
           break;
    case 7:
        printf("///Add new doctor///\n");
        printf("Enter the number of new doctor:\n");
        scanf("%d",&m);
        f=d;
        m=m+d;
           for(i=f;i<m;i++)
           {
                doctor_read();
            }
            printf("///Adding new doctor successfully///\n");
                display();
                 printf("\n");
            break;
    case 8:
        printf("///Doctor list///\n");
        f=d;
        m=m+d;
           for(i=0;i<m;i++)
           {
              doctor_display();
           }
           Display();
            printf("\n");
           break;

    case 0:
        exit(0);

    default:
        printf("Your choise does not match this case...\n");

       }
}
  }
  else
   {
       printf("Incorrect password...\n");
       }
}
void display()
       {
        int i;
       for(i=0;i<=34;i++)
        printf("=");
}
void Display()
       {
        int i;
       for(i=0;i<=34;i++)
        printf("*");
}
void patient_read()
{
            printf("patient name:\n");
            scanf("%s",pname[i]);
            printf("patient id:\n");
            scanf("%d",&pid[i]);
            printf("patient address:\n");
            scanf("%s",paddress[i]);
            printf("patient decease:\n");
            scanf("%s",pdecease[i]);
            printf("date of addmitting:\n");
            scanf("%d",&pdate[i]);
}
void patient_display()
{
 printf("patient\t:%d\npatient name\t:%s\npatient id\t:%d\npatient address\t:%s\npatient decease\t:%s\ndate of addmitee:%d\n",i+1,pname[i],pid[i],paddress[i],pdecease[i],pdate[i]);
}
void doctor_read()
{
               printf("doctor name:\n");
               scanf("%s",dname[i]);
               printf("doctor address:\n");
               scanf("%s",daddress[i]);
               printf("doctor id:\n");
               scanf("%d",&did[i]);
               printf("specialize:\n");
               scanf("%s",dspecialize[i]);
}
void doctor_display()
{
printf("doctor\t:%d\ndoctor name\t:%s\ndoctor address\t:%s\ndoctor id\t:%d\nspecialize\t:%s\n",i+1,dname[i],daddress[i],did[i],dspecialize[i]);
} 