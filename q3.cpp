#include <iostream>
#include <string>
using namespace std;

class Money{
int dollars;
int cents;

public:
Money(){
    dollars=0;
    cents=0;
}
Money(int dollars,int cents){
    this->dollars=dollars;
    this->cents=cents;
}
void operator++ (){
    ++dollars;
    ++cents;

}
Money operator++ (int){
    Money answer;

    this->dollars=answer.dollars+1;
    this->cents=answer.cents+1;

    return answer;
}

void operator-- (){
    --dollars;
    --cents;

}

Money operator-- (int){
    Money answer;

    this->dollars=answer.dollars-1;
    this->cents=answer.cents-1;

    return answer;
}

//x*=2

void operator*= (const Money& right){
    this->dollars*=right.dollars;
    this->cents*=right.cents;
}

bool operator!= (const Money& right){
    bool match=true;

    if (this->dollars!=right.dollars)
    {   
        match=false;
    }
    if (this->cents!=right.cents)
    {   
        match=false;
    }
    
    return match;
}

friend ostream& operator<< (ostream &os, Money& right){
    os<<right.dollars;
    os<<right.cents;
    return os;
}

friend istream & operator>> (istream & in,Money& right){
    in>>right.dollars;
    in>>right.cents;
    return in;
}

~Money(){
    cout<<"end";
}



};//class ends here




int main(){
    
    
    
    
    return 0;}