#include"student_head.h"
int main()
 {
         char op1,op2;
         while(1)
         {
         printf("****STUDENT RECORD MENU*****\n\n");
         printf("a/A: Add new stu_record\nd/D: Delete a data\ns/S: show all the data\nm/M: Modify a stu_data\nv/V: Save the data in file\ne/E: save and Exit\nt/T: Sort all the data\nl/L: Delete all dat    a\nr/R: Reverse the data\n\n");
         printf("enter your choice:\n");
         scanf(" %c",&op1);
         if(op1>='a' && op1<='z')
                 op1=op1-32;
         switch(op1)
         {
                 case 'A':add_entry();
                          break;
                 case 'S':printf("-----------------------------\n\n");
                          printf("Rollno.  Name  Percentage\n");
                          printf("-----------------------------\n");
                          show_data();
                          printf("-----------------------------\n\n");
                          break;
                 case 'D':printf("\nr/R: Enter roll number to delete\nn/N: Enter name to delete\n");
                          scanf(" %c",&op2);
                          if(op2>='a' && op2<='z')
                                  op2=op2-32;
                         switch(op2)
                          {
                                  case 'R':delete_rollno();break;
                                  case 'N':delete_name();break;
                                  default:printf("invalid option\n\n");
                          }
                          break;
                 case 'M':printf("\nr/R: Search by rollno \nn/N: Search by name\np/P: Search by percentage\n");
                          scanf(" %c",&op2);
                          if(op2>='a' && op2<='z')
                                  op2=op2-32;
 switch(op2)
                          {
                                  case 'R':rollno_mod();break;
                                  case 'N':name_mod();break;
                                 case 'P':percentage_mod();break;
                                  default:printf("invalid choice\n\n");
                          }
                        break;
                 case 'V':save_data();break;
                 case 'E':printf("\ns/S: Save and exit\ne/E: Exit without saving\n\n");
                          scanf(" %c",&op2);
                          if(op2>='a' && op2 <='z')
                                  op2=op2-32;
                          switch(op2)
                          {
                                  case 'S':save_data();exit(0);
                                  case 'E':exit(0);
                                  default:printf("invalid choice\n\n");
                          }
                          break;
                 case 'T':printf("\nn/N: Sort with name\nr/R: Sort with rollno\np/P: Sort with percentage\n\n");
                          scanf(" %c",&op2);
                          if(op2>='a' && op2<='z')
                                  op2=op2-32;
                          switch(op2)
                          {
                                  case 'N':name_sort();break;
                                  case 'R':rollno_sort();break;
                                  case 'P':percentage_sort();break;
                                  default:printf("invalid choice\n\n");
                          }
                          break;
                 case 'L':delete_all();break;
                 case 'R':reverse_data();break;
    default:printf("invalid\n\n");
         }
         }
 }




