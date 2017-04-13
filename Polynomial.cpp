#include "Polynomial.h"
#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

/****************************************************
 * name: Mayara Brandao Dusheyko
 * ID: 915 730 756
 * email: mbrandao@sfsu.edu
 * Compile: xcode
 * Description: Implementation of class polynomial and class monomial
 ******************************************************/

//Monomial class 
//default constructor
Monomial::Monomial(): coefficient(0), degree(0){/* empty body constructor */ }

//set coefficient and degree of a monomial
void Monomial::setMonomial(const float &aCoefficient, const int &aDegree) {
    if (aCoefficient != 0 && aDegree >= 0) {
        coefficient = aCoefficient;
        degree = aDegree;
    }
}

 //returns degree of monomial
int Monomial::getDegree()const {
    return degree;
}

 //returns coefficient of monomial
float Monomial::getCoefficient()const {
    return coefficient;
}

//set a new coefficient
void Monomial::setCoefficient(const float& newCoefficient) {
    coefficient = newCoefficient;
}

//prints monomial
void Monomial::print() const {
    if(coefficient != 0) {
        cout << coefficient;
    
        if(degree != 0) {
            cout << "x^" << degree << " ";
        }
    }
}


//Polynomial class
//default constructor
Polynomial::Polynomial() { }

//Method to read a polynomial from the user
bool Polynomial::readPolynomial() {
    cout << "Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): ";
    
    string input = "";
    stringstream ss;
    //clear string stream
    ss.str("");
    ss.clear();
    
    getline(cin, input);
    
    //removes trailing spaces from the input string
    input = input.erase(input.find_last_not_of(" \n\r\t")+1);
    ss << input;

    while(!ss.fail()) {
        float a = 0;
        int b = 0;
        
        ss >> a;
        if(ss.eof()) {
            break;
        }
        if (ss.fail()) {
            cout << "Invalid input" << endl;
            return false;
        }
        
        ss >> b;
        
        //checks if the value is an integer
        if(ss.fail() || ss.peek() == '.') {
            cout << "Invalid input" << endl;
            return false;
        }
        
        // if the coefficient is not zero, creates a monomial
       if (a != 0) {
           Monomial myMonomial;
           myMonomial.Monomial::setMonomial(a, b);
           addMonomial(myMonomial);
       }
    }
    return true;
}

//returns the size of a polynomial
int Polynomial::getSize()const {
    return poly.size();
}

//removes last element in a polynomial
void Polynomial::removeLast() {
    poly.pop_back();
}

//Add a monomial to a polynomial
void Polynomial::addMonomial(Monomial& aMonomial) {
    //degree of the other Monomial
    int degree = aMonomial.Monomial::getDegree();
    for (int i = 0; i < poly.size(); i++) {
        //checks if there is a term with the same power and add to it
        if (degree == poly[i].Monomial::getDegree()) {
            float coefficient = poly[i].Monomial::getCoefficient() + aMonomial.Monomial::getCoefficient();
            //if after addition of both coefficients, it's now 0, delete monomial from poly
            if (coefficient == 0) {
                 poly.erase(poly.begin() + i);
                return;
            } else {
                //otherwise set monomial to new coefficient
                poly[i].Monomial::setCoefficient(coefficient);
                return;
            }
            
        }
    }
    //otherwise it adds the new term to the polynomial
    poly.push_back(aMonomial);
}

//Method that returns the degree of a Polynomial (highest power)
int Polynomial::degree() {
    int myDegree = 0;
    //checks every degree for highest
    for (int i = 0; i < poly.size(); i++) {
        if (poly[i].getCoefficient() != 0) {
            int degree = poly[i].getDegree();
            if (myDegree < degree) {
                myDegree = degree;
            }
        }
    }
    return myDegree;
}

//Method that returns the coefficient of the term with the given power
float Polynomial::coefficient(const int& aPower)const {
    
    float theCoefficient = 0;
    //looks through the monomials to find aPower
    for (int i = 0; i < poly.size(); i++) {
        int degree = poly[i].Monomial::getDegree();
            if (degree == aPower) {
                theCoefficient = poly[i].Monomial::getCoefficient();
                break;
        }
    }
    return theCoefficient;
}

//Method to change the coefficient of a term with a given power
void Polynomial::changeCoefficient(const float& newCoefficient, const int& power) {
    bool found = false;
    //compares given power with all powers in the polynomial
    for (int i = 0; i < poly.size(); i++) {
        int degree = poly[i].Monomial::getDegree();
        //if power exists set new coefficient for that term
        // set flag foud to true
        if (degree == power) {
            poly[i].Monomial::setCoefficient(newCoefficient);
            found = true;
            break;
        }
    }
    //if power is not found, display error message
    if (!found) {
        cout << "Your polynomial does not have a term with power " << power << endl;
    }
}

