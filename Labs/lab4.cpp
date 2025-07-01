// Lab code: None
// Zachary Ollivierre
// =============================================================================
// Attached: Lab 4
// File: Lab4.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Movie Data
// =============================================================================
// Description:
// This program uses a struct named MovieData to store some information about
// a movie. It prompts the user to enter data for two movies and displays the
// information.
// =============================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struct Declaration
struct MovieData {
    
    string title;
    string director;
    unsigned int releaseYear;
    unsigned int runtime;
};

// Function prototypes
void getInput(MovieData* moviePtr, int element);
void displayMovie(MovieData* moviePtr);


// ==== main ===================================================================
int main() {

    // Display Variables
    const int numMovies = 2;
    MovieData** movieArray = new MovieData* [numMovies]; // Points to array of moviePtrs

    // Iterate through movieArray
    for (int i = 0; i < numMovies; i++) {
        
        // Allocate MovieData object in each element
        movieArray[i] = new MovieData {};

        // Get movie input for allocated object
        getInput(movieArray[i], i);
    }

    // Display Movies
    for (int i = 0; i < numMovies; i++) {
        
        displayMovie(movieArray[i]);
    }

    return 0;
}
// ==== End of main =============================================================


// ======= getInput =============================================================
// Description:
// This function prompts the user for input for movieData object at moviePtr.
// 
// Input:
// Movie pointer 
// User input for movie data
// Element | index in array
// 
// Output:
// Stores user input in MovieData Object at moviePtr within movieArray
// =============================================================================
void getInput(MovieData* moviePtr, int element) {
    
    // Prompt for input
    cout << "\nEnter movie " << element + 1 << " title: ";
    getline(cin, moviePtr->title);

    cout << "\nEnter movie " << element + 1 << " director: ";
    getline(cin, moviePtr->director);

    cout << "\nEnter movie " << element + 1 << " release date: ";
    cin >> moviePtr->releaseYear;

    cout << "\nEnter movie " << element + 1 << " runtime (min): ";
    cin >> moviePtr->runtime;
    cin.ignore();

    cout << endl;
}
// ======= End of getInput =====================================================


// ======= displayMovie =============================================================
// Description:
// This function displays movie object at moviePtr.
// 
// Input:
// MoviePtr
// 
// Output:
// Displays movie data to user
// =============================================================================
void displayMovie(MovieData* moviePtr) {
    int spacing = 15;

    // Display movie data
    cout << endl << left << setw(spacing) << "Title:" << moviePtr->title << "\n\n";
    cout << setw(spacing) << "Director:" << moviePtr->director << "\n\n";
    cout << setw(spacing) << "Released:" << moviePtr->releaseYear << "\n\n";
    cout << setw(spacing) << "Runtime:" << moviePtr->runtime << " minutes\n\n";
}
// ======= End of displayMovie =====================================================


/* ================================== Output ===================================

Enter movie 1 title: War of the Worlds

Enter movie 1 director: Byron Haskin

Enter movie 1 release date: 1953

Enter movie 1 runtime (min): 88


Enter movie 2 title: War of the Worlds

Enter movie 2 director: Stephen Spielberg

Enter movie 2 release date: 2005

Enter movie 2 runtime (min): 118


Title:         War of the Worlds

Director:      Byron Haskin

Released:      1953

Runtime:       88 minutes


Title:         War of the Worlds

Director:      Stephen Spielberg

Released:      2005

Runtime:       118 minutes

==================================== Output ===================================*/