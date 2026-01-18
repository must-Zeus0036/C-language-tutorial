#include<stdio.h>
#include<time.h>
#include<unistd.h> // for sleep function
// simple system timer
// print starting, wait 3 seconds, print Done

int main(){

    printf("Starting timer...\n");

    fflush(stdout); // ensure the output is printed immediately

    sleep(3); // wait for 3 seconds

    printf("Done!\n");
    
    return 0;
}
