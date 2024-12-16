#include <iostream>
using namespace std;


// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/**
 * Validate a given date
 * @param year, month, day : the date
 * @return true if the date is valid, false otherwise
 */
bool isValidDate(int year, int month, int day) {
    // TODO
    // The year shall be a positive number
    // The month shall be a number between 1 and 12
    // The day shall be a number between 1 and the max days
    if (year > 0 && month >= 1 && month <= 12) {
        switch(month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (day>=1 && day <=31){
                    return true;
                } else return false;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (day>=1 && day <=30){
                    return true;
                } else return false;
                break;
            case 2:
                if(isLeapYear(year)){
                    if(day>=1 && day<=29){
                        return true;
                    } else return false;
                } 
                else {
                    if(day>=1 && day<=28){
                        return true;
                    } else return false;
                }
                break;
        }
    } 
    return false;
}

/**
 * Compare 2 dates (date1 and date2)
 * @param year1, month1, day1 : date 1
 * @param year2, month2, day2 : date 2
 * @return
 *      -1 if date1 < date2
 *      0 if they are the same
 *      1 if date1 > date2
 */
int compare(int year1, int month1, int day1, int year2, int month2, int day2) {
    // TODO
    if(year1==year2){
        if (month1==month2){
            if(day1==day2){
                return 0;
            } else {
                if (day1>day2){
                    return -1;
                } else return 1;
            }
        } else {
            if (month1>month2){
                return -1;
            } else return 1;
        }
    } else {
        if (year1>year2){
            return -1;
        } else return 1;
    }
}

int main() {
    // 1- Input the dates
    int year1, month1, day1;
    cout << "Enter the first person's date of birth (year/month/day): ";
    cin >> year1 >> month1 >> day1;

    int year2, month2, day2;
    cout << "Enter the second person's date of birth (year/month/day): ";
    cin >> year2 >> month2 >> day2;

    // 2- Validate the dates (BONUS)
    // TODO
    if ( isValidDate(year1,month1,day1) && isValidDate(year2,month2,day2)) {
        // 3- Compare the dates
        // TODO
        int result;
        result = compare(year1,month1,day1,year2,month2,day2);
        if (result == -1){
            cout << "The first person is the youngest" << endl;
        }
        else if ( result== 0){
            cout << "Both persons have the same age" << endl;
        } 
        else if ( result == 1){
            cout << "The second person is the youngest" << endl;
        }
    } else cout << "invalid dates" << endl; 

    return 0;
}
