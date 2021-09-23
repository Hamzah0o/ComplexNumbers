#include<iostream>
#include "Complex.h"
#include<cmath>
using namespace std ;
Complex::Complex() 
{ real=0;imag=0;}

Complex::Complex(double s,double a)            //constructor
{real=s;imag=a;}

Complex::Copmlex(double xr)            //constructor
{ real=xr;  imag=0;}

Complex::Complex(double xi )            //constructor
{imag=xi;    real=0;}

void Complex::setComplexR(double R)         //set real part
        {real=R; }
        
void Complex::setComplexI(double I)            
         { imag=I;}
         
double Complex::getComplexR() const         //get real part
        {return real;}
        
double Complex::getComplexI () const 		//get imaginary part
        {return imag;}
        
Complex Complex::operator+(Complex c1)      //overloading operator for + sign 
{  Complex c2;
 c2.real=real+c1.real;
 c2.imag=imag+c1.imag;
 return c2;  }

Complex Complex::operator-(Complex c1)      //overloading operator for - sign 
{  Complex c2;
 c2.real=real-c1.real;
 c2.imag=imag-c1.imag;
 return c2;  }
 
 Complex Complex::operator*(Complex x)      //overloading operator for * sign 
 { Complex c;
 c.real=real*x.real-imag*x.imag;
 c.imag=x.real*imag+real*x.imag;
 return c ;
 }
 
 Complex Complex::operator/(Complex x)      //overloading operator for / sign 
 {Complex c ;
	c.real=(((real)*(x.real))+((imag)*(x.imag)))/(pow(x.real,2)+pow(x.imag,2));
	c.imag=(((x.real)*(imag))-((real)*(x.imag)))/(pow(x.real,2)+pow(x.imag,2));
return c ;
 }
 
 void Complex::display()			//display the numbers in rectangle form.
 { if(imag>0)  
 cout<<real<<"+"<<imag<<"i"<<endl;
 else 
 cout<<real<<imag<<"i"<<endl;
 }
 
void Complex::polar()		//display the numbers in polar form.
{
	double r,theta;
	r = sqrt((pow(real,2))+(pow(imag,2)));

    theta = atan(imag/real);
	
	theta = (theta*180)/3.141592654;
	cout<<r<<" [ cos"<<"("<<theta<<")"<<"+isin"<<"("<<theta<<") ]"<<endl;
    
}

void Complex::eular()		//display the numbers in eular form.
{
	
	double r,theta;
	r = sqrt((pow(real,2))+(pow(imag,2)));

    theta = atan(imag/real);
	
	theta = (theta*180)/3.141592654;
	cout<<r<<" e ^i("<<theta<<")"<<endl;
}
	
double Complex::getc()                 // to get the conjugate for the imaginary part.
{   return -1*imag;	
    }
double Complex::getr() const             // to get the conjugate for the real part.
        {return real;}	
	

void Complex::displayC()            // display the conjugate
{ double a; a=getc();
if(a>0)
	cout<<real<<"+"<<a<<"i"<<endl;
	else
	cout<<real<<a<<"i"<<endl;
}

 
 
 double Complex::magnitude()                //to get and display the magnitude.
 { double r ;	r = sqrt((pow(real,2))+(pow(imag,2)));
 return r ; }
 
double Complex::angle()                         //to get and display the angle.
{    double theta ;
    theta = atan(imag/real);
	theta = (theta*180)/3.141592654;
	return theta ; 
}

        
        
        
        
        
        
        
        

	

