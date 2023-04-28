/**
 * @file yzhao_project12.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
*/
#include <iostream>
#include <string>
int main(){
    //declaration of variables
    std::string fullName;
    int indexOfSpace;
    char firstInitial;
    char lastInitial;
    std::string userChoice;
    //ask user for their full name with space in between
    std::cout << "Enter Firstname Lastname with a space in between: ";
    std::getline(std::cin, fullName);
    //find the index of space
    indexOfSpace = fullName.find(" ");
    //The next element of space is the intial letter of their last name
    lastInitial = toupper(fullName[indexOfSpace+1]);
    //output
    std::cout << "Your first and last initial is: ";
    for(int i = 0; i < indexOfSpace; i++){
        //Upcase the first letter
        if(i == 0){
            std::cout << (char)toupper(fullName[i]);
        }else{
            std::cout << fullName[i];
        }
    }
    //output
    std::cout << " " << lastInitial << std::endl;
    //ask the user if they want to repeat
    std::cout << "Would you like to repeat? ('y' for yes, 'n' for no): ";
    //get the users input if they want to, run main function again.
    std::getline(std::cin, userChoice);
    if(userChoice[0] == 'y'){
        main();
    //if no, thank them and end the code
    }else if(userChoice[0] == 'n'){
        std::cout << "Thank you for using!";
        return 0;
    }
    return 0;
}