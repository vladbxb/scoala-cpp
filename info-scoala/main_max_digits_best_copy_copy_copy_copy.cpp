#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
ifstream fin("bac.txt");
//ofstream fout("");

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
    /*int i;
    int divisibleNumber;
    int numbers[999];
    int num;
    int base;
    int len;
    fstream file;
    string numbers_as_string;
    stringstream ss(numbers_as_string);
    file.open("bac.txt");*/

//    cout << "Input 8 numbers with a maximum of 4 digits: ";
//    for (i=0; i < 8; i++) {
//        cin >> numbers[i];
//        if (numbers[i] == 0) {
//            cout << "Non-zero numbers";
//            return 0;
//        }
//        //Checks if number is greater than 4 digits
//        base = numbers[i];
//        if (base > 0) {
//            for (len=0; base>0; len++) {
//                base = base / 10;
//            }
//        }
//        if (len > 4) {
//            cout << "Maximum of 4 digits.";
//            return 0;
//        }
//        //cout << numbers[i];
//    }
    /*cout << "Input the number you want to check they are divisible with: ";
    cin >> divisibleNumber;
    if (divisibleNumber == 0) {
        cout << "Not 0, less or equal to 999 please";
        return 0;
    } else if (divisibleNumber <= 999)
    {
    } else
    {
        cout << "Less or equal to 999, please";
        return 0;
    }

    while (getline(file, numbers_as_string,' ')) {
            ss.clear();
            ss.str(numbers_as_string);
            ss >> num;
            if (numbers[i] % divisibleNumber == 0)
            {
                cout << numbers[i] << " ";
                i++;
            }
            if (numbers[i] == 0) {
                cout << "No null numbers!";
                return 0;
            }
            i++;
    }
//    for (int i = 0; i < 8; i++) {
//        if (numbers[i] % divisibleNumber == 0)
//        {
//            //cout << numbers[i] << " ";
//        }
//    }*/
    int x, n, i, OK=0;
    // X is the currently stored number, n is the divisibility number, OK checks if the current number is divisible
    cin>>n;
    while(fin>>x){
        if (i <= 999) {
            if (x%n==0) {
                i++;
                cout<<x<<" ";
                OK=1;
            }
        }
    }
    if(OK==0){
        cout<<"NU EXISTA";
    }
    return 0;
}
