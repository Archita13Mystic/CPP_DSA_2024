/* Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B" */

#include<iostream>
using namespace std;
int main(){
    int g;
    cout << "Enter the score: " << endl;
    cin >> g;
    if(g>=90 && g<=100)
    cout << "Grade: A" << endl;
    else if(g>=80 && g<=89)
        cout << "Grade: B" << endl;
    else if(g>=70 && g<80)
        cout << "Grade: C" << endl;
    else if(g>=60 && g<70)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
}