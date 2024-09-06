#include <fstream>
#include <iostream>
#include <limits>
#include <string>
using namespace std;


// Function declarations.
void appendEntry();
void createEntry();
void readEntry();
string getDiaryEntryDate();



/**
 * The main function will loop through the personal diary managment system options.
 * 
 * NOTE: This function is already completed for you. 
 *       But you should read it to understand how it works!
*/
int main()
{
    cout << "Welcome to the Personal Diary Management System 1.0" << endl;

    // While loop for operations, run until exit or End-Of-File (EOF).
    while(true)
    {
        cout << endl;
        cout << "Choose an operation:" << endl;
        cout << "(x) : Exit" << endl;
        cout << "(n) : Creat a New Entry" << endl;
        cout << "(r) : Read an Entry" << endl;
        cout << "(a) : Append to an Entry" << endl;

        char choice;
        cin >> choice;  // Read in the user's choice.

        // Check if the user wants to exit.
        if (!cin || choice == 'x')
        {
            // Return from program.
            break;          
        }

        // Reset the state of the cin stream.
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(choice)
        {
            case 'n':
                createEntry();
                break;
            case 'r':
                readEntry();
                break;
            case 'a':
                appendEntry();
                break;                  
            default:
                cout << "ERROR: Invalid input. Choose again." << endl;
                break;
        }
    }

    return 0;  // Return 0 on success
}


/**
 * This function will append text to an existing diary entry.
 * 
 * Hint: 
 *      Use ofstream::app when you open the output file stream. 
 * Like this:
 *      ofstream diaryEntryFileStream;
 *      diaryEntryFileStream.open(filename, ofstream::app); 
*/
void appendEntry()
{
    string date = getDiaryEntryDate();
    string filename = date + ".txt";

    cout << "Type your diary text for " << date << " (Enter END on a new line when done.):" << endl;

    // TODO: Write your code here.




}


/**
 * This function will create a new diary entry. 
*/
void createEntry()
{
    string date = getDiaryEntryDate();
    string filename = date + ".txt";

    cout << "Type your diary text for " << date << " (Enter END on a new line when done.):" << endl;

    // TODO: Write your code here.



}


/**
 * This function will read a diary entry file and print that file to the terminal.
*/
void readEntry()
{
    string date = getDiaryEntryDate();
    string filename = date + ".txt";

    // TODO: Write your code here.



}


/**
 * The entry is saved to a file with the name format YYYY_MM_DD.txt 
 * (e.g., 2023_09_07.txt for 7th September 2023). 
 * 
 * NOTE: This function is already completed for you. 
 *       But you should read it to understand how it works!
*/
string getDiaryEntryDate()
{
    string date;
    cout << "Please enter the diary entry date in the format YYYY_MM_DD: ";
    cin >> date;

    // NOTE:  This program assumes the user enters the date in the correct format,
    //        and does not do any validation.

    // Return the date.
    return date;
}
