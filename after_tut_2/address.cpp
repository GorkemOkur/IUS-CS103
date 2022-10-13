#include<iostream>

using namespace std;

// It's a just function parameter but becareful 
void func(int *function_parameter){
    cout<<"        Function parameter(Pointer): "<< *function_parameter <<endl;
    cout<<"Function parameter(Without pointer): "<< function_parameter  <<endl;
}

int main(){

    int variable = 20;

    int *pointer_variable = &variable;

    // We are sending the reference of variable.
    func(pointer_variable);

    cout<<"                           Variable: "<< variable  <<endl;
    cout<<"                 Adress of Variable: "<< &variable <<endl;

    cout<<"  Pointer variable(Without pointer): "<< pointer_variable  <<endl;
    cout<<"          Pointer variable(Pointer): "<< *pointer_variable <<endl;

    return 0;
}