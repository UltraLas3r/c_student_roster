#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void welcomeScreen();

int main(){

    welcomeScreen();

    return 0;
}

void welcomeScreen(){
    printf("\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("Hello, Welcome to the Center for Kids Who Want to Learn to Read Good But Cant!");
    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n ");
}