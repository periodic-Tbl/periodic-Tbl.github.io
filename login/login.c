#include <stdio.h>
#include <string.h>
int main() {
    char pass[] = "zym114deu@periodic-tbl~$";
    char input[100];
    while (1) {
        printf("\nInput the password: ");
        gets(input); 

        if (strcmp(pass, input) == 0) {
            printf("Correct password\nHere's step one"); 
        } 
        else {
            printf("Wrong password, try another\n"); 
        }
    }
}