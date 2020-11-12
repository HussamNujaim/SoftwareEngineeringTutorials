#include<iostream>
#include<conio.h>
#include <cmath>
#include <vector>
#include <ctime>
#include <sstream>
#include <string>
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
   int a=0,b=1,c=0;
   std::cout<<"The Fibonacci sequence : ";
   for(int i=0;i<rank;++i)
   {
        std::cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
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
/////////////////////////////////////////////
// Problem 5:
void TruthTable(short int gate)
{
    int Output;
    if(gate ==1) // AND
    {
        std::cout<<"The truth table of the AND gate is:"<<std::endl;
        std::cout<<"A \t B \t C \t\tAND"<<endl;
        for( int i=0;i<8;i++) // The length of the truth table 2^3 = 8
        {
            try {
                int input[3];
                for (int j = 0; j < 3; ++j) {
                    input[j] = (i >> j) & 1;
                }
                Output = input[0]&&input[1]&&input[2];
                std::cout<<input[2]<<" \t "<<input[1]<<" \t "<<input[0]<<" \t\t "<<Output<<endl;

            }  catch (exception ex) {

            std::cout<<"Error occured !! "<<std::endl;
            }

          }
    }
    else if(gate ==2) // OR
    {
        std::cout<<"The truth table of the OR gate is:"<<std::endl;
        std::cout<<"A \t B \t C \t\t OR"<<endl;
        for( int i=0;i<8;i++) // The length of the truth table 2^3 = 8
        {
            try {
                int input[3];
                for (int j = 0; j < 3; ++j) {
                    input[j] = (i >> j) & 1;
                }
                Output = input[0]||input[1]||input[2];
                std::cout<<input[2]<<" \t "<<input[1]<<" \t "<<input[0]<<" \t\t "<<Output<<endl;

            }  catch (exception ex) {

            std::cout<<"Error occured !! "<<std::endl;
            }

          }

    }
}
int main(void)
{
    do{
    std::cout<<"-----------\n";
    std::cout<<"Problem 1: Write a program which allows to compute Area and circumference of a circle.\n";
    std::cout<<"Problem 2: Write a function which allows to find the max and the min of a table.\n";
    std::cout<<"Problem 3: Write a function which allows to compute the Fibonacci sequence.\n";
    std::cout<<"Problem 4: Write a function which allows to display in the terminal any multiplication table.\n";
    std::cout<<"Problem 5: Write a function which allows to compute the truth table of the following operators.\n";
    std::cout<<"-----------\n";
    std::cout<<"Choose the number of the problem: ";
    int choice;
    std::cin>>choice;
    switch (choice) {
    case 1: { // Problem 1:
         double diameter;
         std::cout<<"Enter the diameter of the circle: ";
         std::cin>>diameter;
         std::cout<<std::endl;
         std::cout<<"The Area = "<<CircleMath(diameter)[0]<<std::endl;
         std::cout<<"The Circumference = "<<CircleMath(diameter)[1]<<std::endl;
    break;
    }
    case 2:{// Problem 2:
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
    break;
    }
    case 3:{// Problem 3 - Fibonacci sequence:
        int rank;
        std::cout<<"Enter the rank of the Fibonacci sequence ";
        std::cin>>rank;
        Fibonacci(rank);
    break;
    }
    case 4:{ // Problem 4 - Multiplicatoin Table:
        int number,range;
        std::cout<<"Enter the number to get its multiplication table: ";
        std::cin>>number;
        std::cout<<"Enter the range of the multiplication table: ";
        std::cin>>range;
        MultiplicationTable(number,range);
    break;
    }
    case 5:{ // Problem 5: The Truth Table:
        short int gate;
        std::cout<<"Enter the number of the gate And(1) ; OR(2):";
        std::cin>>gate;
        TruthTable(gate);
    break;
    }
    default:{
        return 0;
    }
    }

    }
    while(true);
return 0;
}

