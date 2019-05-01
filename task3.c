#include <stdio.h>

int main()
{
    char cont='Y';
    char patientName[20];
    char dob[10];
    char doctorName[20];
    char appointmentDate[20];
    char time[5];
    char response='N';
    int option;
    char prescID;
    int prescETX;
    char testID;

    printf("Welcome to Camb Surgery!\n");
    printf("Please use the menu below to book an appointment with a GP, extend prescriptions or view your results.\n");

    for(;;) {

        printf("\n\nPlease select one of the following options.\n");
        printf(" 0. To exit the system.\n");
        printf(" 1. To book an appointment.\n");
        printf(" 2. To extend a prescription.\n");
        printf(" 3. To view your test results.\n");
	      scanf("%d", &option);

	if (option== 0){
	        break;
        }
	  else if (option== 1) {
	     do{
          printf("\n\nPlease enter the name of your GP: \n" );
          scanf("%s", &doctorName);
          printf("Thank you\nPlease enter the desired date of your appointment as dd/mm: \n");
          scanf("%s", &appointmentDate);
          printf("Thank you\nPlease enter the desired time of yor appointment as hh:mm in 24hr format: \n" );
          scanf("%s", &time);
          printf("Thank you\nIs the following correct?: Appointment with " );
          printf("%s", doctorName);
          printf(" on %s", appointmentDate);
          printf(" at %s\n", time);
          printf("Please enter Y for yes and N for no\n" );
          scanf(" %c", &response);
        }while (response== 'N');
          printf("Your appointment has been booked. Would you like to use another service? Please enter Y or N: \n");
          scanf(" %c", &cont);
          if (cont== 'N'){
            break;
          }
	  }
	  else if (option== 2) {
	     do{
         fflush(stdin); //empties the buffer. To be used before you read a string.
      	  printf("\n\nPlease enter the prescription identifier of the prescription you would like to extend: \n");
      	  scanf(" %s", &prescID);
      	  printf("\nHow many days would you like to extend this prescription for?\n");
      	  scanf("%d", &prescETX);
          printf("\nTo confirm, you would like to extend prescription ID: %s for a total of %d days? Please enter Y or yes and N for no\n", prescID, prescETX);
      	  scanf(" %c", &response);
	     }while (response== 'N');
          printf("Your prescription has been extended. Would you like to use another service? Please enter Y or N: \n");
          scanf(" %c", &cont);
          if (cont== 'N'){
            break;
          }
        }
    else if (option== 3){
      do{
  	     printf("\n\nPlease enter your test result identifier: \n");
  	     scanf(" %s", &testID);
  	     printf("\nYou have requested the results for test: %s. Is this correct? Please enter Y or yes and N for no\n", testID);
  	     scanf(" %c", &response);
      }while (response== 'N');
         printf("\n The results of your test are now printing. Would you like to use another service? Please enter Y or N: \n");
         scanf(" %c", &cont);
         if (cont== 'N'){
           break;
        }
	}

}
return 0;
}

/*
Assignment task 3

The program above displays an interactive menu that a patient can use to book an appointment with their GP, extend existing prescriptions or print test results.

    a. Comment the existing code.
    b. Write the code for:
        i. booking an appointment with the GP. The user should be asked to enter the GP name, date and time they want the appointment for.
        ii. extending existing prescriptions. The user should be asked to enter the prescription identifier they want to extend. The prescription identifier is a number.
        iii. printing test results. The user should be asked to enter the test result identifier they want to print. The test result identifier is a number.

Please note that some variables are already declared for you but you might need to more.

    c. Check if the option entered by the user is valid. It should be a number between 0 and 3. Print a message if it’s not valid.
    d. Extend the code to ask the user for how many days they want to extend the prescriptions for.
    e. Change the code to allow the test prescription and test result identifiers to be strings.

Marking scheme:
	1 mark for presenting the program in week 5.
	Up to 5 marks for items a. and b.
	Up to 4 marks for items c, d, e.
	You need to do items a. and b. before approaching items c, d and e.
*/
