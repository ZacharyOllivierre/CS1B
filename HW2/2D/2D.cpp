// =============================================================================
// Attached: HW_2D
// File: HW2D.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Grades
// =============================================================================
// Description:
// This program reads the grades of three subjects of five students from
// a file. It displays all grades for all students, the GPAs for each student,
// and the average GPA of each subject. 
// =============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function prototypes
void getGrades(char* gradesPtr, const int numStudents, const int numSubjects);
void displayGrades(char* gradesPtr, const int numStudents, const int numSubjects);
void calculateGpas(char* gradesPtr, const int numStudents, const int numSubjects, float* gpasPtr);
void displayGpas(float* gpasPtr, const int numStudents);
void calcClassAverage(char* gradesPtr, const int numStudents, const int numSubjects, float* classAvPtr);
void displayClassAverage(float* classAvPtr, const int numSubjects);
int gradeToPoint(char grade);



// ==== main ===================================================================
int main() {

    // Declaring Variables
    const int numStudents = 5;
    const int numSubjects = 3;
    char grades[numStudents][numSubjects];
    float gpas[numStudents];
    float classAverages[numSubjects];

    // Read Grades From File
    getGrades(&grades[0][0], numStudents, numSubjects);

    // Display All Student Grades
    displayGrades(&grades[0][0], numStudents, numSubjects);

    // Calculate GPAs of Each Student
    calculateGpas(&grades[0][0], numStudents, numSubjects, gpas);

    // Display All Student GPAs
    displayGpas(gpas, numStudents);

    // Calculate Subject Averages
    calcClassAverage(&grades[0][0], numStudents, numSubjects, classAverages);

    // Display Subject Averages
    displayClassAverage(classAverages, numSubjects);

    return 0;
}
// ==== End of main =============================================================


// ======= getGrades =============================================================
// Description:
// This function reads grades.txt file and assigns them to 2D array grades in
// main with a pointer. Will display error message and exit program if file
// cannot be opened.
//
// Input:
// Address of first element in 2d array | will access via pointer arithmetic
// numStudents | number of rows
// numSubjects | number of columns
// grades.txt file
//
// Output:
// Assigns contents of grades.txt into grades array in main with gradesPtr  
// =============================================================================
void getGrades(char* gradesPtr, const int numStudents, const int numSubjects) {

    // Open file
    ifstream inFile("grades.txt");

    // Throw error and exit if unable to open
    if (!inFile) {
        cout << "Error, couldn't open file.\n";
        exit(1);
    }

    // Assign each element of file into corresponding element of array
    for (int y = 0; y < numStudents; y++) {
        
        for (int x = 0; x < numSubjects; x++) {
            
            // Assign element to array
            inFile >> gradesPtr[y * numSubjects + x];
        }
    }

}
// ======= End of getGrades =====================================================


// ======= displayGrades =============================================================
// Description:
// This function displays the grades read from grades.txt in getGrades() function.
// It outputs the 2D array grades from main with gradesPtr pointer in a table
// fashion. Each row and column has set spacing.
//
// Input:
// Pointer to address of first element of 2d grades array
// Number of Students | Size of rows
// Number of Subjects | Size of columns
//
// Output:
// Displays all grades table to user 
// =============================================================================
void displayGrades(char* gradesPtr, const int numStudents, const int numSubjects) {
    int colSpacing = 10;

    // Display Table Header 
    cout << left << "\nAll Grades" << endl;
    cout << setw(colSpacing) << "Student" << setw(colSpacing) << "English" 
         << setw(colSpacing) << "History" << setw(colSpacing) << "Math" << endl;

    // Iterate through each student (row)
    for (int y = 0; y < numStudents; y++) {

        // Display Student Number
        cout << "#" << setw(colSpacing - 1) << y + 1; // colSpacing - 1 because of initial #

        // Iterate through each subject for student (column)
        for (int x = 0; x < numSubjects; x++) {
            
            // Display yStudent's grade for xSubject
            cout << setw(colSpacing) << gradesPtr[y * numSubjects + x];
        }
        cout << endl;
    }

}
// ======= End of displayGrades =====================================================


