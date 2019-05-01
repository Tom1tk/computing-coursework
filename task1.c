#include <stdio.h>
int main() // This function will return an integer
{
    char nameTeam1[20]; //Declares variable "nameTeam1" which has 20 characters
    char nameTeam2[20]; //Declares variable "nameTeam2"  which also has 20 characters
    int team1Score, team2Score; //Declares two integer variables "team1Score" and "team2Score"
    printf("Please enter the name of team one: "); //Prints a statement for the user, requesting them to enter the desired name of the first team
    scanf("%s", nameTeam1); //This line takes the input from the user and assigns it to the variable "nameTeam1"
    printf("Please enter the name of team two: "); //Repeats the same process for "nameTeam2" to request and assign the name of the second team
    scanf("%s", nameTeam2);
    printf("Please enter the score for %s: ", nameTeam1); //Requests the score for the first named team
    scanf("%d", & team1Score); //Assigns the user input to variable "team1Score"
    printf("Please enter the score for %s: ", nameTeam2); //Repeats the process for "team2Score"
    scanf("%d", & team2Score);
    if (team1Score > team2Score) //If statement which checks if the integer value for "team1Score" is higher than "team2Score"
    {
        printf("%s scores 3 points and %s scores 0 points \n", nameTeam1, nameTeam2 ); //If the statement is true print that they score 3 points and the second team scores 0
    }
    else //If the statement is not true, carrys on to the next if statement
      if (team1Score < team2Score) //Compares the two vales to see if the second team's score value is higher than the team's
        {
            printf("%s scores 3 points and %s scores 0 points \n", nameTeam2, nameTeam1 ); //Print that the second team get 3 points and the first team gets 0
        }
        else //If neither statements are met then both teams must have the same score
    {
            printf("Both %s and %s score 1 point \n", nameTeam1, nameTeam2); //Since it must be a draw, both teams recieve 1 point
    }
    return 0; //The function returns integer 0
}
