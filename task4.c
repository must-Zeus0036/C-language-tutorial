#include<stdio.h>

// define the struct for student grade
struct student {
    char name[50];
    int score;

};

int main(void){
    struct student s1;

    printf("Enter a student name: ");
    scanf("%s", s1.name); // read string input

    printf("Enter a student score: ");
    scanf("%d", &s1.score); // read integer input

    if(s1.score >50){
        printf("Student %s has passed with score %d\n", s1.name, s1.score);
    } else {
        printf("Student %s has failed with score %d\n", s1.name, s1.score);
    }

    return 0;
}