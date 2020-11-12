#include<iostream>
#include<conio.h>
#include <cmath>
#include <vector>
#include <ctime>
using namespace std;




// Problem 1:
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
////////////////////////////////////////

// Problem 2:
typedef vector< vector<int> > Table;
int * GetMinMaxValue(Table& table)
{
    int numberOfRows=table.size();
    int numberOfCoulumns=table[0].size();
    //Finding the maximum value
    int max= table[0][0]; //Choosing the first element as the maximum value initially
    int min = table[0][0]; //Choosing the first element as the minimum value initially
    for(int i=0;i<numberOfRows;i++)
    {
        for(int j=0;j<numberOfCoulumns;j++)
        {
            if(max<table[i][j])  // if the current value is greater than the old value, then change the old value with the current one
                max=table[i][j];
            if(min>table[i][j]) // if the current value is less than the old value, then change the old value with the current one
                min=table[i][j];
        }
    }
    int MinMax[2] = {min,max};
return MinMax;
}
//////////////////////////////////////////
// Problem 3:
void Fibonacci(int rank)
{
   int a=0,b=1,c;
   std::cout<<"The Fibonacci sequence : ";
   for(int i=0;i<rank;++i)
   {
    if(i<2)
        std::cout<<i<<" "; // prints the first two elements of the sequence
    else
    {
        c=a+b;
        std::cout<<c<<" ";
        a=b;
        b=c;
    }
   }
   std::cout<<std::endl;
}
//////////////////////////////////////////////
// Problem 4:
void MultiplicationTable(int number, int range)
{
    std::cout<<"The multiplication table of "<<number<<" is: "<<std::endl;
    for(int i=1;i<=range;i++)
    {
        std::cout<<number<<" * "<<i<<" = "<<number*i<<std::endl;
    }
    std::cout<<std::endl;
}

int main(void)
{
    // Problem 1:
   /* double diameter;
    std::cout<<"Enter the diameter of the circle: ";
    std::cin>>diameter;
    std::cout<<std::endl;
    std::cout<<"The Area = "<<CircleMath(diameter)[0]<<std::endl;
    std::cout<<"The Circumference = "<<CircleMath(diameter)[1]<<std::endl;

    // Problem 2:
    int numberOfRows, numberOfCoulumns;
    std::cout<<"Enter the number of rows: ";
    std::cin>>numberOfRows;
    std::cout<<"Enter the number of columns: ";
    std::cin>>numberOfCoulumns;
    std::cout<<std::endl;
   // int table[numberOfRows][numberOfCoulumns];
    //Table initialization
    Table table( numberOfRows,vector<int>(numberOfCoulumns,0));
    srand((unsigned int)time(NULL)); //Helps in getting different random numbers each time
    for(int i=0;i<numberOfRows;i++)
    {
        for(int j=0;j<numberOfCoulumns;j++)
        {

            table[i][j]=(rand() % 99) + 1;  // Initializing random values to the table
            std::cout<<table[i][j]<<" "; // Displaying the values of the table
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    int min= GetMinMaxValue(table)[0];
    int max= GetMinMaxValue(table)[1];
    std::cout<<"The Minimum value is = " << min;
    std::cout<<std::endl;
    std::cout<<"The Maximum value is = " << max;
    std::cout<<std::endl;

    ///////////////////////////////////
    // Problem 3 - Fibonacci sequence:
     int rank;
     std::cout<<"Enter the rank of the Fibonacci sequence ";
     std::cin>>rank;
     Fibonacci(rank);
 */
    ///////////////////////////////////
    // Problem 4 - Multiplicatoin Table:
    int number,range;
    std::cout<<"Enter the number: ";
    std::cin>>number;
    std::cout<<"Enter the range of the multiplication table: ";
    std::cin>>range;
    MultiplicationTable(number,range);

return 0;
}

