
//Prompt 1
/*
#include <iostream>
#include <cmath>
#include <iomanip>
double semiperimeter(double side1, double side2, double side3);
double area(double diameter);
double area(double width, double length);
double area(double height, double b1, double b2);
double area(double side1, double side2, double side3, double);

int main(){
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "area(4) returns: " << area(4) << "\n";
    std::cout << "area(4, 6) returns: " << area(4, 6) << "\n";
    std::cout << "area(4, 6, 8) returns: " << area(4, 6, 8) << "\n";
    std::cout << "area(4, 6, 8, semiperimeter(4, 6, 8)) returns: " << area(4, 6, 8, semiperimeter(4, 6, 8)) << "\n";
    return 0;
}
double semiperimeter(double side1, double side2, double side3){
    double semiperimeter = 0;
    semiperimeter = (side1 + side2 + side3)/2;
    return semiperimeter;
}
double area(double diameter){
    double area = 0;
    area = 3.14 * (diameter / 2) * (diameter / 2);
    return area;
}
double area(double width, double length){
    double area = 0;
    area = width * length;
    return area;
}
double area(double height, double b1, double b2){
    double area = 0;
    area = height * (b1 + b2) / 2;
    return area;
}
double area(double side1, double side2, double side3, double semiperimeter){
    double area = 0;
    area = sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
    return area;
}
*/

//Prompt 2
/*
#include <iostream>
void sort(int&, int&, int&);
int main(){
    int x, y, z;
    std::cout << "Enter 3 integer: ";
    std::cin >> x >> y >> z;
    sort(x, y, z);
    return 0;
}
void sort(int& firstPlace, int& secondPlace, int& thirdPlace){
    int o = 0;
    int p = 0;
    int q = 0;
    if(firstPlace > secondPlace && firstPlace > thirdPlace && secondPlace > thirdPlace){
        o = firstPlace;
        firstPlace = thirdPlace;
        thirdPlace = o;
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else if(firstPlace > secondPlace && firstPlace > thirdPlace && thirdPlace > secondPlace){
        o = firstPlace;
        q = secondPlace;
        p = thirdPlace;
        firstPlace = q;
        secondPlace = p;
        thirdPlace = o;
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else if(secondPlace > firstPlace && secondPlace > thirdPlace && thirdPlace > firstPlace){
        o = firstPlace;
        q = secondPlace;
        p = thirdPlace;
        firstPlace = o;
        secondPlace = p;
        thirdPlace = q;
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else if(secondPlace > firstPlace && secondPlace > thirdPlace && firstPlace > thirdPlace){
        o = firstPlace;
        q = secondPlace;
        p = thirdPlace;
        firstPlace = p;
        secondPlace = o;
        thirdPlace = q;
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else if(thirdPlace > firstPlace && thirdPlace > secondPlace && firstPlace > secondPlace){
        o = firstPlace;
        q = secondPlace;
        p = thirdPlace;
        firstPlace = q;
        secondPlace = o;
        thirdPlace = p;
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else if(thirdPlace > firstPlace && thirdPlace > secondPlace && secondPlace > firstPlace){
        std::cout << firstPlace << " " << secondPlace << " " << thirdPlace;
    }else{
        std::cout << "Please do not enter the same numbers.";
    }
}
*/

//Prompt 3
/*
#include <iostream>
int timeCalculator(int, int);
int main(){
    int startTime = 0;
    int endTime = 0;
    std::cout << "Welcome to time machine\nPlease enter your start time and end time(within 24 hours of the start time) \nin millitary notation(2301 for 11:01pm) with a space between them: ";
    std::cin >> startTime >> endTime;
    int timeDifference = timeCalculator(startTime, endTime);
    std::cout << "The minutes difference between these times are: " << timeDifference << " (minutes)";
    return 0;
}
int timeCalculator(int start, int end){
    int difference = 0;
    int startHour = (start / 100);
    int startMinute = (start % 100);
    int endHour = (end / 100);
    int endMinute = (end % 100);
    int hourDifference = 0;
    int minuteDifference = 0;

    if(end > start){
        if(startMinute > endMinute){
            hourDifference = endHour - startHour - 1;
            minuteDifference = (60 + endMinute) - startMinute;
        }else if (startMinute <= endMinute){
            hourDifference = endHour - startHour;
            minuteDifference = endMinute - startMinute;
        }
    }else if(start > end){
        if(startMinute > 0){
            hourDifference = endHour + (24 - startHour - 1);
            minuteDifference = (60 - startMinute) + endMinute;
        }
        if(startMinute == 0){
            hourDifference = endHour + (24 - startHour);
            minuteDifference = endMinute;
        }
    }
    difference = (hourDifference * 60 + minuteDifference);
    return difference;
}
*/

