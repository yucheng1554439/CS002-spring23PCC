/**
 * @file yzhao_project3.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * 
*/

//The value in the double variable was deducted by 1 
//when I store the double value which has converted into int type 
//into int variable


#include <iostream>

int main(){
    //declare a double variable named purchaseAmount to store the user input, and initialized with 0
    double purchaseAmount = 0;
    //declare a double variable named amountReceived to store the user input, and initialized with 0
    double amountReceived = 0;
    //declare a double variable named change to store the differnce of amountReceived and purchaseAmount, and initialized with 0
    double change = 0;
    //declare an int variable named remainingAmount to store the value of 100*change, and initialized with 0
    int remainingAmount = 0;
    //declare an int variable named dollar to store the number amount of dollars, and initialized with 0
    int dollar = 0;
    //declare an int variable named quarter to store the number amount of quarter, and initialized with 0
    int quarter = 0;
    //declare an int variable named dime to store the number amount of dime, and initialized with 0
    int dime = 0;
    //declare an int variable named nickel to store the number amount of nickel, and initialized with 0
    int nickel = 0;
    //declare an int variable named penny to store the number amount of penny, and initialized with 0
    int penny = 0;

    //prints "Please enter the Purchase Amount: " to ask the user for an input of the purchase amount
    std::cout << "Please enter the Purchase Amount: ";
    //stores the user input in the double variable purchaseAmount
    std::cin >> purchaseAmount;

    //prints "Please enter the Amount Received: " to ask the user for an input of the amount received
    std::cout << "Please enter the Amount Received: ";
    //stores the user input in the double variable amountReceived
    std::cin >> amountReceived;

    //stores the value of amountReceived substracted by purchaseAmount in double variable change
    change = amountReceived - purchaseAmount;
    //prints "Total change is:" and the value that has stored in the double variable change
    std::cout << "Total change is: " << change;

    //stores the value of (change * 100) that has converted to int type into the int variable remainingAmount
    remainingAmount = static_cast<int>(change * 100);
    
    //store the value of remainingAmount divided by 100 into int variable dollar
    dollar = remainingAmount / 100;
    //store the value of the remainder of remainingAmount divide by 100 into int variable remainingAmount
    remainingAmount %= 100;
    
    //store the value of remainingAmount divided by 25 into int variable quarter
    quarter = remainingAmount / 25;
    //store the value of the remainder of remainingAmount divide by 25 into int variable remainingAmount
    remainingAmount %= 25;
    
    //store the value of remainingAmount divided by 10 into int variable dime
    dime = remainingAmount / 10;
    //store the value of the remainder of remainingAmount divide by 10 into int variable remainingAmount
    remainingAmount %= 10;
    
    //store the value of remainingAmount divided by 5 into int variable nickel
    nickel = remainingAmount / 5;
    //store the value of the remainder of remainingAmount divide by 5 into int variable remainingAmount
    remainingAmount %= 5;
    
    //store the value of remainingAmount into int variable penny
    penny = remainingAmount;

    //prints the following to inform user the change in number amounts of dollar, quarter, dime, nickel, penny
    std::cout << "\n\nDollars: " << dollar << '\n';
    std::cout << "Quarters: " << quarter << '\n';
    std::cout << "Dime: " << dime << '\n';
    std::cout << "Nickels: " << nickel << '\n';
    std::cout << "Pennies: " << penny << '\n';
}