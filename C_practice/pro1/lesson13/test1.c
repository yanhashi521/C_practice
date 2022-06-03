#include<stdio.h>
#include<string.h>

typedef struct score {
    int english;
    int math;
    int japanese;
}score_type;

typedef struct student {
    char name[30];
    //int english;
    //int math;
    //int japanese;
    /*int score[3];*/
    score_type score;
}student_type;

int main() {
    student_type student[4];
    for(int i = 0;i < 4;i++) {
        printf("No.%d name English Math Japanese",i+1);
        //scanf("%s %d %d %d",student[i].name,&student[i].english,&student[i].math,&student[i].japanese);
        /*scanf("%s %d %d %d",student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);*/   
        scanf("%s %d %d %d",student[i].name,&student[i].score.english,&student[i].score.math,&student[i].score.japanese);
    }
    for(int i = 0;i < 4;i++) {
        //printf("%s の総合成績は%d\n",student[i].name,student[i].english+student[i].math+student[i].japanese);
        /*printf("%s の総合成績は%d\n",student[i].name,student[i].score[0]+student[i].score[1]+student[i].score[2]);*/
        printf("%s の総合成績は%d\n",student[i].name,student[i].score.english+student[i].score.math+student[i].score.japanese);
    }

}