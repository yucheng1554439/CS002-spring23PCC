/**
 * @file yzhao_project11.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-04-21
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>
#include <string>
//function declaration
char menu();
int operate(char, char[]);

int main(){
    //declaration of variables
    char userChoice;
    char userInput[100];
    //ask the user for the string, if it is \n, run this again
    std::cout << "Enter a string: \n";
    std::cin.getline(userInput, 100);
    //if user didn't quit, run the following
    while(userChoice != 'G'){
        //call menu() for a value of userChoice
        userChoice = menu();
        //if they chose to quit, thank them and end the code.
        if(userChoice == 'G'){
            std::cout << "Thank you for using!";
            std::terminate();
            //return 0;
        }
        //else run their commands
        else if(userChoice != 'G'){
            //run their commands and pass the value of userChoice, userInput.
            operate(userChoice, userInput);
        }
    }
    return 0;
}
//Options for user
char menu(){
    //declaration of variable
    std::string choice;
    //output
    std::cout << "\nSelect a command:\nA) Counting the number of vowels in the string.\nB) Counting the number of consonants in the string.\nC) Converting the string to all uppercase.\nD) Converting the string to all lowercase.\nE) Displaying the current string.\nF) Enter a new string.\nG) Exit the program.\n";
    std::getline(std::cin, choice);
    //make their choice upper case
    choice[0] = (char)toupper(choice[0]);
    //return the value of choice
    return choice[0];
}
int operate(char a, char sentence[]){
    //declaration of variables
    a = (char)toupper(a);
    int vowel = 0;
    int i = 0;
    int consonants = 0;
    int j = 0;
    int z = 0;
    //different cases for differnt values of a, the user's commands
    switch(a){
        //Counting the number of vowels in the string
        case 'A': 
        //go through the array, see if there is vowels and plus 1
        do{
            if(toupper(sentence[i]) == 65||toupper(sentence[i]) == 69||toupper(sentence[i]) == 73||toupper(sentence[i]) == 79||toupper(sentence[i]) == 85){
                vowel++;
            }
            i++;
        }while((int)sentence[i] != 0);
        std::cout << "There are " << vowel << " vowels in this string.";
        break;
        //Counting the number of consonants in the string
        case 'B': 
        //go through the array, see if there is consonants and plus 1
        do{
            if(toupper(sentence[j]) >= 66 && toupper(sentence[j]) <= 68 || toupper(sentence[j]) >= 70 && toupper(sentence[j]) <= 72 || toupper(sentence[j]) >= 74 && toupper(sentence[j]) <= 78 || toupper(sentence[j]) >= 80 && toupper(sentence[j]) <= 84 || toupper(sentence[j]) >= 86 && toupper(sentence[j]) <= 90){
                consonants++;
            }
            j++;
        }while((int)sentence[j] != 0);
        std::cout << "There are " << consonants << " consonants in this string.";
        break;
        //Converting the string to all uppercase
        case 'C':
        do{
            std::cout << sentence[j];
            j++;
        }while((int)sentence[j] != 0);
        std::cout << '\n';
        //make every elements upper case by using toupper() function
        do{
            sentence[z] = toupper(sentence[z]);
            std::cout << sentence[z];
            z++;
        }while((int)sentence[z] != 0);
        break;
        //Converting the string to all lowercase
        case 'D':
        do{
            std::cout << sentence[j];
            j++;
        }while((int)sentence[j] != 0);
        std::cout << '\n';
        //make every elements upper case by using tolower() function
        do{
            sentence[z] = tolower(sentence[z]);
            std::cout << sentence[z];
            z++;
        }while((int)sentence[z] != 0);
        break;
        //Displaying the current string
        case 'E':
        std::cout << "Current String: ";
        //output every elements
        do{
            std::cout << sentence[j];
            j++;
        }while((int)sentence[j] != 0);
        break;
        //Enter a new string
        case 'F':
        //call main function
        main();
        return 0;
        break;
        //Exit the program.
        case 'G':
        return 0;
        break;
    }
    return 0;
}