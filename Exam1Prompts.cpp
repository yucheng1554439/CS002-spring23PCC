//Prompt 1

#include <iostream>
#include <cmath>
int main(){
    //declaration of the variables to store the user inputs of a b c (The coefficients) and the roots value
    double a, b, c;
    double D;
    double x1;
    double x2;
    //ask the user for three inputs and stores them into the following variables
    std::cout << "Please enter a, b, c for: ax^2 + bx + c with space between each number: ";
    std::cin >> a >> b >> c;
    D = (b*b - 4*a*c);
    x1 = (-1*b + sqrt(D))/(2*a);
    x2 = (-1*b - sqrt(D))/(2*a);
    //depents on the the discriminant is larger than, or equal to, or smaller than 0, the output would be different
    if(D > 0){
        std::cout << "The Discriminant is greater than 0, the roots are real and different, \nfirst root is: " << x1 << " \nsecond root is: " << x2;
    }else if(D == 0){
        std::cout << "The Discriminant is equal to 0, the roots are real and equal, \nfirst root is: " << x1 << " \nsecond root is: " << x2;
    }else{
        std::cout << "The Discriminant is less than 0, the roots are complex and different, \nNo real root";
    }
    return 0;
}

//Prompt 2

#include <iostream>
#include <iomanip>
int main (){
    //declare and intialize int and double variables which will store the value of the times of the exercices.
    //store the possible score and the total score they got in order to calculate the percentage in the future.
    int inputTimes = 0;
    int totalPossibleScore = 0;
    int totalReceivedScore = 0;
    double percentage;
    //ask the user for an input of the excercises
    std::cout << "How many exercises to input? ";
    std::cin >> inputTimes;
    //The loop will run the amount of time as the exercise time that the user had inputted.
    for(int i = 1; i <= inputTimes; i++){
        //declare int variables to store the user input for possible score and the received score
        int possibleScore;
        int receivedScore;
        //ask the user for an input for the possible score of the exercises
        std::cout << "\nTotal points possible for exercise " << i <<": ";
        std::cin >> possibleScore;
        //plus the possible score for each exercise into the total possible score.
        totalPossibleScore += possibleScore;
        std::cout << "Score received for exercise " << i << ": ";
        std::cin >> receivedScore;
        //plus the received score for each exercise into the total received score.
        totalReceivedScore += receivedScore;
    }
    //calculate the percentage by divide the total received score by total possible score
    percentage = ((double)totalReceivedScore / (double)totalPossibleScore) * 100;
    //print out the fixed 2 decimal place for each double/int variable
    std::cout << std::fixed << std::setprecision(2) << "\nYour total is " << totalReceivedScore << " out of " << totalPossibleScore << ", or " << percentage << "%.";
    return 0;
}

//Prompt 3

#include <iostream>
int main(){
    //declaration of int and character variables
    int numOfCookie;
    int dozenOfCookie;
    int freeCookie;
    int looseCookie;
    int totalDozen;
    int totalLoose;
    int totalChip;
    char userInput;
    //run the code within do{} one time, the code will be looping again if user choose yes for calculate again.
    do{
        //ask the user for an input for the numbers of cookies they want to order
        std::cout << "Enter the number of cookies you want to order: ";
        //store the user input into int variable numOfCookie
        std::cin >> numOfCookie;
        //store the value of numOfCookie divided by 12 (cut the decimals) into dozenOfCookie
        dozenOfCookie = numOfCookie / 12;
        //store the value of the remainder of numOfCookie / 12
        looseCookie = numOfCookie % 12;
        //freeCookie is the same amount as the dozen of cookies
        freeCookie = dozenOfCookie;
        //add all the cookies and divide by 12 store it in totalDozen
        totalDozen = (numOfCookie + freeCookie) / 12;
        //the remainder of sum all the cookies and divide by 12 and store it in totalLoose
        totalLoose = (numOfCookie + freeCookie) % 12;
        //10 chips on one cookie, total cookie times 10 is totalChip
        totalChip = (numOfCookie + freeCookie)*10;
        //if numOfCookie is large and equal to 12, the prints the following in {}
        if(numOfCookie >= 12){
            std::cout << "That comes up to " << dozenOfCookie << " dozen cookies and " << looseCookie << " loose cookie(s).";
            std::cout << "\nYou also get " << freeCookie << " free cookies, one per dozen.\n";
        }
        //prints the following
        std::cout << "Your total comes up to " << totalDozen << " dozen cookies and " << totalLoose << " loose cookie(s).";
        std::cout << "\nThere is a total of " << totalChip << " chocolate chips.";
        //ask the user if they want to continue the calculation
        std::cout << "\n\nWould you like to repeat this calculation: ";
        std::cin >> userInput;
    }while(userInput == 'y');
    return 0;
}

