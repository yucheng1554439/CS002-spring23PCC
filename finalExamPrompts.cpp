//Prompt 1
/*
#include <iostream>
#include <iomanip>
void averageRain(double []);
void actualRain(double []);
void output(double [], double []);
int main(){
    char userChoice;
    do{
    double average[12];
    double actual[12];
    averageRain(average);
    actualRain(actual);
    output(average, actual);
    std::cout << "\nDo you want to repeat('y' for yes, 'n' for no): ";
    std::cin >> userChoice;
    if(userChoice == 'n'){
        std::cout << "Thank you for using";
        return 0;
    }
    }while(userChoice != 'n');
    return 0;
}
void averageRain(double avrg[]){
    std::cout << "Enter the average rainfall for each month: ";
    for(int i = 0; i < 12; i++){
        switch(i){
        case 0:
        std::cout << "\nJanuary: ";
        std::cin >> avrg[0];
        break;
        case 1:
        std::cout << "Febuary: ";
        std::cin >> avrg[1];
        break;
        case 2:
        std::cout << "March: ";
        std::cin >> avrg[2];
        break;
        case 3:
        std::cout << "April: ";
        std::cin >> avrg[3];
        break;
        case 4:
        std::cout << "May: ";
        std::cin >> avrg[4];
        break;
        case 5:
        std::cout << "June: ";
        std::cin >> avrg[5];
        break;
        case 6:
        std::cout << "July: ";
        std::cin >> avrg[6];
        break;
        case 7:
        std::cout << "August: ";
        std::cin >> avrg[7];
        break;
        case 8:
        std::cout << "September: ";
        std::cin >> avrg[8];
        break;
        case 9:
        std::cout << "October: ";
        std::cin >> avrg[9];
        break;
        case 10:
        std::cout << "November: ";
        std::cin >> avrg[10];
        break;
        case 11:
        std::cout << "December: ";
        std::cin >> avrg[11];
        break;
        }
    }
}

void actualRain(double actl[]){
    int currentMonth;
    std::cout << "\nWhat is the current month?(month number): ";
    std::cin >> currentMonth;
    std::cout << "Enter the actual rainfall to the past 12 months: ";
    std::cout << std::endl;
    for(int i = currentMonth; i < (currentMonth + 12); i ++){
        if(i <= 12){
            switch(i){
                case 1:
                    std::cout << "January: ";
                    std::cin >> actl[0];
                break;
                case 2:
                    std::cout << "Febuary: ";
                    std::cin >> actl[1];
                break;
                case 3:
                    std::cout << "March: ";
                    std::cin >> actl[2];
                break;
                case 4:
                    std::cout << "April: ";
                    std::cin >> actl[3];
                break;
                case 5:
                    std::cout << "May: ";
                    std::cin >> actl[4];
                break;
                case 6:
                    std::cout << "June: ";
                    std::cin >> actl[5];
                break;
                case 7:
                    std::cout << "July: ";
                    std::cin >> actl[6];
                break;
                case 8:
                    std::cout << "August: ";
                    std::cin >> actl[7];
                break;
                case 9:
                    std::cout << "September: ";
                    std::cin >> actl[8];
                break;
                case 10:
                    std::cout << "October: ";
                    std::cin >> actl[9];
                break;
                case 11:
                    std::cout << "November: ";
                    std::cin >> actl[10];
                break;
                case 12:
                    std::cout << "December: ";
                    std::cin >> actl[11];
                break;
            }
        }else if(i > 12){
            switch(i){
                case 13:
                    std::cout << "January: ";
                    std::cin >> actl[0];
                break;
                case 14:
                    std::cout << "Febuary: ";
                    std::cin >> actl[1];
                break;
                case 15:
                    std::cout << "March: ";
                    std::cin >> actl[2];
                break;
                case 16:
                    std::cout << "April: ";
                    std::cin >> actl[3];
                break;
                case 17:
                    std::cout << "May: ";
                    std::cin >> actl[4];
                break;
                case 18:
                    std::cout << "June: ";
                    std::cin >> actl[5];
                break;
                case 19:
                    std::cout << "July: ";
                    std::cin >> actl[6];
                break;
                case 20:
                    std::cout << "August: ";
                    std::cin >> actl[7];
                break;
                case 21:
                    std::cout << "September: ";
                    std::cin >> actl[8];
                break;
                case 22:
                    std::cout << "October: ";
                    std::cin >> actl[9];
                break;
                case 23:
                    std::cout << "November: ";
                    std::cin >> actl[10];
                break;
                case 24:
                    std::cout << "December: ";
                    std::cin >> actl[11];
                break;
            }
        }

    }
}

void output(double avg[], double act[]){
    double diff[12];
    for(int i = 0; i < 12; i++){
        diff[i] = avg[i] - act[i];
    }
    std::cout << "Month        Average        Actual        Difference\n------       -------        -------        ----------\n";
    for(int j = 0; j < 12; j ++){
        switch(j){
            case 0:
            std::cout << std::fixed << std::setprecision(1) << "January        " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 1:
            std::cout << std::fixed << std::setprecision(1) << "\nFebuary        " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 2:
            std::cout << std::fixed << std::setprecision(1) << "\nMarch          " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 3:
            std::cout << std::fixed << std::setprecision(1) << "\nApril          " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 4:
            std::cout << std::fixed << std::setprecision(1) << "\nMay            " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 5:
            std::cout << std::fixed << std::setprecision(1) << "\nJune           " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 6:
            std::cout << std::fixed << std::setprecision(1) << "\nJuly           " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 7:
            std::cout << std::fixed << std::setprecision(1) << "\nAugust         " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 8:
            std::cout << std::fixed << std::setprecision(1) << "\nSeptember      " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 9:
            std::cout << std::fixed << std::setprecision(1) << "\nOctober        " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 10:
            std::cout << std::fixed << std::setprecision(1) << "\nNovember       " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
            case 11:
            std::cout << std::fixed << std::setprecision(1) << "\nDecember       " << avg[j] << "          " << act[j] << "            " << diff[j];
            break;
        }
    }
}
*/

