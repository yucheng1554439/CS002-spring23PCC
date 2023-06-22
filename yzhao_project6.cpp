/**
 * @file yzhao_project6.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-03-11
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>
//declaration of function that does not return
void menu();
//declaration of function that returns
double mpgCalculator(int liter, int miles);
//declaration of function that does not return
void compareMileage(double firstCarMpg, double secondCarMpg);

//1 liter = 0.264172 gallons.
const double literPerGallon = 0.264172;
//main function
int main(){
    //call the function menu
    menu();
    return 0;
}
//menu means the fundamental format of this program, Enter.... etc.
void menu(){
    //declaration and initialization of variables
    int liter1 = 0;
    int miles1 = 0;
    int liter2 = 0;
    int miles2 = 0;
    double mpg1 = 0;
    double mpg2 = 0;
    char yesOrNo;
    //ask the user for the input for different informations of each car
    std::cout << "\nEnter the information for Car 1 \nLiters: ";
    std::cin >> liter1;
    std::cout << "Miles: ";
    std::cin >> miles1;
    std::cout << "\nEnter the information for Car 2 \nLiters: ";
    std::cin >> liter2;
    std::cout << "Miles: ";
    std::cin >> miles2;
    //store the value that returned by mpgCalculator() functions which is the mpg of each car
    mpg1 = mpgCalculator(liter1, miles1);
    mpg2 = mpgCalculator(liter2, miles2);
    //pass the value of mpg1, mpg2 to compareMileage() function to compare the mpg of two cars
    compareMileage(mpg1, mpg2);
    //ask the user if they want to repeat the calculation
    std::cout << "\nEnter 'y' if you want to repeat this calculation('n' to exit): ";
    std::cin >> yesOrNo;
    if(yesOrNo == 'y'){
        //call the function of menu if the user wants to repeat the calculation
        menu();
    }else{
        std::cout << "Thank you for using!";
    }
}
//this funcntion calculates the mpg of each car and return them back.
double mpgCalculator(int liter, int miles){
    //declaration and initialization of double variables
    double milesPerGallon = 0;
    double gallon = 0;
    //calculations
    gallon = liter * literPerGallon;
    milesPerGallon = miles / gallon;
    //return the value of milesPerGallon back
    return milesPerGallon;
}
//this functions compares the mpg of two cars and output informations, does not return anything
void compareMileage(double firstCarMpg, double secondCarMpg){
    //prints the following information
    std::cout << "\nMPG 1: " << firstCarMpg;
    std::cout << "\nMPG 2: " << secondCarMpg;
    //compare the mpg of two cars and output the corresponded information
    if(firstCarMpg > secondCarMpg){
        std::cout << "\nCar 1 has better mileage";
    }else if(firstCarMpg < secondCarMpg){
        std::cout << "\nCar 2 has better mileage";
    }else{
        std::cout << "\nThey both have the same mileage";
    }
}