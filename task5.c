#include<stdio.h>
// TO-Do LIST Arrays 
// Work with fixed-size 2D arrays Char tasks[5][100]

int main(void){
    char tasks [5][100];
    int i;

    printf("Enter 5 tasks: \n");

    for (i=0; i<5; i++){
        printf("Task %d: ", i+1);
        fgets(tasks[i], 100, stdin); // read each task
    }
    printf("\nYour To-Do List:\n");
    for (i=0; i<5; i++){
        printf("%d. %s", i+1, tasks[i]); // print each task

}
        return 0;

    }


