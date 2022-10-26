#include    <iostream>
#include    <iomanip>
using namespace std;

void getinput(int, int, int);
void maxmin(int &, int &, int &, int &, int &);

void maxmin(int &num1, int &num2, int &num3, int &max, int &min){
    if(num1>num2){
        if(num1>num3)
            max = num1;
        else{
            max = num3;
            min = num2;
        }
        if(num2>num3)
            min = num3;
        else
            min = num2;
    }
    else{
        if(num2> num3)
            max = num2;
        else{
            max = num3;
            min = num1;
        }
        if(num1>num3)
            min = num3;
        else
            min = num1;
    }
}

// complete the function maxmin( )