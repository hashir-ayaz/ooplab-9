#include <iostream>
#include <string>
using namespace std;

string Months[] ={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};

class DayOfYear{
    int dayofyear;

public:

DayOfYear(int d){
    dayofyear=d;
}
void print(){

}
string convertTo(int dayofyear){
    string myString="";
    if (dayofyear<=31)
    {
        myString=Months[0];
    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[1];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[2];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[3];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[4];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[5];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[6];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[7];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[8];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[9];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[10];

    }
    if (dayofyear>=31 && dayofyear<=61)
    {
        myString=Months[11];

    }
    
}



};//class ends here





int main(){return 0;}