//Prompt 4
/*
#include <iostream>
#include <cstdlib>
void gamePlay(int&, int&);
int main(){
    int numberOfEvents;
    int teamOneScore = 0;
    int teamTwoScore = 0;
    srand(time(NULL));
    numberOfEvents = (rand() % 15) + 1;
    for(int i = 0; i < numberOfEvents; i++){
        gamePlay(teamOneScore, teamTwoScore);
    }
    std::cout << "\nTeam one score: " << teamOneScore << "\nTeam two score: " << teamTwoScore << "\n----Game has ended----";
    return 0;
}

void gamePlay(int& team1Score, int& team2Score){
        int randOneToSix = (rand() % 6) + 1;
        int penalty = (rand() % 4) + 1;
        switch(randOneToSix){
            case 1:
                std::cout << "First team has scored a goal!\n";
                team1Score++;
            break;
            case 2:
                std::cout << "Second team has scored a goal!\n";
                team2Score++;
            break;
            case 3:
                std::cout << "First team has committed an offside!\n";
            break;
            case 4:
                std::cout << "Second team has committed an offside!\n";
            break;
            case 5:
                std::cout << "First team got a penalty: ";
                switch(penalty){
                    case 1:
                        std::cout << "they scores from the penalty\n";
                    break;
                    case 2:
                        std::cout << "they miss the penalty\n";
                    break;
                    case 3:
                        std::cout << "they get a yellow card\n";
                    break;
                    case 4:
                        std::cout << "they get a red card\n";
                    break;
                }
            break;
            case 6:
                std::cout << "Second team got a penalty: ";
                switch(penalty){
                    case 1:
                        std::cout << "they scores from the penalty\n";
                    break;
                    case 2:
                        std::cout << "they miss the penalty\n";
                    break;
                    case 3:
                        std::cout << "they get a yellow card\n";
                    break;
                    case 4:
                        std::cout << "they get a red card\n";
                    break;
                }
            break;
        }   
}
*/

//Prompt 5
/*
#include <iostream>
#include <iomanip>
void discountCalculator(double&, double, bool);
bool percentageOrFixedAmount(double);
int main(){
    double price;
    double discount;
    std::cout << "Please Enter the original price of the item($): ";
    std::cin >> price;
    std::cout << "Pleas Enter the discount(in fixed amount($ >= 1) or in percentage(0.7 for 70%)): ";
    std::cin >> discount;
    discountCalculator(price, discount, percentageOrFixedAmount(discount));
    std::cout << std::fixed << std::setprecision(2) << "The price is: " << price << "$ after the discount.";
    return 0;
}
bool percentageOrFixedAmount(double a){
    if(a >= 1){
        return true;
    }else if(a < 1){
        return false;
    }
    return true;
}
void discountCalculator(double& price1, double discount1, bool x){
    double originalPrice = price1;
    double discount = 0;
    if(x){
        price1 -= discount1;
        discount = discount1;
    }else{
        price1 = price1 * discount1;
        discount = (originalPrice - price1);
    }
    std::cout << std::fixed << std::setprecision(2) << "The discount applied to the item is: " << discount <<  "$\n";
}
*/

