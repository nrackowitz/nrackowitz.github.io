#include <iostream>
#include <cstdlib>          // uses the c standard library - for random values
#include <ctime>            //uses the time functions in C++

using namespace std;

int main()
{
    srand(time(0));     // seeds a time in the computers clock at time 0
                        // ensures that different numbers are generated 
                        // each time the program runs
    
    int number;         // variable that holds a number with no decimal places
    int number2;        // variable that holds a randomly generated number
    int guesses =0;     // variable holds the number of guesses
    
    // generate the random number
    // formula : min + rand() % max-min
    number2 = 1 + rand() % 99;
    
    do
    {
        // ask the user to input the value of the number
        cout << "Enter a whole number: ";
        cin >> number;
        
        // add on the guesses
        guesses++;      // same as guesses = guesses + 1;
        
        //display the number that was entered
        cout << endl << "You entered the number " << number << endl;
        
        // if statement that checks to see if the user entered the right number, relays if it is higher or lower
        if(number == number2) 
            cout << "You guessed the right number!" << endl;
        else if (number < number2)
            cout << "You guessed too low. Try again." << endl;
        else 
            cout << "you guessed too high. Try Again." << endl;
            
    }while(number !=number2);
    
    cout << "It took you " << guesses << " guesses to get the right number. ";

    return 0;
}
