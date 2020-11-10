#include<iostream>
#include<conio.h>
#include <cmath>

double * CircleMath(int diameter)
{
double Area,Circumference;
Area = (3.14 * pow(diameter,2)) / 4; //Area = (pi * diameter^2) / 4
Circumference = 3.14*diameter;       //Circumference =  pi * diameter
double static  circleMath[2];
circleMath[0] = Area;
circleMath[1]= Circumference;
return circleMath;
}

int main(void)
{
    double diameter;
    std::cout<<"Enter the diameter of the circle: ";
    std::cin>>diameter;
    std::cout<<std::endl;
    std::cout<<"The Area = "<<CircleMath(diameter)[0]<<std::endl;
    std::cout<<"The Circumference = "<<CircleMath(diameter)[1]<<std::endl;

return 0;
}
