#include <iostream>
using namespace std;

/**
 * Return whether the given number if inside the given range
 * @param number : the number
 * @param min : the range min
 * @param max : the range max
 * @return true if inside the range, false otherwise
 */
bool isInside(int number, int min, int max) {
    if (min <= number && number <= max) {
    return true;
    } else return false;
}

int main() {
    int max,min,num;
    
    // 1-  Input the number
    // TODO
    cin >> num;

    // 2 - Input the range
    cin >> min;
    cin >> max;

    // BONUS : If the user accidentally enters a minimum value that is larger
    // than the maximum value, ask them to enter the values again.
    if(min > max){ 
        cout << "Min supposed to be smaller number, try again" << endl; 
        return 1;
    }
   
    // TODO

    // 3-  Check if the number is inside the range
   // TODO
   if(isInside(num,min,max)){
            cout << "inside" << endl;
        } else cout << "outside" << endl;

    return 0;
}