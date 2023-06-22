/**
 * @file yzhao_project1.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
*/

//****  Reference for the Extra Credit 
//Youtube Video link -  https://youtu.be/-TkoO8Z07hI

#include <iostream>

int main()
{
    //declare an int variable named num to store the inteteger from the user input
    int num;
    //declare a string variable named lastOrFirstName to store the user input as a string
    std::string lastOrFirstName;
    //declare a string variable named youName to store the user input as a string
    std::string youName;
    //declare a string variable named fruit to store the user input as a string
    std::string fruit;
    //declare a string variable named adjective to store the user input as a string
    std::string adjective;
    //declare a string variable named color to store the user input as a string
    std::string color;
    //declare a string variable named pet to store the user input as a string
    std::string pet;
    //declare a string variable named smt to store the user input(The enter bar that the user has hit)
    std::string smt;

    //prints the following
    std::cout << "************ MadLib Game *************";
    std::cout << "\nIn this game, you will be filling out the blanks, please follow the instruction.";
    std::cout << "\nPLEASE DO NOT TYPE a single space for input\n";

    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //Ask the user Enter the last name or the first name of a professor: for an input
        std::cout << "Enter the last name or the first name of a professor: ";
        //store the user input into string variable lastOrFirstName
        std::getline(std::cin, lastOrFirstName);
        //if the user input that has stored in string variable lastOrFirstName is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(lastOrFirstName.empty()||lastOrFirstName == " "))
        if(lastOrFirstName.empty()||lastOrFirstName == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable's value of lastOrFirstName which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(lastOrFirstName.empty()||lastOrFirstName == " ");
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //Assign num a integer value of 0
        num=0;
        //print Enter a number between 300-400: to ask the user for an input
        std::cout << "Enter a number between 300-400: ";
        //Stores the user input in integer variable num
        std::cin >> num ;
        //if the user input that has stored in int variable num is bigger than 400, 
        //run the code within {} of if((num > 400)
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(num > 400))
        if(num > 400){
            //prints !!! Please enter a smaller number under 400 !!! to ask the user for an input smaller than 400
            std::cout << "!!! Please enter a smaller number under 400 !!!\n";
        //if num is smaller than 300, run the code within {} of if(num < 300)
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(num < 300))
        }else if(num < 300){
            //prints !!! Please enter a bigger number above 300 !!! to ask the user for an input bigger than 300
            std::cout << "!!! Please enter a bigger number above 300 !!!\n";
        }
        //if the variable's value of num which was inputed by the user is not within 300 to 400, the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(num > 400||num < 300);

    //This line below get the user's previous input(hit enter) 
    //To prevent the string variable youName getting it and double print "Enter Your first name:"
    //without this line the enter bar that the user has hitted will be an input for youName
    std::getline(std::cin, smt);
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //print Enter Your first name: to ask the user for an input
        std::cout << "Enter Your first name: ";       
        //store the input from the user into string variable youName 
        std::getline(std::cin, youName); 
        //if the user input that has stored in string variable youName is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(youName.empty()||youName == " "))
        if(youName.empty()||youName == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable value of youName which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(youName.empty()||youName == " ");
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{ 
        //print Enter A fruit name: to ask the user for an input
        std::cout << "Enter A fruit name: ";
        //store the input from the user in string variable fruit
        std::getline(std::cin, fruit);
        //if the user input that has stored in string variable fruit is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(fruit.empty()||fruit == " "))
        if(fruit.empty()||fruit == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable value of fruit which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(fruit.empty()||fruit == " ");
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //print Enter an adjective: to ask the user for an input
        std::cout << "Enter an adjective: ";
        //store the input from the user in string variable adjective
        std::getline(std::cin, adjective);
        //if the user input that has stored in string variable adjective is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(adjective.empty()||adjective == " "))
        if(adjective.empty()||adjective == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable value of adjective which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(adjective.empty()||adjective == " ");
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //print Enter a color: to ask the user an input
        std::cout << "Enter a color: ";
        //store the input from the user in string variable color
        std::getline(std::cin, color);
        //if the user input that has stored in string variable color is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(color.empty()||color == " "))
        if(color.empty()||color == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable value of color which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(color.empty()||color == " ");
    
    //do{}while() loop, run the code inside of the {} one time first. 
    //After the code inside of {} has run one time, 
    //it will check the argument in side of while(), 
    //this code will be running over and over again untill the argument in () is false.
    do{
        //print Enter a pet: to ask the user for an input
        std::cout << "Enter a pet: ";
        //store the input from the user in string variable string
        std::getline(std::cin, pet);
        //if the user input that has stored in string variable pet is enter bar or a single space bar,
        //run the code in the {} of if()
        //if the argument in the () is not true, 
        //continue running next line of code (after the {} of if(pet.empty()||pet == " "))
        if(pet.empty()||pet == " "){
            //prints !!! Please enter an input !!! to warn the user to enter an actual input
            std::cout << "!!! Please enter an input !!!\n";
        }
        //if the variable value of pet which was inputed by user is only enter bar or the input is a single space bar, 
        //the code in do{} will be run again
        //if the argument in the () is not true, continue running next line of code
    }while(pet.empty()||pet == " ");

    //prints out the following, exact the same thing in the double quotation marks, 
    //prints the value which is stores in each different variable as it formatted below
    // \n means create a new line which is the same as enter does when we are writing on computer
    std::cout << "\nOne day, Professor " << lastOrFirstName << " asked you to go to his office hour.\n";
    std::cout << "But you said, I don't have time for it because I am going to zoo to watch "
                << pet << " eating " << fruit << '\n';
    std::cout << "Professor " << lastOrFirstName << " said, that is ridiculous! \n";
    std::cout << youName << "! The grade you got from last group project is " << num << " out of 1000.\n";
    std::cout << "You are " << adjective << "!\n";
    std::cout << "After professor " << lastOrFirstName << " said all of that, his/her face turned to " << color << '\n';

    std::cout << "\n**************************************";

    return 0;
}
