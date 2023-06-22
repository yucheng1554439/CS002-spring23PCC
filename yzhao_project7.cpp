/**
 * @file yzhao_project7.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
//declaration of functions
double annuallyNet(double& grossIncome);
double taxOfState(double grossIncome, std::string stateName);
double federalIncomeTax(double& incomes, double gross);
double socialSecurityTax(double& incomes, double gross);
double medicareTax(double& incomes, double gross);
double stateTax(double& incomes, double gross);
double pensionPlan(double& incomes, double gross);
void insurance(double& incomes, double a, double b, double c);
void fourOOneK(double netincome, double pension);
void rothIra(double net);


int main(){
    //declaration of variables
    int userChoice = 0;
    double grossIncome;
    double income = 0;
    double pensionCost = 0;
    //ask the user for an input
    std::cout << "Please enter your annual gross income: ";
    //store the user input in income
    std::cin >> income;
    grossIncome = income;
    srand(time(NULL));
    //calling the function annuallyNet and stores the value returned by it into pennsionCost
    pensionCost = annuallyNet(income);

    //run the code within do{} one time, the code will be looping again if the condition meets.
    do{
        //ask the user for an input
        std::cout << "Would you like any of the following?\n";
        std::cout << "\n----- Press '1' for 401K -----\n";
        std::cout << "----- Press '2' for ROTH IRA -----\n";
        std::cout << "----- Press '3' for both -----\n";
        std::cout << "----- Press '4' for neither(quit) -----\n";
        double investPercent = (pensionCost/(pensionCost+income));
        //store user input into userChoice
        std::cin >> userChoice;
        
        //if condition meets, run the following
        if(userChoice == 1){
            //if the user invested greater than 1 percent into their pension plan
            if(investPercent > 0.01){
                //call the function
                fourOOneK(income, pensionCost);
            }else{
                std::cout << "\nYou need to put more than 1% of your netpay to pension before investing in 401k\n";
            }
        //if condition meets, run the following
        }else if(userChoice == 2){
            rothIra(income);
        //if condition meets, run the following
        }else if(userChoice == 3){
            //if condition meets, run the following
            if((investPercent) > 0.01){
                fourOOneK(income, pensionCost);
            }else{
                std::cout << "\nYou need to put more than 1% of your netpay to pension before investing in 401k\n";
            }
            rothIra(income);
        //if condition meets, run the following
        }else if(userChoice == 4){
            break;
        }else{
            //prints the following
            std::cout << "Please enter a valid input...";
        }
    }while(userChoice != 4 && userChoice != 1 && userChoice != 2 && userChoice != 3);
    //prints out the following
    std::cout << "\nThank you for using!";
    return 0;
}

//function that return a double variable back to the function that called
double annuallyNet(double& income){
    //declare and initialize variables
    double federalTax = 0;
    double socialTax = 0;
    double mediTax = 0;
    double stateTaxes = 0;
    double pensionPlanCost = 0;
    int insuranceChoice;
    double healthInsurance = 0;
    double dentalInsurance = 0;
    double visionInsurance = 0;
    double annualHealthInsurance = 0;
    double annualDentalInsurance = 0;
    double annualVisionInsurance = 0;
    char userChoice;
    //initialize different variables with different value or the value returned by different functions
    double grossIncome = income;
    stateTaxes = stateTax(income, grossIncome);
    federalTax = federalIncomeTax(income, grossIncome);
    socialTax = socialSecurityTax(income, grossIncome);
    mediTax = medicareTax(income, grossIncome);
    
    
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
        //Based on the value of insuranceChoice, different block of codes will run
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
    annualHealthInsurance = healthInsurance * 26;
    annualDentalInsurance = dentalInsurance * 26;
    annualVisionInsurance = visionInsurance * 26;
    //call the functions
    insurance(income, annualHealthInsurance, annualDentalInsurance, annualVisionInsurance);
    pensionPlanCost = pensionPlan(income, grossIncome);
    
    //prints the following with fixed decimals place
    std::cout << std::fixed << std::setprecision(2) << "The Gross Income that you have input is: " << grossIncome << "$";
    std::cout << "\n---Based on your choice, The deductions are the following---\n";
    std::cout << "Federal Income Tax: " << federalTax << "$";
    std::cout << "\nSocial Security Tax: " << socialTax << "$";
    std::cout << "\nMedicare/Medicaid Tax: " << mediTax << "$";
    std::cout << "\nState Tax: " << stateTaxes << "$";
    std::cout << "\nPension Plan: " << pensionPlanCost << "$";
    std::cout << "\nHealth Insurance: " << annualHealthInsurance << "$";
    std::cout << "\nDental Insurance: " << annualDentalInsurance << "$";
    std::cout << "\nVision Insurance: " << annualVisionInsurance << "$";
    std::cout << "\nYour Net Annual Income after the deductions is: " << income << "$\n";
    //return the value of netIncome back
    return pensionPlanCost;
}
//function that return a double variable back to the function that called
double federalIncomeTax(double& incomes, double gross){
    //initialize the variables with different values
    double tax = (0.22) * gross;
    //change the variable that is passed by the function that called this function
    incomes -= tax;
    //return the value of tax
    return tax;
}
//function that return a double variable back to the function that called
double socialSecurityTax(double& incomes, double gross){
    //initialize the variables with different values
    double tax = (0.062) * gross;
    //change the variable that is passed by the function that called this function
    incomes -= tax;
    //return the value of tax
    return tax;
}
//function that return a double variable back to the function that called
double medicareTax(double& incomes, double gross){
    //initialize the variables with different values
    double tax = (0.0145) * gross;
    //change the variable that is passed by the function that called this function
    incomes -= tax;
    //return the value of tax
    return tax;
}
//function that return a double variable back to the function that called
double stateTax(double& incomes, double gross){
    //declare variables
    std::string state;
    double tax = 0;
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

    //if condition meets, run the following
    if(state == "CA"){
        //if condition meets, run the following
        if(gross <= 8544){
            tax = (0.01) * gross;
        //if condition meets, run the following
        }else if(gross >= 8545 && gross <= 20255){
            tax = (0.02) * gross;
        //if condition meets, run the following
        }else if(gross >= 20256 && gross <= 31969){
            tax = (0.04) * gross;
        //if condition meets, run the following
        }else if(gross >= 31970 && gross <= 44377){
            tax = (0.06) * gross;
        }else if(gross >= 44378 && gross <= 56085){
            tax = (0.08) * gross;
        }else if(gross >= 56086 && gross <= 286492){
            tax = (0.093) * gross;
        }else if(gross >= 286493 && gross <= 343788){
            tax = (0.103) * gross;
        }else if(gross >= 343789 && gross <= 572980){
            tax = (0.113) * gross;
        }else if(gross >= 572981 && gross <= 999999){
            tax = (0.123) * gross;
        }else if(gross >= 1000000){
            tax = (0.133) * gross;
        }
    //if condition meets, run the following
    }else if(state == "AZ"){
        //if condition meets, run the following
        if(gross <= 17900){
            tax = (0.004) * gross;
        //if condition meets, run the following
        }else if(gross >= 17901 && gross <= 35299){
            tax = (0.01) * gross;
        //if condition meets, run the following
        }else if(gross >= 35300 && gross <= 54999){
            tax = (0.013) * gross;
        }else if(gross >= 55000 && gross <= 96399){
            tax = (0.018) * gross;
        }else if(gross >= 96400 && gross <= 189899){
            tax = (0.022) * gross;
        }else if(gross >= 189900 && gross <= 424299){
            tax = (0.027) * gross;
        }else if(gross >= 424300){
            tax = (0.031) * gross;
        }
    }
    //change the value of the variable that has passed by the function that called this function
    incomes -= tax;
    //return the value of tax
    return tax;
}
//function that return a double variable back to the function that called
double pensionPlan(double& incomes, double gross){
    //declaration of variables
    int pensionPercent;
    double pensionCost;
    //ask the user for an input
    std::cout << "How many percentage of your net pay you want for your pension plan(0 - 15%): ";
    //store the user input into pensionPercent
    std::cin >> pensionPercent;
    //stores the value into pensionCost
    pensionCost = ((0.01) * pensionPercent ) * incomes;
    //change the value of the variable that has passed by the function that called this function
    incomes -= pensionCost;
    //return the value of pensionCost
    return pensionCost;
}
//function that does not return a value
void insurance(double& incomes, double a, double b, double c){
    //change the value of the variable that has passed by the function that called this function
    incomes = incomes - a - b - c;
}
//function that does not return a value
void fourOOneK(double netincome, double pension){
    //declaration and initialization of different variables
    double investAmount = 0;
    double A = 0;
    double p = pension;
    double r = 0.01 * ((rand()%4)+5);
    double n = 0;
    double t = 0;
    double month = 0;
    //ask the user for an input and stores it into month
    std::cout << "Please Enter the amount of time you want to invest in 401K(in month): ";
    std::cin >> month;
    t = month/12;
    //initialize n
    n = t * 26;
    //if condition meets, run the following
    if(t < 24){
        A = p * pow((1 + r/n), n * t);
    //if condition meets, run the following
    }else if(24 <= t && t <= 48){
        A = (p * pow((1 + r/n), n * t)) * 1.5;
    //if condition meets, run the following
    }else if(t > 48){
        A = (p * pow((1 + r/n), n * t)) * 2;
    }
    //prints out the following
    std::cout << std::fixed << std::setprecision(2) << "Based on your input, You will get " << A << " from investing in 401K for " << t << " years.";
}
//function that does not return a value
void rothIra(double net){
    //declaration and initialization of different variables
    double A = 0;
    double p = 0;
    double r = 0.01 * ((rand()%4)+7);
    double n = 0;
    double t = 0;
    double month = 0;
    //run the code within do{} one time, the code will be looping again if the condition meets.
    do{
    //ask the user for an input and stores it into p
    std::cout << "\nPlease enter the amount of money you would like to invest in for ROTH IRA(<=6000$ and has to be less than your net pay: $" << net <<"): ";
    std::cin >> p;
    //if condition meets, run the following
    if(p > 6000||p > net){
        std::cout << "PLEASE FOLLOW INSTRUCTION!\n";
    }
    }while(p > 6000||p > net);
    //ask the user for an input and stores it into month
    std::cout << "Please enter the amount of time you would like to invest in(in month): ";
    std::cin >> month;
    //initialize the variables
    t = month/12;
    n = month;
    A = p * pow((1 + r/n), n * t);
    //prints out the following
    std::cout << std::fixed << std::setprecision(2) << "Based on your input, You will get " << A << " from investing in ROTH IRA for " << t << " years, with initial investment: $" << p;
}