//Prompt 4

#include <iostream>
int main(){
    //iteration from 3 to 100 by 1
    for(int i = 3; i <= 100; i++){
        //initialize exam to 0, which means reset the value of exam everytime of the outerloop
        int exam = 0;
        //iteration from 2 to the current i substract by 1
        for(int j = 2; j < (i-1); j++){
            //if i can be divide by j completly
            if(i % j == 0){
                //initialize the exam to 1
                exam = 1;
                //skip the inner loop
                break;
            }
        }
        //if after the loop of the inner loop, the exam is still 0, that means this number i is a prime number
        if(exam == 0){
            //prints out i
            std::cout << i << " ";
        }
    }
    return 0;
}

//Prompt 5

#include <iostream>
int main(){
    //delcaration of two int variables which will be store the user's choice and the length they want
    int userChoice;
    int length;
    //while userChoice is not 4, the code will loop
    while(userChoice != 4){
        //ask the user for an input of their choice
        std::cout << "What would you like to draw? \n      1. Traingle. \n      2. Filled Squre. \n      3. Empty Square. \n      4. Quit.\n";
        //store the user input into userChoice
        std::cin >> userChoice;
        //if the user choose 4, prints the following and terminate the main function
        if(userChoice == 4){
            std::cout << "I hope you enjoyed drawing shapes; goodbye!";
            return 0;
        }
        //ask user for length they want and store the value into length
        std::cout << "What do you want the the length of the triangle's side to be?: ";
        std::cin >> length;
        //based on userChoice's value, different case will happen
        switch(userChoice){
            //if userChoice is 1
            case 1: 
            //the length of this iteration will be equal to the value of length
            for(int i = 0; i < length; i++){
                //the length of this iteration will be current i + 1
                for(int j = 0; j < i+1; j++){
                    //prints *
                    std::cout << "*";
                }
                //end line
                std::cout << std::endl;
            }
            break;
            //if userChoice is 2
            case 2:
            //the length of this iteration will be equal to the value of length
            for(int i = 0; i < length; i++){
                //the length of this iteration will be equal to the value of length
                for(int j = 0; j < length; j++){
                    //prints *
                    std::cout << "*";
                }
                //end line
                std::cout << std::endl;
            }
            break;
            //if userChoice is 3
            case 3:
            //the length of this iteration will be equal to the value of length
            for(int i = 0; i < length; i++){
                //prints *
                std::cout << "*";
                //if the iteration of the outer loop is not the first or the last, the code will run
                if(i > 0 && i < length -1){
                    //the length of this iteration will be equal to the value of length - 2 (substract the first and last row)
                    for(int j = 0; j < length-2; j++){
                        //prints single space
                        std::cout << " ";
                    }
                    //prints the last * in the row
                    std::cout << "*";
                //if its the first iteration for outer loop, the code will run
                }else if(int i = 0){
                    //the length of this iteration will be equal to the value of length - 2 (substract the first and last row)
                    for(int j = 0; j < length-2; j++){
                        //prints *
                        std::cout << "*";
                    }
                    //prints *
                    std::cout << "*";
                //if its the last iteration for outer loop, the code will run
                }else if(int i = length-1){
                    //the length of this iteration will be equal to the value of length - 2 (substract the first and last row)
                    for(int j = 0; j < length-2; j++){
                        //prints *
                        std::cout << "*";
                    }
                    //prints *
                    std::cout << "*";
                }
                //next row, end line
                std::cout << std::endl;
            }
            break;
            //if the user choice is not 1 to 4
            default:
            //prints
            std::cout << "\n Please Enter 1-4....\n";
        }
    }
    return 0;
}

