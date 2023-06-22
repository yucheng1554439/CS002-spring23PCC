/**
 * @file yzhao_project10.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-04-16
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>
void menu(char seat[][5]);
int main(){
    int userChoice;
    char seatChart[7][5] = {{'1', 'A', 'B', 'C', 'D'}, {'2', 'A', 'B', 'C', 'D'}, {'3', 'A', 'B', 'C', 'D'}, {'4', 'A', 'B', 'C', 'D'}, {'5', 'A', 'B', 'C', 'D'}, {'6', 'A', 'B', 'C', 'D'}, {'7', 'A', 'B', 'C', 'D'}}; 
    do{
        std::cout << "Press '1' ---- View Seat aviliable\nPress '2' ---- Quit: ";
        std::cin >> userChoice;
        if(userChoice == 2){
            return 0;
        }else if(userChoice == 1){
            menu(seatChart);
        }else{
            std::cout << "\nPlease enter 1 or 2.";
        }
    }while(userChoice != 2);
    return 0;
}
void menu(char seat[][5]){
    std::string seatUserWant;
    int row;
    int column;
    std::cout << "Seating chart: \n";
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            std::cout << seat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    do{
        std::cout << "Please select the seat you want(ex. 1A, 2C, etc): ";
        std::cin >> seatUserWant;
        row = int(seatUserWant[0]) - 49;
        switch(seatUserWant[1]){
            case 'A': column = 1;
            break;
            case 'B': column = 2;
            break;
            case 'C': column = 3;
            break;
            case 'D': column = 4;
            break;
        }
        if(row < 0 || row > 6 || column < 1 || column > 4){
            std::cout << "Please enter the valid seat number.\n";
        }
        if(seat[row][column] == 'X'){
            std::cout << "This seat is currently unaviliable, please pick another seat" << std::endl;
        }
    }while(row < 0 || row > 6 || column < 1 || column > 4 || seat[row][column] == 'X');
    seat[row][column] = 'X';
}





