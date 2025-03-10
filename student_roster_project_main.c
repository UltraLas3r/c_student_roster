#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void welcomeScreen();

int main()
    {

        welcomeScreen();

        return 0;
    }

void welcomeScreen()
    {
        printf("\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
        printf("Hello, Welcome to the Center for Kids Who Want to Learn to Read Good But Cant!");
        printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n ");

        viewOptions();
    }

void viewOptions()
    {
    //print user menu choices in a do while loop


    }

    
 int add_or_remove_student(int action, char fname[], char lname[])
 {
    //action variable. value of 1 adds, value of 0 removes.

    //requires first and last name
    // concatenates the name so there is a return variable of full name.

    //if action == 1, return concatenated string value of the full name

    //if action == 0, call the add/remove student function to remove the student from the roster


 }

 int generate_random_id(){

   
 }

 int remove_student_from_roster()
 {
    //delete student from student roster

 }


 void student_gpa_scores(){
    //a collection of student test scores
 }

 void add_or_remove_gpa(int gpa_value, char fullname[]){
    //add or remove gpa to the gpa roster
 }

 int main(){

   // memory_addressing();

    //pointers_practice();

    //student_gpa_scores();

    student_list("Jericho Bunker");


    return 0;
 }