//Method to multiply a polynomial by an integer
void Polynomial::multiplyPolynomialByInt(const int& value) {
    int size = poly.size();
    for (int i = size - 1; i >= 0; i--) {
        //if multiplying by 0, empty polynomial
        if (value == 0) {
            removeLast();
        } else {
            //set new coefficients to all terms
            float newCoefficient = poly[i].Monomial::getCoefficient();
            poly[i].setCoefficient(newCoefficient * value);
        }
    }
}

//returns degree of each term in the polynomial
int Polynomial::getDegreeOfTerm(int term)const {
    return poly[term].Monomial::getDegree();
}

//returns the coefficient of each term in the polynomial
int Polynomial::getCoefficientOfTerm(int term)const {
    return poly[term].Monomial::getCoefficient();
}

//Method to add two polynomials
void Polynomial::add(Polynomial& aPolynomial) {
    
    //saves the size of both polynomials
    int sizeOther = aPolynomial.Polynomial::getSize();
    int sizeThis = poly.size();
    
    
    //reads both polynomials and compares their power
    // using saved size values
    if (sizeThis != 0 && sizeOther != 0) {
        for (int j = sizeOther - 1; j >= 0; j--) {
            bool equal = false;
            for (int i = sizeThis - 1; i >= 0; i--) {
                int degree = poly[i].Monomial::getDegree();
                
                //if the powers are the same, calculates new coefficient, updates poly and removes from aPolynomial
                if (degree == aPolynomial.Polynomial::getDegreeOfTerm(j)) {
                    float coefficient = (float)poly[i].Monomial::getCoefficient() + (float)aPolynomial.Polynomial::getCoefficientOfTerm(j);
                    
                    // checks if new coefficient is 0
                    if (coefficient != 0) {
        
                    poly[i].Monomial::setCoefficient(coefficient);
                    aPolynomial.Polynomial::removeLast();
                    equal = true;
                    break;
                    
                    //if after addition of both coefficients, it's now 0, delete monomial from poly
                    } else {
                        poly.erase(poly.begin() + i);
                        aPolynomial.Polynomial::removeLast();
                        equal = true;
                        break;
                    }
                }
            }
            
            //if there is no same power element, and there are still elements, add them to poly, and remove them from aPolynomial
            if (!equal && aPolynomial.Polynomial::getSize()!= 0) {
                Monomial otherMono;
                otherMono.Monomial::setMonomial(aPolynomial.getCoefficientOfTerm(j),
                                                aPolynomial.getDegreeOfTerm(j));
                poly.push_back(otherMono);
                aPolynomial.Polynomial::removeLast();
            }
        }
        
    //if the the first polynomial is empty
    } else if (poly.size() == 0) {
        while (aPolynomial.Polynomial::getSize()!= 0) {
            //saves the coefficient of aPolynomial term
            float coefficient = aPolynomial.Polynomial::getCoefficientOfTerm(aPolynomial.Polynomial::getSize() - 1);
            //saves the power of aPolynomial term
            int degree = aPolynomial.Polynomial::getDegreeOfTerm(aPolynomial.Polynomial::getSize        () - 1);
            //creates a monomial with the values and add them to first polynomial
            Monomial aMono;
            aMono.Monomial::setMonomial(coefficient, degree);
            poly.push_back(aMono);
            
            //removes element from second polynomial
            aPolynomial.Polynomial::removeLast();
        }
    }
}

 //Overloading - operator to negate a polynomial
Polynomial Polynomial::operator-()const {
    Polynomial result;
    for (int i = 0; i < poly.size(); i++) {
        float coefficient = (-1) * poly[i].Monomial::getCoefficient();
        Monomial aMono;
        aMono.Monomial::setMonomial(coefficient, poly[i].Monomial::getDegree());
        result.Polynomial::addMonomial(aMono);
    }
    return result;
}

//Method that prints a Polynomial
void Polynomial::print() const {
    cout << "Your polynomial is: ";
    for(int i = 0; i < poly.size(); i++) {
        float c = poly[i].Monomial::getCoefficient();
        
        //if coefficient is positive, add plus sign before it
        if (c >= 0) {
            if (i != 0) {
                cout << "+";
            }
            poly[i].Monomial::print();
            
        } else {
             poly[i].Monomial::print();
        }
    }
    
    //if polynomial is empty print 0
    if (poly.size() == 0) {
        cout << 0 << endl;
    }
    
    cout << endl;
        
}



