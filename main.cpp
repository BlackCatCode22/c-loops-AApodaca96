// StringsAndLoops.cpp
// Angelo Apodaca
// Aug 21, 2023

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\n Welcome to String and Loop Practice!" << endl;

    string myTestStr = "The quick brown fox jumped over the lazy dog";
    cout << "\n\n" << endl << myTestStr << endl;

    // This is a comment.
    // Comments should come before the line of code that they 'talk' about

    // Use the find() function to find the substring 'fox' in myTestStr
    int myIndex = myTestStr.find("fox");

    cout << "The index of fox is: " << myIndex << endl;

    int atIndexFour = myTestStr.at(4);
    // should see ASCII for 'q'

    cout << "\nthis is at index four: " << atIndexFour << endl << endl;

    // size()
    cout << "\n size() is: " << myTestStr.size() << endl;

    // append()
    cout << "\n append() is: " << myTestStr.append("xyz") << endl;

    // length()
    cout << "\n length() is: " << myTestStr.length() << endl;

    // empty()
    if (myTestStr.empty()){
        cout << "\n the string is empty.";
    }
    else {
        cout << "\n the string is NOT empty.";
    }

    // substr()
    // find the five characters starting at 8

    string mySubStr = myTestStr.substr(7, 5);
    cout << "\n\n mySubStr(7, 5) = " << mySubStr << endl << endl;



    cout << endl << endl;

    // The Factorial of a Number
    // 6! = 1*2*3*4*5*6 = 720

    cout << "Welcome to the For Loop Factorial Section!";

    int number;
    cout << "\n\n Number is: ";
    cin >> number;
    int factorial = 1;// 1

    for(int i=0; i<=number; i++){// i=1
        factorial = factorial*i;
    }
    cout << number << "\n!=" << factorial;

    // The Other For Loop Practice
    cout << "\n\n Welcome to the other loop practice!" << endl;

    for (int i = 0; i<10; i++){
        cout << "\n Hello, i is: " << i;
    }

    return 0;
}
