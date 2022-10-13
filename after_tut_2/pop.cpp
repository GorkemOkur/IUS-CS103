/*
 * =====================================================================================
 *
 *       Filename:  pop.cpp
 *
 *    Description: 2D arrays by using old way. Pop(Pointer of pointer) are used to create the structer.
 *	
 *
 *        Version:  1.0
 *        Created:  13/10/22 22:52:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ -Wall pop.cpp -o pop (-Wall: All warnings, -o: output name(.exe) )
 *
 *         Author:  Ş. Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  IUS
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>

using namespace std;

int main(){

    int** arr;
    unsigned int row, col;

    cout<<"Please, enter the row count: ";
    cin>>row;
    
    cout<<"Please, enter the column count: ";
    cin>>col;

    if(row > 0 && col > 0){

        // memory allocation for the our matrix

        /* briefly, we are saying to compiler that we need a 
        *   
        *   ("int* of memory times row")
        * 
        *   __OR__
        * 
        *   ("the place for row times pointer of interger")
        * 
        *   on the memory.
        */
        arr = new int*[row];
        for (unsigned int i = 0; i < row; i++)
            arr[i] = new int[col];// Similarly, We are saying that we want to allocate place on the memory for each row([i]) col times int.

        for (unsigned int i = 0; i < row; i++)
            for (unsigned int j = 0; j < col; j++)
                arr[i][j] = i + j;
        
        for (unsigned int i = 0; i < row; i++)
            for (unsigned int j = 0; j < col; j++)
                cout<< arr[i][j] << ( j != col-1 ? " - " : "\n" );
    }


    return 0;
}
