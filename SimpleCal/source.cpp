//
//  source.cpp
//  SimpleCal
//
//  Created by 서형중 on 2018. 5. 25..
//

int Implement(int A, int B);
int Substraction(int A, int B);
int Multiplication(int A, int B);
int Division(int A, int B);
int Remainder(int A, int B);

#include <iostream>
using namespace std;

int main(){
    int A, B
    char Op
    cin >> A >> Op >> B;
    
    if (B == 0 && Op == '/'){
        cout<< A <<"cannot divide by "<< B<<endl;
        break;
    }
    if (Op == '+') {
        Implement(A,B);
    }
    elseif (Op == '-') {
        Substraction(A,B);
    }
    elseif (Op == '*') {
        Multiplication(A,B);
    }
    elseif (Op == '/') {
        Division(A,B);
    }
    
    return 0;
}

int Implement(int A, int B)
{
    cout << A + B << endl;
}
int Substraction(int A, int B)
{
    cout << A - B << endl;
}
int Multiplication(int A, int B)
{
    cout << A * B << endl;
}
int Division(int A, int B);
int Remainder(int A, int B);
