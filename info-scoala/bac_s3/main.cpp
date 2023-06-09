#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Read 1000 numbers from the file bac.txt, excluding 0, with a maximum of 4 numbers. The numbers are separated by spaces.
    // Read an inputted number with cin which reads a smaller or equal than 999 number, excluding 0
    // Show the numbers which are divisible with the inputted number from bac.txt. If no numbers exist, print out they don't exist.

    // New idea: do the same thing with cin first instead of ifstream

//    fstream bac("bac.txt", ios_base::in);
//    bac.open("bac.txt");
//    if (bac.is_open()) {
//        cout << "File is open";+
//    } else {
//        cout << "File isn't open";
//    }
//    if (bac.is_open()){ //checking whether the file is open
//      float a;
//      while(bac >> a){ //read data from file object and put it into string.
//         cout << a << endl; //print the data of the string
//      }
//      getchar();
//      bac.close(); //close the file object.
//   }
//    return 0;
    int i = 0;
    int divisibleNumber;
    int numbers[9998];
    int numbersDivisible[9998];
    cout << "Input 8 numbers with a maximum of 4 digits: ";
    while (i < 8) {
        cin >> numbers[i];
        i++;
    }
    cout << "Input the number you want to check they are divisible with: ";
    cin >> divisibleNumber;
    if (divisibleNumber == 0) {
        cout << "Not 0, less or equal to 999 please";
        return 0;
    } else if (divisibleNumber <= 999)
    {
    } else
    {
        cout << "Less or equal to 999, please";
    }
    numbersDivisible[1] == 5;
    for (int i = 0; i < 8; i++) {
        if (numbers[i] % divisibleNumber == 0)
        {
            numbersDivisible[i] = numbers[i];
            cout << "I got here";
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << numbersDivisible[i] << " ";
    }
}