//Prompt 2
/*
#include <iostream>
int main(){
    int amount;
    std::cout << "Amount of students' grades: ";
    std::cin >> amount;
    int grade[amount];
    int numOfGrade[6] = {0, 0, 0, 0, 0, 0};
    std::cout << "Enter the students grades: ";
    for(int i = 0; i < amount; i ++){
        int j = i+1;
        std::cout << "Grade of student " << j << ": ";
        std::cin >> grade[i];
        numOfGrade[grade[i]] += 1;
    }
    std::cout << "The list of grades you have just entered is: ";
    for(int z = 0; z < amount; z++){
        if(z == amount-1){
            std::cout << grade[z];
        }else{
            std::cout << grade[z] << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << numOfGrade[0] << " grade(s) of 0\n";
    std::cout << numOfGrade[1] << " grade(s) of 1\n";
    std::cout << numOfGrade[2] << " grade(s) of 2\n";
    std::cout << numOfGrade[3] << " grade(s) of 3\n";
    std::cout << numOfGrade[4] << " grade(s) of 4\n";
    std::cout << numOfGrade[5] << " grade(s) of 5\n";
    return 0;
}
*/

//Prompt 3
/*
#include <iostream>
std::string lookupName(std::string target, std::string name[], std::string phoneNumber[], int);
int main() {
std::string names[] = {"Michael Myers", "Ash Williams", "Jack Torrance", "Freddy Krueger", "Yucheng Zhao"};
std::string phoneNumbers[] = {"333-8000","333-2323","333-6150","339-7970", "626-558-3809"};
std::string targetName, targetPhone;
char c;
do{
    std::cout << "Enter a name to find the " << "corresponding phone number." << std::endl;
    std::getline(std::cin, targetName);
    targetPhone = lookupName(targetName, names, phoneNumbers, 5);
    if(targetPhone.length() > 0){
        std::cout << "The number is: " << targetPhone << std::endl;
    }else
    std::cout << "Name not found. " << std::endl;
    std::cout << "Look up another name? (y/n)" << std::endl;
    std::cin >> c;
    std::cin.ignore();
} while (c == 'y');
return 0;
}
std::string lookupName(std::string target, std::string name[], std::string phoneNumber[], int a){
    std::string number;
    for(int i = 0; i < a; i++){
        if(target == name[i]){
            number = phoneNumber[i];
        }
    }
    return number;
}
*/

