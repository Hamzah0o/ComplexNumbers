#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;

class Complex
{
     private:
        double real;                              //an atributes to hold the real number.
        double imag;                              //an atributes to hold the imaginary number. 

    public:
      
	  	Copmlex(double);							  //a constructor.
	  	Complex(double);							 //a constructor.
	    Complex();                                  //a constructor.
        Complex(double , double);                  //a constructor.
        void setComplexR(double);                 // a methode to set the real number.
        void setComplexI(double);                // a methode to set imaginary number. 
        double getComplexR()const; 				// a methode to get the real number.
        double getComplexI()const ;            // a methode to get imaginary number. 
        Complex operator+(Complex);		      // over loading for + sign.
        Complex operator-(Complex);		     // over loading for - sign.
        Complex operator*(Complex);		    // over loading for * sign.
	    Complex operator/(Complex);        // over loading for / sign.
		void display();					  // to display the number enterd by the user.
		void displayC();                 // to display the conjugate of the complex number.
		void polar();     				// to display the polar form.
		void eular();                  // to display the eular form.
	    double getc();                // to get the real conjugate.
		double getr()const;			 // to get the iamginary conjugate.
		double magnitude();           // to display the magnitude.
		double angle();              // to display the angle.

};

#endif // COMPLEX_H