//Prompt 6

#include <iostream>
int main(){
    //delcaration of character variable to store the user choice on if they want to repeat the calculation or no
    char yesOrNo;
    //run the code in do{} one time, if yesOrNo is 'y' the code will loop again
    do{
        //delcare and initialize the double and int variables and initialized them with 0
        double height = 0;
        double weight = 0;
        int age = 0;
        double hatSize = 0;
        double jacketSize = 0;
        double extraJacketSize = 0;
        double waistSize = 0;
        double extraWaistSize = 0;
        //ask the user for an input for their height, weight, and age. And store them into different variables
        std::cout << "Enter your height(inches): ";
        std::cin >> height;
        std::cout << "Enter your weight(pounds): ";
        std::cin >> weight;
        std::cout << "Enter your age(years): ";
        std::cin >> age;
        //store the value of the calculation for hat size into hatSize
        hatSize = (weight / height) * 2.9;
        //store the value of the calculation for extra jacket size into extraJacketSize
        extraJacketSize = (age - 30)/10;
        //store the value of the calculation for jacket size into jacketSize
        jacketSize = (((height * weight) / 288) + (0.125) * extraJacketSize);
        //store the value of the calculation for extra waist size into extraWaistSize
        extraWaistSize = (age - 28)/2;
        //store the value of the calculation for waist size into waistSize
        waistSize = (weight/5.7 + (0.1) * extraWaistSize);
        //prints the following
        std::cout << "Your Hat Size is: " << hatSize << std::endl;
        std::cout << "Your Jacket Size is: " << jacketSize << std::endl;
        std::cout << "Your Waist Size in inches is: " << waistSize << std::endl;
        //ask the user if they want to continue or not and store the user input into yesOrNo
        std::cout << "Would you like to repeat the calculation? ('y' for yes, 'n' for no): ";
        std::cin >> yesOrNo;
        //if the value of yesOrNo is 'n', prints the following
        if(yesOrNo == 'n'){
            std::cout << "Thank you for using!";
        }
    }while(yesOrNo == 'y');
    return 0;
}

//Prompt 7

#include <iostream>
int main(){
    //declaration of character variable yesOrNo
    char yesOrNo;
    //run the code in do{} one time, if yesOrNo is 'y' the code will loop again
    do{
    //declare and initialize the double variable with 0 which will store the value of total amount due, minimum payment, and balance
    double totalAmountDue = 0;
    double minimumPay = 0;
    double balance = 0;
    //ask the user for an input of their account balance and store it into balance
    std::cout << "Please enter your account balance: ";
    std::cin >> balance;
    //if balance is greater than 1000 dollars, run the following
    if(balance > 1000){
        //store the value after the calculation for the total amount due into totalAmountDue
        totalAmountDue = ((0.015)*(1000) + (0.01)*(balance - 1000) + balance);
    }else{
        //store the value after the calculation for the total amount due into totalAmountDue
        totalAmountDue = (1.015) * balance;
    }
    //store the value after the calculation for the minimum payment into minimumPay
    minimumPay = totalAmountDue * 0.1;
    //if the minimumPay is less than 10, set it equal to 10
    if(minimumPay < 10){
        minimumPay = 10;
    }
    //prints the following
    std::cout << "Based on your balance: " << balance << "$" << std::endl;
    std::cout << "Your Total Amount Due is: " << totalAmountDue << "$" << std::endl;
    std::cout << "Your Minimum payment is: " << minimumPay << "$" << std::endl;
    //ask the user if they want to repeat the calculation and store it into yesOrNo
    std::cout << "\nWould you like to repeat the calculation? ('y' for yes, 'n' for no): ";
    std::cin >> yesOrNo;
    //if yesOrNo is 'n', prints the following
    if(yesOrNo == 'n'){
        std::cout << "Thank you for using!";
    }
    }while(yesOrNo == 'y');
    return 0;
}
    
//Prompt 8

