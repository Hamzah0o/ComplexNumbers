#include <iostream>
#include <cmath>
#include"Complex.h"

using namespace std;

int main(){




Complex a(2,2),b(3,3),c;
double re , im ;

cout<<"the first number  ";
a.display();
cout<<"the second number ";
b.display();
cout<<"substraction ";c=a-b;c.display();
cout<<"multiplication ";c=a*b;c.display();
cout<<"division ";c=a/b;c.display();
cout<<"addition ";c=a+b;c.display();
cout<<"the polar form ";c.polar();
cout<<"the euler's form is: ";c.eular();
cout<<"the angle is: ";cout<<c.angle()<<endl;
cout<<"the magnitude is "<<c.magnitude()<<endl;
cout<<"the conjugate ";c.displayC();











system("pause");
return 0 ;
} 



