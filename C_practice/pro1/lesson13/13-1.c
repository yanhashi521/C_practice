#include<stdio.h>

typedef struct student_info {
    char name[30];
    int old;
    float GPA;
}student_info_type;

int main() {
    student_info_type student[10];
    student_info_type selected_student;
    student_info_type *student_p;
    student_p = student;
    int max_GPA_num=0;


    for(int i = 1;i <= 10;i++) {
        printf("%d人目の学生情報を入力してください(氏名 年齢 GPA スコア):",i);
        scanf("%s %d %f",(student_p+i)->name,&(student_p+i)->old,&(student_p+i)->GPA);
        if((student_p+i)->old <= 20 && (student_p+i)->GPA > (student_p+max_GPA_num)->GPA) {
            max_GPA_num = i;
        }
    }
    /*for(int i = 0;i < 3;i++) {
        printf("%s %d %f\n",(student_p+i)->name,(student_p+i)->old,(student_p+i)->GPA);
    }*/
    printf("決定された奨学生は:氏名%s,年齢:%d,GPA:%2.1f\n",(student_p+max_GPA_num)->name,(student_p+max_GPA_num)->old,(student_p+max_GPA_num)->GPA);
    
}