#include <iostream>
int main(){
    //declare the int variables to store the amount of coins and the total worth
    int quarter;
    int dime;
    int nickel;
    int penney;
    int totalCents;
    //ask the user for an input for the numbers of each coins and store them into the variables
    std::cout << "Enter the amount of the quarters: ";
    std::cin >> quarter;
    std::cout << "Enter the amount of the dimes: ";
    std::cin >> dime;
    std::cout << "Enter the amount of the nickels: ";
    std::cin >> nickel;
    std::cout << "Enter the amount of the pennies: ";
    std::cin >> penney;
    //store the value after the calculation for the total cents value into totalCents
    totalCents = (quarter * 25 + dime * 10 + nickel * 5 + penney);
    //prints the following
    std::cout << "The coins are worth " << totalCents << " cents";
    return 0;
}

//Prompt 9

#include <iostream>
int main(){
    //delcaration of char variable yesOrNo to store the user's choice on if they want to repeat or not
    char yesOrNo;
    //run the code in do{} one time, if yesOrNo is 'y' the code will loop again
    do{
    //declare and initialize two int vairbles with 0 that will store the user input for their birth date and birth month
    int birthMonth = 0;
    int birthDate = 0;
    //ask the user for inputs for the month and date that they were born and store them into birthMonth and birthDate
    std::cout << "Enter the Month you were born(1-12): ";
    std::cin >> birthMonth;
    std::cout << "Enter the Date you were born(1-31): ";
    std::cin >> birthDate;
    //if birthMonth is 1-12, run different blocks of code
    switch(birthMonth){
        //if birthMonth is 1, run the following codes
        case 1: 
        //if birthDate is greater than and equal to 20, prints the following
        if(birthDate >= 20){
            std::cout << "You are Aquarius.";
        }else{
            //else prints the following
            std::cout << "You are Capricorn.";
        }
        break;
        //if birthMonth is 2, run the following codes
        case 2: 
        //if birthDate is greater than and equal to 19, prints the following
        if(birthDate >= 19){
            std::cout << "You are Pisces.";
        }else{
            //else prints the following
            std::cout << "You are Aquarius.";
        }
        break;
        case 3: 
        if(birthDate >= 21){
            std::cout << "You are Aries.";
        }else{
            std::cout << "You are Pisces.";
        }
        break;
        case 4: 
        if(birthDate >= 20){
            std::cout << "You are Taurus.";
        }else{
            std::cout << "You are Aries.";
        }
        break;
        case 5: 
        if(birthDate >= 21){
            std::cout << "You are Gemini.";
        }else{
            std::cout << "You are Taurus.";
        }
        break;
        case 6: 
        if(birthDate >= 22){
            std::cout << "You are Cancer.";
        }else{
            std::cout << "You are Gemini.";
        }
        break;
        case 7: 
        if(birthDate >= 23){
            std::cout << "You are Leo.";
        }else{
            std::cout << "You are Cancer.";
        }
        break;
        case 8: 
        if(birthDate >= 23){
            std::cout << "You are Virgo.";
        }else{
            std::cout << "You are Leo.";
        }
        break;
        case 9: 
        if(birthDate >= 23){
            std::cout << "You are Libra.";
        }else{
            std::cout << "You are Virgo.";
        }
        break;
        case 10: 
        if(birthDate >= 23){
            std::cout << "You are Scorpio.";
        }else{
            std::cout << "You are Libra.";
        }
        break;
        case 11: 
        if(birthDate >= 22){
            std::cout << "You are Sagittarius.";
        }else{
            std::cout << "You are Scorpio.";
        }
        break;
        case 12: 
        if(birthDate >= 22){
            std::cout << "You are Capricorn.";
        }else{
            std::cout << "You are Sagittarius.";
        }
        break;
    }
    //ask the user for an input for if they want to repeat the calculation and store it into yesOrNo
    std::cout << "\nWould you like to repeat this calculation?('y' for yes, 'n' for no)";
    std::cin >> yesOrNo;
    //if yesOrNo is 'n', prints the following
    if(yesOrNo == 'n'){
        std::cout << "\nThank you for using!";
    }
    }while(yesOrNo == 'y');
    return 0;
}