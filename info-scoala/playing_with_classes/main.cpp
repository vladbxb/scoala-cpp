#include <iostream>

using namespace std;

class test {
public:
    int testValue = 10;
    void testFunction() {
        cout << "The test function works along with the test integer " << testValue;
    }
};

int main()
{
    test object;
    object.testFunction();
    cout << "\n" << object.testValue;
    return 0;
}