// ======= calculateGpas =============================================================
// Description:
// This function calculates the GPAs of each student. Calculated GPA's are stored 
// in gpas array in main through gpasPtr pointer.
//
// Input:
// Pointer to address of first element of 2d grades array
// Number of Students | Size of rows
// Number of Subjects | Size of columns
// Pointer to gpas array
//
// Output:
// Function updates gpas array in main through gpasPtr
// =============================================================================
void calculateGpas(char* gradesPtr, const int numStudents, const int numSubjects, float* gpasPtr) {

    // Iterate through each student (row)
    for (int y = 0; y < numStudents; y++) {
        float studentPointTotal = 0;

        // Iterate through each subject for student (column)
        for (int x = 0; x < numSubjects; x++) {
            
            // Add each grade to student point total
            studentPointTotal += gradeToPoint(gradesPtr[y * numSubjects + x]);
        }

        // Save student's gpa in array
        gpasPtr[y] = studentPointTotal / static_cast<float>(numSubjects);
    }
}

// ======= End of calculateGpas =====================================================


// ======= displayGpas =============================================================
// Description:
// This function displays each student's GPA (two decimal places). Gpas array is
// accessed through gpasPtr pointer.
//
// Input:
// gpas array pointer | address of first element
// int number of students
//
// Output:
// Displays table of each student and their corresponding GPA 
// =============================================================================
void displayGpas(float* gpasPtr, const int numStudents) {
    
    // Display table header | Formatt output
    cout << fixed << setprecision(2) << "\n\nStudent GPAs" << endl;
    cout << setw(10) << "Student" << setw(10) << "GPA" << endl;

    // Display each student's gpa
    for (int x = 0; x < numStudents; x++) {
        cout << "#" << setw(9) << x + 1 << gpasPtr[x] << endl;
    }
}
// ======= End of displayGpas =====================================================


// ======= calcClassAverage =============================================================
// Description:
// This function calculates the average Gpa for each subject. These scores are stored
// in classAverages in main, accessed through classAvPtr pointer. Uses column major
// order traversal.
//
// Input:
// Pointer to address of first element of 2d grades array
// Number of Students | Size of rows
// Number of Subjects | Size of columns
// Pointer to class averages array
//
// Output:
// Stores class averages in classAverages array in main through pointer 
// =============================================================================
void calcClassAverage(char* gradesPtr, const int numStudents, const int numSubjects, float* classAvPtr) {

    // Iterate through each subject (column)
    for (int x = 0; x < numSubjects; x++) {
        float classGpa = 0;

        // Iterate through each student (row)
        for (int y = 0; y < numStudents; y++) {
            
            // Add each grade for subject to total
            classGpa += gradeToPoint(gradesPtr[y * numSubjects + x]);
        }
        
        // Save class gpa in class gpa array
        classAvPtr[x] = classGpa / static_cast<float>(numStudents);
    }
}
// ======= End of calcClassAverage =====================================================


// ======= displayClassAverage =============================================================
// Description:
// This function displays class average for each subject. Output is formatted to
// two decimal places.
//
// Input:
// class averages array pointer
// const int number of subjects
//
// Output:
// Displays table with each class' average 
// =============================================================================
void displayClassAverage(float* classAvPtr, const int numSubjects) {
    // Display table header
    cout << "\n\nAverage GPA by Subject" << endl;
    cout << setw(10) << "English" << setw(10) << "History" << setw(10) << "Math" << endl;

    // Display table contents | class average gpas
    for (int x = 0; x < numSubjects; x++) {
        cout << setw(10) << classAvPtr[x];
    }
    cout << "\n";
}
// ======= End of displayClassAverage =====================================================


// ======= Function =============================================================
// Description:
// This function converts a letter grade (ABCDF) to their point equivalent.
// Helper function to calculateGpas(). If grade is not valid, outputs error and
// exits program.
//
// Input:
// char letter grade
//
// Output:
// returns int grade point worth (A = 4 | B = 3 | C = 2 | D = 1 | F = 0)
// =============================================================================
int gradeToPoint(char grade) {
    
    // Switch structure to return correspoinding point grade value
    switch (grade) {
        case 'A':
            return 4;
        case 'B':
            return 3;
        case 'C':
            return 2;
        case 'D':
            return 1;
        case 'F':
            return 0;
        default:
            cout << "Error gradeToPoint()" << endl;
            exit(1);
    }
}
// ======= End of Function =====================================================


/* ================================== Output ===================================

All Grades
Student   English   History   Math      
#1        A         A         B         
#2        C         C         F         
#3        C         D         B         
#4        B         A         C         
#5        B         A         B         


Student GPAs
Student   GPA       
#1        3.67
#2        1.33
#3        2.00
#4        3.00
#5        3.33


Average GPA by Subject
English   History   Math      
2.80      3.00      2.20  
==================================== Output ===================================*/