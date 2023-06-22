/**
 * @file yzhao_project5.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
*/

//****  Reference for the Extra Credit  **** 
//Youtube Video link -  https://youtu.be/-TkoO8Z07hI

#include <iostream>
#include <iomanip>
//declaration of functions
void weekly(double netIncome);
void monthly(double netIncome);
double annually(double grossIncome);
double taxOfState(double grossIncome, std::string stateName);

int main(){
    //declaration of variables
    int income = 0;
    int userChoice = 0;
    double netIncome = 0;
    //ask the user for an input
    std::cout << "Please enter your annual gross income: ";
    //store the user input in income
    std::cin >> income;
    //store the value that returned by annually(income) into netIncome, pass the value of income to annually()
    netIncome = annually(income);
    //run the code within do{} one time, the code will be looping again if the condition meets.
    do{
        //ask the user for an input
        std::cout << "\n-----Press '1' to calculate weekly income-----\n";
        std::cout << "-----Press '2' to calculate monthly income-----\n";
        std::cout << "-----Press '3' to Quit-----\n";
        //store user input into userChoice
        std::cin >> userChoice;
        //if condition meets, run the following
        if(userChoice == 1){
            //call the function weekly(netIncome) and pass the value of netIncome
            weekly(netIncome);
        //if condition meets, run the following
        }else if(userChoice == 2){
            //call the function monthly(netIncome) and pass the value of netIncome
            monthly(netIncome);
        //if condition meets, run the following
        }else if(userChoice == 3){
            //prints the following
            std::cout << "Thank you for using!";
        }else{
            //prints the following
            std::cout << "Please enter a valid input...";
        }
    }while(userChoice != 3);
}
//functions that does not return a value, calculate the weekly income
void weekly(double netIncome){
    //store the value of netIncome / 52 into netIncome
    netIncome = (netIncome / 52);
    //prints the following with fixed decimals place
    std::cout << std::fixed << std::setprecision(2) << "Your Weekly Net Income is: " << netIncome << "$";
}
//functions that does not return a value, calculate the monthly income
void monthly(double netIncome){
    //store the value of netIncome / 12 into netIncome
    netIncome = (netIncome / 12);
    //prints the following with fixed decimals place
    std::cout << std::fixed << std::setprecision(2) << "Your Monthly Net Income is: " << netIncome << "$";
}
//function that return a double variable back to the function that called
double annually(double grossIncome){
    //declare and initialize variables
    double federalIncomeTax = 0;
    double socialSecurityTax = 0;
    double medicareTax = 0;
    double stateTax = 0;
    int pensionPercent = 0;
    double pensionPlan = 0;
    int insuranceChoice = 0;
    double healthInsurance = 0;
    double annualHealthInsurance = 0;
    double dentalInsurance = 0;
    double annualDentalInsurance = 0;
    double visionInsurance = 0;
    double annualVisionInsurance = 0;
    double netIncome;
    std::string state;
    char userChoice;
    //run the code within do{} one time, the code will be looping again if the condition meets.
    do{
    //ask the user for an input
    std::cout << "Please enter the state that you are from ('CA' for California, 'AZ' for Arizona): ";
    //store the user input to state
    std::cin >> state; 
    //if condition meets, run the following
    if(state != "CA" && state != "AZ"){
        //prints the following
        std::cout << "\nPlease Enter Either 'AZ' or 'CA'.\n";
    }
    }while(state != "CA" && state != "AZ");
    //ask the user for an input
    std::cout << "How many percentage you want for your pension plan(0 - 15)%: ";
    //store the user input into pensionPercent
    std::cin >> pensionPercent;
    //run the code within do{} one time, the code will be looping again if the condition meets.
    do{
        //declare variable
        char selfOrOther;
        //ask the user for an input
        std::cout << "Enter '1' for Health Insurance options";
        std::cout << "\nEnter '2' for Dental Insurance options";
        std::cout << "\nEnter '3' for Vision Insurance options";
        std::cout << "\nEnter '4' when you are finished: ";
        //store the user input in insuranceChoice
        std::cin >> insuranceChoice;
        //Based on the value of interactChoice, different block of codes will run
        switch(insuranceChoice){
            //if insuranceChoice equal to 1, run the following code
            case 1:
            std::cout << "To only cover yourself enter 's', To cover yourself and others enter 'o': ";
            std::cin >> selfOrOther;
            //if condition meets, run the following
            if(selfOrOther == 's'){
                healthInsurance = 0;
            }else{
                healthInsurance = 251.63;
            }
            break;
            //if insuranceChoice equal to 1, run the following code
            case 2:
            std::cout << "To only cover yourself enter 's', To cover yourself and others enter 'o': ";
            std::cin >> selfOrOther;
            //if condition meets, run the following
            if(selfOrOther == 's'){
                dentalInsurance = 17.58;
            }else{
                dentalInsurance = 70.88;
            }
            break;
            //if insuranceChoice equal to 1, run the following code
            case 3:
            std::cout << "To only cover yourself enter 's', To cover yourself and others enter 'o': ";
            std::cin >> selfOrOther;
            //if condition meets, run the following
            if(selfOrOther == 's'){
                visionInsurance = 0;
            }else{
                visionInsurance = 5.61;
            }
            break;
        }
    }while(insuranceChoice != 4);
    //stores the values after the calculation into each of the following variables
    federalIncomeTax = (0.22) * grossIncome;
    socialSecurityTax = (0.062) * grossIncome;
    medicareTax = (0.0145) * grossIncome;
    stateTax = taxOfState(grossIncome, state);
    pensionPlan = ((0.01) * pensionPercent ) * grossIncome;
    annualHealthInsurance = healthInsurance * 26;
    annualDentalInsurance = dentalInsurance * 26;
    annualVisionInsurance = visionInsurance * 26;
    netIncome = grossIncome - federalIncomeTax - socialSecurityTax - medicareTax - stateTax - pensionPlan - annualHealthInsurance - annualDentalInsurance - annualVisionInsurance;
    //prints the following with fixed decimals place
    std::cout << std::fixed << std::setprecision(2) << "The Gross Income that you have input is: " << grossIncome << "$";
    std::cout << "\n---Based on your choice, The deductions are the following---\n";
    std::cout << "Federal Income Tax: " << federalIncomeTax << "$";
    std::cout << "\nSocial Security Tax: " << socialSecurityTax << "$";
    std::cout << "\nMedicare/Medicaid Tax: " << medicareTax << "$";
    std::cout << "\nState Tax: " << stateTax << "$";
    std::cout << "\nPension Plan: " << pensionPlan << "$";
    std::cout << "\nHealth Insurance: " << annualHealthInsurance << "$";
    std::cout << "\nDental Insurance: " << annualDentalInsurance << "$";
    std::cout << "\nVision Insurance: " << annualVisionInsurance << "$";
    std::cout << "\nYour Net Annual Income after the deductions is: " << netIncome << "$";
    //return the value of netIncome back
    return netIncome;
}
//function that return a double variable back to the function that called
double taxOfState(double grossIncome, std::string stateName){
    //declare variable
    double tax;
    //if condition meets, run the following
    if(stateName == "CA"){
        //if condition meets, run the following
        if(grossIncome <= 8544){
            tax = (0.01) * grossIncome;
        //if condition meets, run the following
        }else if(grossIncome >= 8545 && grossIncome <= 20255){
            tax = (0.02) * grossIncome;
        //if condition meets, run the following
        }else if(grossIncome >= 20256 && grossIncome <= 31969){
            tax = (0.04) * grossIncome;
        //if condition meets, run the following
        }else if(grossIncome >= 31970 && grossIncome <= 44377){
            tax = (0.06) * grossIncome;
        }else if(grossIncome >= 44378 && grossIncome <= 56085){
            tax = (0.08) * grossIncome;
        }else if(grossIncome >= 56086 && grossIncome <= 286492){
            tax = (0.093) * grossIncome;
        }else if(grossIncome >= 286493 && grossIncome <= 343788){
            tax = (0.103) * grossIncome;
        }else if(grossIncome >= 343789 && grossIncome <= 572980){
            tax = (0.113) * grossIncome;
        }else if(grossIncome >= 572981 && grossIncome <= 999999){
            tax = (0.123) * grossIncome;
        }else if(grossIncome >= 1000000){
            tax = (0.133) * grossIncome;
        }
    //if condition meets, run the following
    }else if(stateName == "AZ"){
        //if condition meets, run the following
        if(grossIncome <= 17900){
            tax = (0.004) * grossIncome;
        //if condition meets, run the following
        }else if(grossIncome >= 17901 && grossIncome <= 35299){
            tax = (0.01) * grossIncome;
        //if condition meets, run the following
        }else if(grossIncome >= 35300 && grossIncome <= 54999){
            tax = (0.013) * grossIncome;
        }else if(grossIncome >= 55000 && grossIncome <= 96399){
            tax = (0.018) * grossIncome;
        }else if(grossIncome >= 96400 && grossIncome <= 189899){
            tax = (0.022) * grossIncome;
        }else if(grossIncome >= 189900 && grossIncome <= 424299){
            tax = (0.027) * grossIncome;
        }else if(grossIncome >= 424300){
            tax = (0.031) * grossIncome;
        }
    }
    //return the value of tax back
    return tax;
}