//Prompt 4
/*
#include <iostream>
#include <vector>
#include <string>
std::string convert(std::string sentens, std::vector<int> spaces, int index);
int main(){
    std::vector<int> spaceIndex;
    std::string sentence;
    std::string newSentence;
    std::string word;
    int j = 0;
    int s = 0;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' '){
            spaceIndex.push_back(i);
            j++;
        }
    }
    if(spaceIndex.size() == 0){
        newSentence = convert(sentence, spaceIndex, 0);
    }else{
        while(s < (spaceIndex.size()+1)){
            word = convert(sentence, spaceIndex, (s+1));
            std::cout << "word::::: " << word << '\n';
            newSentence = newSentence + word + " ";
            s++;
        }
    }
    std::cout << "New sentence is: ";
    for(int i = 0; i < newSentence.length(); i++){
        std::cout << newSentence[i];
    }

    return 0;
}

std::string convert(std::string sentens, std::vector<int> spaces, int index){
    std::string word;
    char firstLetter;
    if(index == 0){
        if(tolower(sentens[0]) == 'a'||tolower(sentens[0]) == 'e'||tolower(sentens[0]) == 'i'||tolower(sentens[0]) == 'o'||tolower(sentens[0]) == 'u'){
            sentens = sentens + "way";
        }else{
            firstLetter = sentens[0];
            for(int i = 0; i < sentens.length(); i++){
                if(i == (sentens.length()-1)){
                    sentens[i] = firstLetter;
                }else{
                    sentens[i] = sentens[i+1];
                }
            }
            sentens = sentens + "ay";
        }
    return sentens;
    }else{
        if(index == 1){
            for(int j = 0; j < spaces[index-1]; j ++){
                word += sentens[j];
            }
            if(tolower(word[0]) == 'a'||tolower(word[0]) == 'e'||tolower(word[0]) == 'i'||tolower(word[0]) == 'o'||tolower(word[0]) == 'u'){
                word = word + "way";
            }else{
                firstLetter = word[0];
                for(int i = 0; i < word.length(); i++){
                    if(i == (word.length()-1)){
                        word[i] = firstLetter;
                    }else{
                        word[i] = word[i+1];
                    }
                }
                word = word + "ay";
            }
        }else if(index == (spaces.size()+1)){
            for(int z = spaces[index-2]+1; z < sentens.length(); z ++){
                word += sentens[z];
            }
            if(tolower(word[0]) == 'a'||tolower(word[0]) == 'e'||tolower(word[0]) == 'i'||tolower(word[0]) == 'o'||tolower(word[0]) == 'u'){
                word = word + "way";
            }else{
                firstLetter = word[0];
                for(int i = 0; i < word.length(); i++){
                    if(i == (word.length()-1)){
                        word[i] = firstLetter;
                    }else{
                        word[i] = word[i+1];
                    }
                }
                word = word + "ay";
            }
        }else{
            for(int z = spaces[index-2]+1; z < spaces[index-1]; z ++){
                word += sentens[z];
            }
            if(tolower(word[0]) == 'a'||tolower(word[0]) == 'e'||tolower(word[0]) == 'i'||tolower(word[0]) == 'o'||tolower(word[0]) == 'u'){
                word = word + "way";
            }else{
                firstLetter = word[0];
                for(int i = 0; i < word.length(); i++){
                    if(i == (word.length()-1)){
                        word[i] = firstLetter;
                    }else{
                        word[i] = word[i+1];
                    }
                }
                word = word + "ay";
            }
        }
        
    }
    return word;
}
*/

//Prompt 5
/*
#include <iostream>
int main(){
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    for(int i = 0; i < sentence.length(); i++){
        if(isupper(sentence[i])){
            sentence[i] = tolower(sentence[i]);
        }else if(islower(sentence[i])){
            sentence[i] = toupper(sentence[i]);
        }
    }
    for(int j = 0; j < sentence.length(); j++){
        std::cout << sentence[j];
    }
    return 0;
}
*/

//Prompt 6
/*
#include <iostream>
int main(){
    std::string first;
    std::string middle;
    std::string last;
    std::cout << "Enter your name in the following format: \nfirst name, then middle name or initial, and then last name: \n";
    std::cin >> first >> middle;
    std::getline(std::cin, last);

    if(int(last[0]) == 0){
        std::cout << middle << ", " << first << " ";
    }else{
        for(int i = 1; i < last.length(); i++){
            std::cout << last[i];
        }
        std::cout << ", " << first << " " << middle[0] << ".";
    }
    return 0;
}
*/

//Prompt 7
/*
#include <iostream>
#include <vector>
int main(){
    std::string sentence;
    int space;
    int wordCount = 1;
    std::vector<int> numbersOfRepeat;
    std::vector<char> letters;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    for(int i = 0; i < sentence.length(); i++){
        char temp = tolower(sentence[i]);
        int occurTime = 1;
        if((int)temp != 32 && (int)temp != 44 && (int)temp != 46 && temp != '0'){
            for(int j = (i+1); j < sentence.length(); j++){
                if(tolower(sentence[j]) == temp){
                    sentence[j] = '0';
                    occurTime ++;
                }
            }
            //if((int)temp != 32 && (int)temp != 44 && (int)temp != 46 && temp != '0'){
            letters.push_back(temp);
            //std::cout << "IiIIIIII: " << letters.at(0);
            numbersOfRepeat.push_back(occurTime);
            //}
        }else if((int)temp == 32){
            wordCount++;
        }
    }
    std::cout << wordCount << " words\n";
    for(int z = 0; z < letters.size(); z++){
        for(int k = 0; k < letters.size(); k++){
            char temper1 = letters[k];
            int temper2 = numbersOfRepeat[k];
            if(temper1 > (int)letters[k+1]){
                letters[k] = letters[k+1];
                letters[k+1] = (char)temper1;
                numbersOfRepeat[k] = numbersOfRepeat[k+1];
                numbersOfRepeat[k+1] = temper2;
            }
        }
    }
    for(int s = 1; s < letters.size()+1; s++){
        std::cout << numbersOfRepeat[s] << " " << (char)tolower(letters[s]) << '\n';
    }
    return 0;
}
*/

