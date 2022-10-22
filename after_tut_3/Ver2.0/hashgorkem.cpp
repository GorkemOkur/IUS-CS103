/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  A brief example of how to implement VERY PRIMITIVE HASH TABLE.
 *	
 *
 *        Version:  2.0 BETA
 *        Created:  21/10/22 23:00:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ -Wall main.cpp -o main (-Wall: All warnings, -o: output name(.exe) )
 *
 *         Author:  Ş. Görkem Okur - gorkemokur@gmail.com
 *   Organization:  IUS
 *
 *   All the evolution we know of proceeds from the vague to the definite.
 *   — Charles Sanders Peirce
 * =====================================================================================
 */

#include<iostream>

using namespace std;

class hashgorkem{

private:

    int* table;
    int occupied;
    int size;
    
public:
    
    hashgorkem(int size){
        init(size);
    }



    int getIndex(int hashValue){
        return hashValue%size;
    }


    bool addElement(int data){
        //cout<<"______addElement______\n\n";
        if( occupied > (0.7*size) )
            reHash();

        int index = getIndex(data);

        if(table[ index ] == -1){

            table[index] = data;
            occupied++;
            return true;
        }else if(data != -1){
            cout<< "Required place was already occupied..." << endl << "Index: " << index << "    -    DATA: " << data<<endl;
        }

        return false;
    }


















    void display(){
        cout<<" _______\n|\033[4m TABLE \033[0m|";
        for(int i=0; i < size ; i++){
            if(table[i] == -1)
                cout<<"\033[4m\n|   "<<i<<"   \033[0m|----> Empty";
            else
                cout<<"\033[4m\n|   "<<i<<"   \033[0m|----> "<<table[i];
        }
        
    }








    bool removeElement(int data){
        //cout<<"______addElement______\n\n";

        int index = getIndex(data);

        if(table[ index ] != -1){

            table[index] = -1;

            occupied--;
            return true;
        }else{
            cout<< "Required place was already Empty..." << endl << "Index: " << index << endl << "DATA: " << data;
        }

        return false;
    }











    private:




    void init(int size){
        this->size = size;
        this->occupied = 0;
        table = new int[size];
        for(int i = 0; i< size ;i++)
            table[i] = -1;
    }







    void reHash(){
        //Display the current table
        display();
        int tempSize = this->size;
        int* temp = new int[tempSize];
        for(int i=0; i < tempSize ;i++)
            temp[i] = table[i] != -1 ? table[i] : -1 ;

        init(size*2+1);

        //cout<<"PROGRAM ENTERED TO REHASH FUNCTION\n";
        cout<<" \n ";

        for(int i=0; i < tempSize ; i++)
            cout<<temp[i] <<" - ";

        cout<<" \n\n ";

        for(int i=0; i < tempSize ; i++)
            addElement(temp[i]);
        delete[] temp;
    }



};
