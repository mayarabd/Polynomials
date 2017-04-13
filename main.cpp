#include "Polynomial.h"
#include<iostream>
#include <limits>
using namespace std;


/****************************************************
 * name: Mayara Brandao Dusheyko
 * Compile: xcode
 * Description: This program implements a polynomial.
 *      Users can enter a polynomial and get its degree, coefficient of any term, multiply by an integer, 
 *		negate, change coefficient of any term, print and add two 	polynomials.
 ******************************************************/

int main(){
    
    Polynomial myPoly;
    Polynomial result;
    Polynomial secondPoly;
        
    if (myPoly.readPolynomial()) {
        myPoly.Polynomial::print();
        
        cout << "\n *** MENU *** "<< endl;
        cout << "1. Degree " << endl;
        cout << "2. Coefficient of a term " << endl;
        cout << "3. Multiply by an integer " << endl;
        cout << "4. Negate " << endl;
        cout << "5. print " << endl;
        cout << "6. Add two polynomials " << endl;
        cout << "7. Change coefficient of a term" << endl;
        
        cout << "What would you like to do? ";
        int option = 0;
        cin >> option;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        
        int power = 0;
        int value = 0;
        int coefficient = 0;
        switch (option) {
            case 1:
                cout << "\nThe degree of your polynomial is: " <<  myPoly.Polynomial::degree() << endl;
                break;
           
            case 2:
                cout << "\nEnter the power of the term you would like to get the coefficient for: ";
                cin.clear();
                cin >> power;
                if (cin.fail() || power < 0) {
                    cout << "Invalid input. Power needs to be a positive integer" << endl;
                    break;
                }
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                cout << "The coefficient is: " << myPoly.Polynomial::coefficient(power) << endl;
                break;
                
            case 3:
                cout << "\nEnter the integer you would like to multiply your polynomial for: ";
                cin >> value;
                if (cin.fail()) {
                    cout << "Invalid input. Enter a number." << endl;
                    break;
                }
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                myPoly.Polynomial::multiplyPolynomialByInt(value);
                myPoly.Polynomial::print();
                break;
                
            case 4:
                result = -myPoly;
                result.Polynomial::print();
                break;
                
            case 5:
                myPoly.Polynomial::print();
                break;

            case 6:
                if (secondPoly.readPolynomial()) {
                    secondPoly.Polynomial::print();
                    myPoly.Polynomial::add(secondPoly);
                    cout << "Result of Addition: " << endl;
                    myPoly.Polynomial::print();
                }
                break;
            case 7:
                cout << "\nEnter the power of the term you would like to change the coefficient: ";
                cin >> power;
                if (cin.fail() || power < 0) {
                    cout << "Invalid input. Power needs to be a positive integer" << endl;
                    break;
                }
                cout << "Enter the new coefficient: ";
                cin >> coefficient;
                if (cin.fail()) {
                    cout << "Invalid input. Coefficient needs to be a number." << endl;
                    break;
                }
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                myPoly.Polynomial::changeCoefficient(coefficient, power);
                myPoly.Polynomial::print();
                break;

                
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }

    return 0;
}
