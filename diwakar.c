/*
  Student Name:
  Roll        :
  Subject     :Programming Fundamentals
  program     :to print percentage and marks of student
  lab no.     :5
  date        :2016-9-30
  */
  #include<stdio.h>
  #include<conio.h>
  #include<math.h>
  void main()
  {
  char name[20];
float a,b,c,d,e,f,g,total,per;
printf("what is your name:");
scanf("%s",&name);
printf("Enter the marks of algebra:\n");
scanf("%f",&a);
printf("Enter the marks of discrete:\n");
scanf("%f",&b);
printf("Enter the marks of software Engennering:\n");
scanf("%f",&c);
printf("Enter the marks of fundamental:\n");
scanf("%f",&d);
printf("Enter the marks of interactive skills:\n");
scanf("%f",&e);
printf("Enter the marks of Management:\n");
scanf("%f",&f);
printf("Enter the marks of Computer Archi:\n");
scanf("%f",&g);
total=a+b+c+d+e+f+g;
per=total/7;
printf("total marks obtain by  %f",total);
            if(a<=39 && b<=39 && c<=39 && d<=39 && e<=39 && f<=39 && g<=39)
            {
                printf("You are pass");
            }
            else
            {
               printf("you are fail:");
            }
getch();
}