//Prompt 6
/*
#include <iostream>
#include <cstdlib>
void luckyBoyGenerator(int numberOfLuckyBoy, int&, int&, int&, int&);
int main(){
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    srand(time(NULL));
    int random = (rand() % 4) + 1;
    for(int i = 0; i < random; i++){
        luckyBoyGenerator(i, first, second, third, fourth);
    }
    switch(random){
        case 1:
            std::cout << "The number of the only winner is: " << first;
        break;
        case 2:
            std::cout << "The numbers of the two winners are: " << first << ", " << second;
        break;
        case 3:
            std::cout << "The numbers of the three winners are: " << first << ", " << second << ", " << third;
        break;
        case 4:
            std::cout << "The numbers of the four winners are: " << first << ", " << second << ", " << third << ", " << fourth;
        break;
    }
    return 0;
}
void luckyBoyGenerator(int numberOfLuckyBoy, int& a, int& b, int& c, int& d){
    switch(numberOfLuckyBoy){
            case 0:
            a = (rand() % 25) + 1;
            break;
            case 1:
            do{
            b = (rand() % 25) + 1;
            }while(b == a);
            break;
            case 2:
            do{
            c = (rand() % 25) + 1;
            }while(c == a || c == b);
            break;
            case 3:
            do{
            d = (rand() % 25) + 1;
            }while(d == a || c == d || d == b);
            break;
        }
}
*/

//Prompt 7
/*
#include <iostream>
bool convertToLowestTerms(int& num, int& deno);
int main(){
    int numerator;
    int denominator;
    std::cout << "Please enter the fraction you want to convert to the lowest term(numerator denominator): ";
    std::cin >> numerator >> denominator;
    convertToLowestTerms(numerator, denominator);
    std::cout << "The two numbers after conversion are: " << numerator << " & " << denominator;
    return 0;
}
bool convertToLowestTerms(int& num, int& deno){
    int commonTerm;
    if(deno == 0){
        return false;
    }
    if(num >= deno){
        for(int i = 0; i < num; i++){
            if(num%i == 0 && deno%i == 0){
                commonTerm = i;
            }
        }
    }else if(num < deno){
        for(int i = 0; i < deno; i++){
            if(num%i == 0 && deno%i == 0){
                commonTerm = i;
            }
        }
    }
    num /= commonTerm;
    deno /= commonTerm;
    std::cout << "The Greatest common divisor is: " << commonTerm << '\n';
    return true;
}
*/

//Prompt 8
/*
#include <iostream>
#include <cmath>
double windChillIndexCalculator(double v, double t);
int main(){
    double windSpeed;
    double temperature;
    double windChillIndex;
    std::cout << "Please enter the wind speed and temperature with a space between: ";
    std::cin >> windSpeed >> temperature;
    windChillIndex = windChillIndexCalculator(windSpeed, temperature);
    std::cout << "windchill index is : " << windChillIndex;
    return 0;
}
double windChillIndexCalculator(double v, double t){
    double w;
    w = 13.12 + (0.6215 * t) - (11.37 * pow(v, 0.16)) + (0.3965 * t * pow(v, 0.16));
    return w;
}
*/

//Prompt 9
/*
#include <iostream>
#include <cstdlib>

int choiceByHost(int money, int user);
int prizeDoor();
void checkDoor(int check, int prizz);
int main(){
    int player;
    int playerNewChoice;
    int prize;
    int host;
    char userDecision;
    srand(time(NULL));
    prize = prizeDoor();
    std::cout << "Welcome to random door game, behind one of the three doors there are 1-Million in cash, Please pick (1-3): ";
    std::cin >> player;
    host = choiceByHost(prize, player);
    std::cout << "\nBefore you open it, I will open door #" << host << " to help you. ";
    checkDoor(host, prize);
    std::cout << "\nNow, do you want to switch your choice to another unopened door? if you do, please enter 'y', 'n' for stick with your current chocie: ";
    std::cin >> userDecision;
    if(userDecision == 'y'){
        do{
            playerNewChoice = (rand()%3)+1;
        }while(playerNewChoice == player || playerNewChoice == host);
        std::cout << "\n-------Its time to open that mysterious door-------";
        checkDoor(playerNewChoice, prize);
    }else{
        std::cout << "\n-------Its time to open that mysterious door-------";
        checkDoor(player, prize);
    }
    std::cout << "Thank you for playing!";
    return 0;
}
int prizeDoor(){
    int y;
    y = (rand()%3) + 1;
    return y;
}
int choiceByHost(int money, int user){
    int y;
    do{
    y = (rand()%3) + 1;
    }while(y == money || y == user);
    return y;
}
void checkDoor(int check, int prizz){
    if(check == prizz){
        std::cout << "\nAfter the door is opened, a shinny million dollars shown\n";
    }else{
        std::cout << "\nAfter the door is opened, a shinny dishwasher detergent shown\n";
    }
}
*/

