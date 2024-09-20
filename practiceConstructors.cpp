#include <string>
#include <cmath>
#include <iostream>
using namespace std;

class classNum {
private:
    int x; // this is our variables
    string d; // this variable is a string type to form sentences
public:
    classNum() { x = 0; d = " "; } // call upon the variables
    classNum(int intX, string dubD) { x = intX; d = dubD; } // have the variables assigned to whatever num user inputs or string
    int getX() { return x; } // function to call upon the function
    string getD(){ return d; }
};

int main()
{
    classNum obj1, obj2(0, "Infinite"), obj3(45, "I love you!!!");
    for (int i = 0; i < 10; i++) {
        cout << obj3.getD() << endl;
    }
    cout << endl;
    cout << obj2.getD() << " times a day " << endl;
    system("pause>0");
}