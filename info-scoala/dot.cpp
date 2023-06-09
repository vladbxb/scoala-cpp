#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int rows=3,columns=20,i,j;
    string active_state;
    string a = "                    ";
    a.insert(5, "\n");
    int position = a.length() / 2;
    char movement;
    a[position] = '.';
    while (active_state != "stop") {
        system("CLS");
        cout << a << flush;
        cin >> movement;
        switch (movement) {
        case 'l':
            if(position > 0) {
                a[position] = ' ';
                position--;
                if(position == 'n') {
                    position -= 3;
                }
                a[position] = '.';
            }
            break;
        case 'r':
            if (position < a.length() - 1) {
                a[position] = ' ';
                position++;
                if(position == '\\') {
                    position += 3;
                }
                a[position] = '.';
            }
            break;
        default:
            active_state = "stop";
            break;
        }
    }
//    for (i = 0; i < rows; i++) {
//        for (j = 0; j < columns; j++) {
//            cout << canvas[rows][columns];
//        }
//        //cout << canvas[rows][columns];
//    }
    return 0;
}
