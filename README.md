ReadMe Polynomial

****************
Student: Mayara Brandao Dusheyko
****************


Files:  Polynomial.h
	Polynomial.cpp
	main.cpp
Compiled using xCode

Description:
 	This program implements a polynomial. I implemented a class monomial with coefficient and degree. And a class polynomial which is a 	vector of Monomials. The user can enter a sequence of coefficients and degrees and the program will display their polynomial.
	The user can get the degree, coefficient of any term, multiply by an integer, negate, change coefficient of any term, print and add two 	polynomials.
	**The add two polynomials function, adds the second Polynomial into the first and deletes the second.

	
***********************  SAMPLE RUN #1 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 10 8 -5 8 4 5 3 0 0 1
Your polynomial is: 5x^8 +4x^5 +3

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 1

The degree of your polynomial is: 8
Program ended with exit code: 0

***********************  SAMPLE RUN #2 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 10 2 10 7 10 7 2 3 6 7
Your polynomial is: 10x^2 +26x^7 +2x^3 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 2

Enter the power of the term you would like to get the coefficient for: 7
The coefficient is: 26
Program ended with exit code: 0

***********************  SAMPLE RUN #2.2 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 10 2 10 7 10 7 2 3 6 7
Your polynomial is: 10x^2 +26x^7 +2x^3 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 2

Enter the power of the term you would like to get the coefficient for: 10
The coefficient is: 0
Program ended with exit code: 0

***********************  SAMPLE RUN #3 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 	
Your polynomial is: -10x^2 +3x^4 +5x^6 -9

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 3

Enter the integer you would like to multiply your polynomial for: -2
Your polynomial is: 20x^2 -6x^4 -10x^6 +18
Program ended with exit code: 0

***********************  SAMPLE RUN #3.3 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): -10 2 3 4 5 6 -9 0 
Your polynomial is: -10x^2 +3x^4 +5x^6 -9

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 3

Enter the integer you would like to multiply your polynomial for: 0
Your polynomial is: 0

Program ended with exit code: 0

***********************  SAMPLE RUN #4 :  *********************** 

Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 1 2 3 4 5 6 7 8 
Your polynomial is: 1x^2 +3x^4 +5x^6 +7x^8 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 4
Your polynomial is: -1x^2 -3x^4 -5x^6 -7x^8 
Program ended with exit code: 0

***********************  SAMPLE RUN #5 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 10 2 3 4 9 2 9 3 7 5 6 9 0 0 0 0 1 1 0
Your polynomial is: 19x^2 +3x^4 +9x^3 +7x^5 +6x^9 +1x^1 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 6
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): -10 2 3 1 10 6 
Your polynomial is: -10x^2 +3x^1 +10x^6 
Result of Addition: 
Your polynomial is: 9x^2 +3x^4 +9x^3 +7x^5 +6x^9 +4x^1 +10x^6 
Program ended with exit code: 0

***********************  SAMPLE RUN #5.1 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 
Your polynomial is: 0


 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 6
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 1 2 3 4 5 6 
Your polynomial is: 1x^2 +3x^4 +5x^6 
Result of Addition: 
Your polynomial is: 5x^6 +3x^4 +1x^2 
Program ended with exit code: 0


***********************  SAMPLE RUN #5.2 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 1 2 3 4 5 6
Your polynomial is: 1x^2 +3x^4 +5x^6 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 6
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 
Your polynomial is: 0

Result of Addition: 
Your polynomial is: 1x^2 +3x^4 +5x^6 
Program ended with exit code: 0

***********************  SAMPLE RUN #5.3 :  *********************** 

Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 1 2 3 4 5 6 7 8
Your polynomial is: 1x^2 +3x^4 +5x^6 +7x^8 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 6
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): -1 2 -3 4 -15 6 
Your polynomial is: -1x^2 -3x^4 -15x^6 
Result of Addition: 
Your polynomial is: -10x^6 +7x^8 
Program ended with exit code: 0

***********************  SAMPLE RUN #6 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1): 1 2 3 4 5 6 
Your polynomial is: 1x^2 +3x^4 +5x^6 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 7

Enter the power of the term you would like to change the coefficient: 10
Enter the new coefficient: 10
Your polynomial does not have a term with power 10
Your polynomial is: 1x^2 +3x^4 +5x^6 
Program ended with exit code: 0

***********************  SAMPLE RUN #7 :  *********************** 
Enter the coefficients and degrees of your polynomial. (eg.: 3 4 -5 6 1 0 for 3x^4 - 5x^6 + 1):  1 2 3 4 5 6 
Your polynomial is: 1x^2 +3x^4 +5x^6 

 *** MENU *** 
1. Degree 
2. Coefficient of a term 
3. Multiply by an integer 
4. Negate 
5. print 
6. Add two polynomials 
7. Change coefficient of a term
What would you like to do? 7

Enter the power of the term you would like to change the coefficient: 4
Enter the new coefficient: 10
Your polynomial is: 1x^2 +10x^4 +5x^6 
Program ended with exit code: 0
