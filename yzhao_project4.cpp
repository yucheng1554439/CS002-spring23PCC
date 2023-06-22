/**
 * @file yzhao_project4.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
*/

//****  Reference for the Extra Credit  **** 
//link: https://cplusplus.com/reference/cctype/tolower/
//youtube link: https://youtu.be/-TkoO8Z07hI
//Source to comment for the function char computerChoice(): http://www.fredosaurus.com/notes-cpp/misc/random.html

#include <iostream>
#include <cstdlib>
//declare the a char type function named userChoice which will return the user's choice of either 'r', 'p', 's'
char userChoice();
//declare the a char type function named computerChoice which will return the computer's choice of either 'r', 'p', 's'
char computerChoice();
//declare the a string type function named compareChoice with parameter char uChoice, char cChoice, which will passes the value of these two variable, 
//this function will return the winner(user, computer) back.
std::string compareChoice(char uChoice, char cChoice);

int main(){
    //declare an int variable named playTimes to store the user input
    int playTimes;
    //declare an int variable named userScore to store the user's scores and initialized with 0;
    int userScore = 0;
    //declare an int variable named computerScore to store the computer's scores and initialized with 0;
    int computerScore = 0;
    //prints the following
    std::cout << "-----Welcome to Rock Paper Scissors Game------\n";
    std::cout << "You will be competing with computer, \n";
    std::cout << "How many times do you want to play? ";
    //store the input from the user into playTimes
    std::cin >> playTimes;

    //The codes in {} will run over and over again until i= playTimes|| i>playTimes, i is an int variable initialized with 0, i will increase by one after each iteration
    for(int i = 0; i < playTimes; i++){
        //stores the value that is returned by userChoice() into uChoice which is a char typed variable. cChoice stands for computer choices
        char uChoice = userChoice();
        //stores the lowercased value that is returned by computerChoice() into cChoice which is a char typed variable. uChoice stands for user choices
        //tolowrer() lower case a character
        char cChoice = tolower(computerChoice());
        //if the value that is returned by compareChoice(uChoice, cChoice) is equal to "user" then run the code in {}, else run the code after if(){} .
        //passes the value of character variable uChoice, cChoice to compareChoice();
        if(compareChoice(uChoice, cChoice) == "user"){
            //the value of userScore increases by one
            userScore++;
        //if the value that is returned by compareChoice(uChoice, cChoice) is equal to "computer" then run the code in {}, else run the code after if(){} .
        //passes the value of character variable uChoice, cChoice to compareChoice();
        }else if(compareChoice(uChoice, cChoice) == "computer"){
            //the value of computerScore increases by one
            computerScore++;
        }
    }
    //if the value in userScore is greater than the value in computerScore, run the code in {}, else run the code after if(){} .
    if(userScore > computerScore){
        //print out the following
        std::cout << "\nYou are the winner!! \nYour score is: " << userScore << "\nThe Computer's score is: " << computerScore;
    //if the value in userScore is less than the value incomputerScore, run the code in {}, else run the code after if(){} .
    }else if(userScore < computerScore){
        //print out the following
        std::cout << "\nYou lost.... \nThe Computer is the winner!! \nYour score is: " << userScore << "\nThe Computer's score is: " << computerScore;
    }else{
        //print out the following
        std::cout << "\nTie!! \nYour score and computer's score are both: " << userScore;
    }
    //print out the following
    std::cout << "\n-----Thank you for playing!-----";
    return 0;
}

char userChoice(){
    //declare a char typed variable named userInput
    char userInput;
    //print out the following
    std::cout << "Please Enter your choice: ";
    std::cout << "['r' or 'R' for Rock, 'p' or 'P' for Paper, 's' or 'S' for Scissors]\n";
    //stores the input from the user in userInput
    std::cin >> userInput;
    //stores the value of userInput that has been lower cased into userInput
    userInput = tolower(userInput);
    //return the value in userInput
    return userInput;
}

char computerChoice(){
    //Initialize random number generator. Notes: time(0) returns the integer number of seconds from the system clock.
    //Source from: http://www.fredosaurus.com/notes-cpp/misc/random.html
    srand(time(0));
    //declare int variable named random and initialize it with the value that is randomly generated from 0-5
    int random = (rand() % 6);
    //declare a character array and initizlize it with six values.
    char possibleChoices[] = {'R', 'r', 'P', 'p', 'S', 's'};
    //stores the value of a random value from the char array possibleChoices[].
    char choice = possibleChoices[random];
    //return the value of choice
    return choice;
}

//declare two character variable named u, c. Store the value that is passed into u and c.
std::string compareChoice(char u, char c)
{
    //declare a string variable named winner to store the winner.
    std::string winner;
    //if the values of u and r are both equal to 'r', run the following in {}, else run next line after if(){} .
    if(u == 'r'&&c == 'r'){
        //store "none" into winner
        winner = "none";
        //return the value of winner
        return winner;
    //if the value of u is equal to 'r' and the value of c is equal to 'p' run the following in {}, else run next line after if(){} .
    }else if(u == 'r'&&c == 'p'){
        //store "computer" into winner
        winner = "computer";
        //return the value of winner
        return winner;
    //if the value of u is equal to 'r' and the value of c is equal to 's' run the following in {}, else run next line after if(){} .
    }else if(u == 'r'&&c == 's'){
        //store "user" into winner
        winner = "user";
        //return the value of winner
        return winner;
    //if the value of u is equal to 'p' and the value of c is equal to 'r' run the following in {}, else run next line after if(){} .
    }else if(u == 'p'&&c == 'r'){
        //store "user" into winner
        winner = "user";
        //return the value of winner
        return winner;
    //if the values of u and c are both equal to 'p' run the following in {}, else run next line after if(){} .
    }else if(u == 'p'&&c == 'p'){
        //store "none" into winner
        winner = "none";
        //return the value of winner
        return winner;
    //if the value of u is equal to 'p' and the value of c is equal to 's' run the following in {}, else run next line after if(){} .
    }else if(u == 'p'&&c == 's'){
        //store "computer" into winner
        winner = "computer";
        //return the value of winner
        return winner;
    //if the value of u is equal to 's' and the value of c is equal to 'r' run the following in {}, else run next line after if(){} .
    }else if(u == 's'&&c == 'r'){
        //store "computer" into winner
        winner = "computer";
        //return the value of winner
        return winner;
    //if the value of u is equal to 's' and the value of c is equal to 'p' run the following in {}, else run next line after if(){} .
    }else if(u == 's'&&c == 'p'){
        //store "user" into winner
        winner = "user";
        //return the value of winner
        return winner;
    //if the value of u and c are both equal to 's' run the following in {}, else run next line after if(){} .
    }else if(u == 's'&&c == 's'){
        //store "none" into winner
        winner = "none";
        //return the value of winner
        return winner;
    }
    return 0;
}

