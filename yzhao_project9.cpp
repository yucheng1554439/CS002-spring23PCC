/**
 * @file yzhao_project9.cpp
 * @author Yucheng Zhao
 * @brief Sp23 - CS 002 - CRN 36420
 * @version 0.1
 * @date 2023-04-16
 * 
 * @copyright Copyright (c) 2023
 * 
*/

#include <iostream>
#include <iomanip>

double calculate(double scores[], double difficulty);
int main(){
    double difficult = 0;
    double score[7];
    double overallScore;
    std::cout << "Please enter the scores from 7 judges(0 - 10): ";
    for(int i = 0; i < 7; i++){
        int num = i+1;
        do{
        std::cout << "\nScore from Judge " << num << " :";
        std::cin >> score[i];
        if(score[i] > 10 || score[i] < 0){
            std::cout << "Please enter 0 - 10.\n";
        }
        }while(score[i] > 10 || score[i] < 0);
    }
    do{
        std::cout << "What is the difficulty of the dive(1.2 - 3.8): ";
        std::cin >> difficult;
        if(difficult > 3.8 || difficult < 1.2){
            std::cout << "Please enter 1.2 - 3.8.\n";
        }
    }while(difficult > 3.8 || difficult < 1.2);

    overallScore = calculate(score, difficult);
    std::cout << std::fixed << std::setprecision(2) << "The overall score for this dive is: " << overallScore;
    return 0;
}
double calculate(double scores[], double difficulty){
    double sum = 0;
    double total = 0;
    for(int i = 0; i < 7; i++){
        for(int j = i + 1; j < 7; j++){
            if(scores[i] > scores[j]){
            double temp = scores[i];
            scores[i] = scores[j];
            scores[j] = temp;
            }
        }
    }
    for(int z = 1; z < 6; z++){
        sum += scores[z];
    }
    sum *= difficulty;
    total = sum * 0.6;
    return total;
}