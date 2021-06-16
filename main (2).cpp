/********************************************************************************************
 rock, papr, scissors
 
 The rules to this game are as follows:
 
    Rock beats scissors
    Scissors beats paper
    Paper Breats rock

**********************************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// function prototypes
void rules();
void menu();
void play();

int main()
{
    int choice;     // holds the menu choice 
    
    do
    {
        menu();
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;
        
        // do some action based on the menu choice
        if(choice == 1)
        {
            // play the game
            play();
        }
        else if(choice == 2)
        {
            // display the rules
            system("cls"); //clears the console
            //call the rules function
            rules();
        }
        else if(choice ==3)
        {
            // quit   
            cout << "Thank you for using the program. Bye!";
        }
        else 
        {
            // display an error
            system("cls");
            cout << "*************************************************" << endl;
            cout << "\t ERROR: INVALID MENU CHOICE" << endl;
            cout << "*************************************************" << endl; 
        }
        
    }while(choice != 3);
    
    return 0;
}

/*
    function named rules that displays the rules of the rock 
    paper scissors game
*/
void rules()
{
    // display the rules to the game
    cout << "********************************" << endl;
    cout << "\t Rock, Paper, Scissors rules" << endl;
    cout << "********************************" << endl;
    cout << "\t Rock beats Scissors" << endl;
    cout << "\t Scissors beats Paper" << endl;
    cout << "\t Paper beats Rock" << endl;
    cout << "********************************" << endl;
}

/*
    function that displays the menu for the game 
*/
void menu()
{
    cout << "*************************************************" << endl;
    cout << "\t Rock, Paper, Scissors" << endl;
    cout << "*************************************************" << endl;  
    cout << "\t Select one of the following" << endl;
    cout << "\t 1 - Play Rock, Paper, Scissors" << endl;
    cout << "\t 2 - View the rules to the game" << endl;
    cout << "\t 3 - Quit" << endl;
    cout << "*************************************************" << endl;
}

void play ()
{
    // generate a random number
    srand (time(0));
    
    //varaiables
    int userchoice;     // user's choice
    int cpuchoice;     // cpu choice
    
    //generate a random number for the cpu
    cpuchoice = 1 + rand() % 3; // select between 1 and 3 for the computer
    
    cout << "*************************************************" << endl;
    cout << "\t Rock, Paper, Scissors - GAME TIME" << endl;
    cout << "*************************************************" << endl;
    cout << "\t Select one of the following" << endl;
    cout << "\t 1 - Rock" << endl;
    cout << "\t 2 - Paper" << endl;
    cout << "\t 3 - Scissors" << endl;
    cout << "*************************************************" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> userchoice;
    
    //validate user's choice
    while(userchoice < 1 or userchoice > 3)
    {
        cout << "*************************************************" << endl;
        cout << "\t ERROR: INVALID MENU CHOICE" << endl;
        cout << "*************************************************" << endl; 
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> userchoice;
    }
    
    // implement the game logic
    if(userchoice == 1)
    {
        //user picked rock
        if(cpuchoice == 3)
            cout << "You picked rock, CPU picked scissors. You win! \n\n";// user wins
        else if(cpuchoice == 2)
            cout << "You picked rock, CPU picked paper. You lose :( \n\n";// user loses
        else
            cout << "You picked rock, CPU picked rock. You tied :| \n\n";// tie 
    }
    else if (userchoice == 2)
    {
        //user picked paper
        if(cpuchoice == 3)
            cout << "You picked paper, CPU picked scissors. You lose :( \n\n";// user loses
        else if(cpuchoice == 2)
            cout << "You picked paper, CPU picked paper. You tie :| \n\n";// user loses
        else
            cout << "You picked paper, CPU picked rock. You win! \n\n";// tie 
    }
    else
    {
        //user pickes scissors
        if(cpuchoice == 3)
            cout << "You picked scissors, CPU picked scissors. You tie :| \n\n";// user wins
        else if(cpuchoice == 2)
            cout << "You picked scissors, CPU picked paper. You win! \n\n";// user loses
        else
            cout << "You picked scissors, CPU picked rock. You lose :( \n\n";// tie 
    }
}