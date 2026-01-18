#include<stdio.h>
#include<string.h>

// Palindrome check

int main(){

    char str[] = "level";
    int start = 0;
    int end = strlen(str) - 1;
    int isPalindrome = 1;

    while(start < end){
        if(str[start] != str[end]){
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome){
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}