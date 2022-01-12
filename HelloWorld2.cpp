// HelloWorld2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //initial message
    std::cout << "Do you have the power of TEEN? \nLet's find out...\n\n";

    //get the input
    int age;
    cout << "How old are you?  ";

    //keyboard input, store in age
    cin >> age;



    //run tests to see if they are a teenager
    if (age < 20 && age > 12)
    {
        //yes, teenager - count teen power
        for (int i = 1; i <= age; i++)
        {
            //print the message
            cout << i << " TEEN POWER! \n";

        }

    }
    else
    {
        //not a teenager, print message
        cout << "No teen power for you. \n";

        //figure out how long until they will be a teenager or how long ago they were a teenager
        if (age < 13)
        {
            //younger
            cout << "Try again in " << 13 - age << " year(s).\n";
        }
        else 
        {
            //older
            cout << "You lost your teen power " << age - 19 << " year(s) ago.\n";
        }

    }




    //ask if user wants to play again
    string again;

    cout << "Play again?? (y/n)";

    cin >> again;

    //check to see if they want to play again
    if (again == "y")
    {
        //restart the game
        main();
    }
    else
    {
        //end the game
        
    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
