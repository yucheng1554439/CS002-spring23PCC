/**
 * @file yzhao_project2.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * 
*/

//****  Reference for the Extra Credit  **** 
//Youtube Video link -  https://youtu.be/-TkoO8Z07hI

#include <iostream>
#include <iomanip>


int main(){
    //declare an int type variable named workHour to store the weekly working hour which is the input from the user
    int workHour;
    //declare a double variable named grossWage to store the gross amount of money before deductions
    double grossWage;
    //declare a double variable named socialSecurityTax
    double socialSecurityTax;
    //declare a double variable named federalIncomeTax
    double federalIncomeTax;
    //declare a double variable named stateTax
    double stateTax;
    //declare and initialize a double variable named unionDues with initial value of 10.00
    double unionDues = 10.00;
    //declare a double variable named healthInsurance
    double healthInsurance;
    //declare a double variable named netIncome1 to store the net income before deduction of the investment
    double netIncome1;
    //declare a double variable named netIncome2 to store the net income after deduction of the investment
    double netIncome2;
    //declare a double variable named invest to store the input from the user 
    double invest;
    //declare a double variable named investLimit to store the maximum amount of investment
    double investLimit;
    //declare a double vairable named estimateAnnualPay to store the estimate annual pay
    double estimateAnnualPay;
    //declare a string variable to store the input from the user that either they want cover the insurance of themselves or and others
    std::string answerFromUser;
    //declare a string variable to store the input from the user that if they want to invest in their 401k
    std::string yesOrNo;
    //declare a string variable to store if it is time to get out of them loop of do while
    std::string test;


    //print "Please enter your weekly worked hours: " to ask the user for an input of their weekly worked hours
    std::cout << "Please enter your weekly worked hours: ";
    //store the input from the user into the double variable workHour
    std::cin >> workHour;

    //if workHour <= 40 is true run the code within if{}, else will run the code after if{}
    if(workHour <= 40){
        //store the value of workHour * 17.87 into grossWage
        grossWage = workHour * 17.87;  
    }else{
        //store the value of 40 * 17.87 + (workHour-40) * 26.81 into grossWage
        grossWage = 40 * 17.87 + (workHour-40) * 26.81;
    }

    //print the following in quotes to ask the user for an input 
    std::cout << "Do you want health insurance only for yourself or yourself and other people? " << '\n';
    std::cout << "Please Enter 'self' for only yourself, 'other' for yourself and other people: ";
    //store the input from the user into answerFromUser
    std::cin >> answerFromUser;

    //if answerFromUser == "self" is true run the code within if{}, else will run the code after if{}
    if(answerFromUser == "self"){
        //initialize the double variable healthInsurance with 0.00
        healthInsurance = 0.00;
    }else{
        //initialize the double variable healthInsurance with 251.63
        healthInsurance = 251.63;
    }

    //stores the value of 0.062 * grossWage into socialSecurityTax
    socialSecurityTax = 0.062 * grossWage;
    federalIncomeTax = 0.22 * grossWage;
    stateTax = 0.093 * grossWage;
    /*
    stores the value of 
    grossWage - socialSecurityTax - federalIncomeTax - stateTax - healthInsurance - unionDues
    into netIncome1, basically calculate the net income after the deduction of everything but investment
    */
    netIncome1 = grossWage - socialSecurityTax - federalIncomeTax - stateTax - healthInsurance - unionDues;
    //stores the value of netIncome1 * 0.15 in to investLimit which is the limit that the user can invest
    investLimit = netIncome1 * 0.15;
    
    //print the following in quotes to ask the user for an input of if they want to invest in 401k
    std::cout << "Do you want to start to invest into your 401k? \nPlease Enter 'yes' or 'no': ";
    //stores the user input in string variable yesOrNo
    std::cin >> yesOrNo;

    //if yesOrNo == "no" is true run the code within if{}, else will run the code after if{}
    if(yesOrNo == "no"){
        //initialize double variable invest with 0.00
        invest = 0.00;
    }else{
    //run the code in do{} one time, examine the argument in while() is true or not
    //if the argument in () of while is true, run the code in do{} until the argument is not true
       do{
            //print the following in quote to ask the user for an input of the amount of investment that the user want
            std::cout << "Please enter the amount or the percentage you want to invest in\n";
            std::cout << "Example: '100' for flat amount of 100$ (mininum 1$), '0.15' for 15 percent of your net Income \n";
            std::cout << "(Maximum investment is 15 percent of your income): ";
            //store the user input in the double variable invest
            std::cin >> invest;
        
            //if invest < 1 is true run the code within if{}, else will run the code after if{}
            if(invest < 1){
                //if invest <= 0.15 is true run the code within if{}, else will run the code after if{}
                if(invest <= 0.15){
                    //store the value of invest * netIncome1 in invest
                    invest = invest * netIncome1;
                    //store "good" in test in order to break the loop
                    test = "good";
                }else{
                    //Warn the user to have an input lower than 15% of their net income
                    std::cout << "** Please enter the percentage lower than 15% **\n";
                    //store "bad" in test in order to continue the loop
                    test = "bad";
                }
            }else{
                //if invest < investLimit is true run the code within if{}, else will run the code after if{}
                if(invest < investLimit){
                    //store the value of invest in invest
                    invest = invest;
                    //store "good" in test in order to break the loop
                    test = "good";
                }else{
                    //Warn the user to have an input lower than 15% of their net income
                    std::cout << "** Please enter the amount lower than " << investLimit << "$ **\n";
                    //store "bad" in test in order to continue the loop
                    test = "bad";
                }
            }
        //while test == "bad", the code within {} of do{} will keep running over and over again
        }while(test == "bad"); 
    }

    //store the value of netIncome1 - invest in netIncome2 to calculate the net income after the investment
    netIncome2 = netIncome1 - invest;
    //store the value of netIncome2 * 52 in estimateAnnualPay to calculate the estimate annual pay by using weekly net income times 52 week
    estimateAnnualPay = netIncome2 * 52;

    //print the following information, (std::fixed << std::setprecision(2)) means to fix two decimals place of the double variables
    std::cout << "\nYour gross income is: " << std::fixed << std::setprecision(2) << grossWage << " Dollars\n";
    std::cout << "After deductions from the list below: \n";
    std::cout << "Social Security Tax -- 6.2% of your gross income: " << std::fixed << std::setprecision(2) << socialSecurityTax << " Dollars\n";
    std::cout << "Federal Income Tax -- 22% of your gross income: " << std::fixed << std::setprecision(2) << federalIncomeTax << " Dollars\n";
    std::cout << "State Tax -- 9.3% of your gross income: " << std::fixed << std::setprecision(2) << stateTax << " Dollars\n";
    std::cout << "Union Dues: " << unionDues << " Dollars\n";
    std::cout << "Based on the health insurance plan that you have selected, \nHealth Insurance fee: " << healthInsurance << " Dollars\n";
    std::cout << "Based on your choice on 401k investment, your have invested: " << invest << " Dollars\n";
    std::cout << "Your net Income (take-home pay) is: " << netIncome2 << " Dollars\n";
    std::cout << "Based on your choices your estimated annual net pay is: " << estimateAnnualPay << " Dollars\n\n";
    
    return 0;
}