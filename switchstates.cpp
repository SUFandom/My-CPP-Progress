#include <iostream>


using namespace std;

// Adds nwew function
string grabDayofWeek(int dayNum) {
    string dayName;

   switch (dayNum) {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday!";
        break;
    case 2:
        dayName = "Tuesday!";
        break; 
    case 3:
        dayName = "Wednsday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday!";
        break;
    case 6:
        dayName = "Saturday!";
        break;
    default:
        dayName = "Invalid Input";
   }
    return dayName;
}

int main(){
    cout << grabDayofWeek(2) << endl;
    return 0;

}