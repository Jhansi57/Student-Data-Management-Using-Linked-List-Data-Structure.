#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct student
{
        int rollno;
        char name[20];
        float percentage;
        struct student *next;
}stu;
void stud_add();
void stud_display();
void stud_delete_roll();
void stud_delete_name();
void stud_mod_roll();
void stud_mod_name();
void stud_mod_percent();
void stud_save();
void stud_sort_name();
void stud_sort_percentage();
void delete_all();
void reverse_list();




