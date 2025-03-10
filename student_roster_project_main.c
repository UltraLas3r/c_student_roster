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
        viewOptions();
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
      int choice;
      int validChoice = 0;

      do
      {
         printf("\nStudent Roster Menu\n");
         printf("1. Add Student\n");
         printf("2. Display Students\n");
         printf("3. Delete Student\n");
         printf("4. Exit\n");

         printf("Enter your choice: ");
         scanf("%d", &choice);

         switch (choice) 
         {
               case 1:
                  //addStudent();
                  printf("ADD STUDENT SELECTED");
                  break;

               case 2:
                  // displayStudents();
                  printf("display STUDENTs SELECTED");
                  break;

               case 3:
                  //deleteStudent();
                  printf("REMOVE STUDENT SELECTED");
                  break;

               case 4:
                  printf("Exiting the program.\n");
                  break;

               default:
                  printf("Invalid choice. Please try again.\n");
                  validChoice = 1;      
         } 
      } while (choice != 4 || validChoice != 0);

      printf("THIS IS THE OUTSIDE OF THE LOOP");

      return 0;
   }