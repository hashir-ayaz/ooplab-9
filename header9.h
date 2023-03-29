//hashir ayaz 22i2407
#include <iostream>
using namespace std;



//q1
string Months[] ={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};

class DayOfYear{
    int dayofyear;

public:

DayOfYear(int d){};
void print(){

}
string convertTo(int dayofyear){
    
};



};//class ends here


//q2

class Matrix{
int rows;
int columns;
int**Ptr;

public:
Matrix (int r, int c){};

bool operator <(const Matrix& right){};

void operator+=(const Matrix& right){};

void operator-=(const Matrix& right){};

void operator*=(const Matrix& right){};

Matrix operator++ (int){};

};//class ends here


//q3

class Money{
int dollars;
int cents;

public:
Money(){};
Money(int dollars,int cents){};
void operator++ (){};
Money operator++ (int){};

void operator-- (){};

Money operator-- (int){};

//x*=2

void operator*= (const Money& right){};
   

bool operator!= (const Money& right){};
    


friend ostream& operator<< (ostream &os, Money& right){};
    

friend istream & operator>> (istream & in,Money& right){};
   

~Money(){};
   



};//class ends here




int main(){
    
    
    
    
    
    
    return 0;}