//Prompt 8
/*
#include <iostream>
#include <iomanip>
void farhenheitIntoCelsius(double [], double, int);
int main(){
    int numbersOfTemp;
    int userChoice;
    double total = 0;
    double average = 0;
    std::cout << "How many Temperature: ";
    std::cin >> numbersOfTemp;
    double temperature[numbersOfTemp];
    
    for(int i = 0; i < numbersOfTemp; i ++){
        int j = i+1;
        std::cout << "Temperature " << j << ": ";
        std::cin >> temperature[i];
    }
    for(int s = 0; s < numbersOfTemp; s++){
        for(int z = 0; z < numbersOfTemp; z++){
            if(temperature[s] < temperature[z]){
                double temp = temperature[s];
                temperature[s] = temperature[z];
                temperature[z] = temp;
            }
        }
    }
    for(int i = 0; i < numbersOfTemp; i ++){
        total += temperature[i];
    }
    average = (total/numbersOfTemp);
    std::cout << std::fixed << std::setprecision(1) << "The average temperature is: " << average;
    std::cout << "\nThe temperatures that are below the average: \n";
    for(int i = 0; i < numbersOfTemp; i ++){
        if(temperature[i] < average){
            std::cout << temperature[i] << " ";
        }
    }
    std::cout << "\nThe temperatures that are above the average: \n";
    for(int i = 0; i < numbersOfTemp; i ++){
        if(temperature[i] > average){
            std::cout << temperature[i] << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "Press '1' if you want to convert Fahrenheit into Celsius. Or anykey to quit: ";
    std::cin >> userChoice;
    if(userChoice == 1){
        farhenheitIntoCelsius(temperature, average, numbersOfTemp);
    }
    return 0;
}
void farhenheitIntoCelsius(double temperatureInFarenheit[], double average, int numbers){
    double temperatureInCelsius[numbers];
    for(int i = 0; i < numbers; i++){
        temperatureInCelsius[i] = (((temperatureInFarenheit[i]-32)*5)/9);
    }
    average = (((average -32)*5)/9);
    std::cout << "New data in Celsius is: \n";
    std::cout << "Temperature entered: ";
    for(int i = 0; i < numbers; i++){
        std::cout << temperatureInCelsius[i] << " ";
    }
    std::cout << std::fixed << std::setprecision(1) << "\nThe average temperature is: " << average;
    std::cout << "\nThe temperatures that are below the average: \n";
    for(int i = 0; i < numbers; i ++){
        if(temperatureInCelsius[i] < average){
            std::cout << temperatureInCelsius[i] << " ";
        }
    }
    std::cout << "\nThe temperatures that are above the average: \n";
    for(int i = 0; i < numbers; i ++){
        if(temperatureInCelsius[i] > average){
            std::cout << temperatureInCelsius[i] << " ";
        }
    }
    std::cout << std::endl;
}
*/

//Prompt 9
/*
#include <iostream>
bool test(std::string, std::string);
int main(){
    std::string test1 = "Eleven plus two";
    std::string test2 = "Twelve plus one";
    std::string test3 = "I go to school";
    std::string test4 = "I og to ooschl" ;
    std::string test5 = "I am genius";
    std::string test6 = "genius is me";

    if(test(test1, test2)){
        std::cout << "\"Eleven plus two\" and \"Twelve plus one\" are anagrams\n";
    }else{
       std::cout << "\"Eleven plus two\" and \"Twelve plus one\" are not anagrams\n";
    }
    if(test(test3, test4)){
        std::cout << "\"I go to school\" and \"I og to ooschl\" are anagrams\n";
    }else{
        std::cout << "\"I go to school\" and \"I og to ooschl\" are not anagrams\n";
    }
    if(test(test5, test6)){
        std::cout << "\"I am genius\" and \"genius is me\" are anagrams\n";
    }else{
        std::cout << "\"I am genius\" and \"genius is me\" are not anagrams\n";
    }
    return 0;
}
bool test(std::string str1, std::string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    for(int i = 0; i < str1.length(); i ++){
        str1[i] = (char)tolower(str1[i]);
        str2[i] = (char)tolower(str2[i]);
    }
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    if(str1 == str2){
        return true;
    }

    return false;
}
*/