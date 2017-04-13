#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include<vector>


/****************************************************
 * name: Mayara Brandao Dusheyko
 * Compile: xcode
 * Description: Header file to Polynomial
 ******************************************************/


//class Monomial
class Monomial {
private:
    
    //data fields
    float coefficient;
    int degree;
    
public:
    
    //Default constructor
    Monomial();
    
    //set coefficient and degree of a monomial
    void setMonomial(const float& coefficient, const int& degree);
    
    //returns degree of monomial
    int getDegree()const;
    
    //returns coefficient of monomial
    float getCoefficient()const;
    
    //set a new coefficient
    void setCoefficient(const float& newCoefficient);
    
    //print monomial
    void print() const;
};

//class Polynonomial
class Polynomial {
private:
    //vector to store monomial terms of a polynomial 
    std::vector<Monomial> poly;
    
    //returns the size of a polynomial
    int getSize()const;
    
    //returns degree of each term in the polynomial
    int getDegreeOfTerm(int term)const;
    
    //returns the coefficient of each term in the polynomial
    int getCoefficientOfTerm(int term)const;
    
    //removes last element in polynomial
    void removeLast();
    
    //Add a monomial to a polynomial
    void addMonomial(Monomial& aMonomial);
    
public:
    //Default constructor
    Polynomial();
    
    //Method to read a polynomial from the user
    bool readPolynomial();
    
    //Method that returns the degree of a Polynomial (highest power)
    int degree();
    
    //Method that returns the coefficient of the term with the given power
    float coefficient(const int& aPower) const;
    
    //Method to change the coefficient of a term with a given power
    void changeCoefficient(const float& newCoefficient, const int& power);
    
    //Method to multiply a polynomial by an integer
    void multiplyPolynomialByInt(const int& value);
    
   //Method to add two polynomials
    void add(Polynomial& aPolynomial);
    
    //Overloading - operator to negate a polynomial
    Polynomial operator-()const;
    
    //Method that prints a Polynomial
    void print() const;
    
};


#endif