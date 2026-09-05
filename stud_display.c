#include"student_head.h"
   extern stu *head;
   void show_data()
   {
   
           stu *n=head;
           if(n==0)
          {
                  printf("no student data available.........\n");
                  return;
          }
          while(n)
          {
                  printf("%d %s %f\n",n->rollno,n->name,n->percentage);
                  n=n->next;
          }
   
   }  

