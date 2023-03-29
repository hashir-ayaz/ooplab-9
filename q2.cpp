#include <iostream>
using namespace std;

class Matrix{
int rows;
int columns;
int**Ptr;

public:
Matrix (int r, int c){
    Ptr=new int*[r];

    for (int i = 0; i < r; i++)
    {
        Ptr[i]=new int[c];
    }
    
}

bool operator <(const Matrix& right){
    bool match=true;

    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            if (Ptr[i][j]!=right.Ptr[i][j])
            {
                match=false;
            }
            
        }
        
    }
    return match;
}

void operator+=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]+=right.Ptr[i][j];
            
        }
        
    }
}

void operator-=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]-=right.Ptr[i][j];
            
        }
        
    }
}

void operator*=(const Matrix& right){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]*=right.Ptr[i][j];
            
        }
        
    }
}

Matrix operator++ (int){
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->Ptr[i][j]++;
            
        }
        
    }
}

};//class ends here






int main(){return 0;}