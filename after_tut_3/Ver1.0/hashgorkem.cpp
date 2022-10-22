/*
 * =====================================================================================
 *
 *       Filename:  hashgorkem.cpp
 *
 *    Description:  A brief example of how to implement VERY PRIMITIVE HASH TABLE.
 *	
 *
 *        Version:  1.0 BETA
 *        Created:  21/10/22 02:00:00
 *       Revision:  none
 *       Compiler:  g++
 *   Compile code:  g++ -Wall hashgorkem.cpp -o hashgorkem (-Wall: All warnings, -o: output name(.exe) )
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
    int size;
    
public:
    
    hashgorkem(int size){
        this->size = size;
        table = new int[size];
        for(int i = 0; i< size ;i++)
            table[i] = -1;
    }




    int getHashValue(char* name){
        //cout<<"______getHashValue______\n\n";

        int hashValue = 0;

        for(int i=0; name[i] != '\0' ;i++)
            hashValue+=(int)name[i];
        
        return hashValue;
    }





    int getIndex(int hashValue){
        return hashValue%size;
    }





    bool addElement(char* name){
        //cout<<"______addElement______\n\n";

        int hashValue = getHashValue(name);

        int index = getIndex(hashValue);

        if(table[ index ] == -1){

            table[index] = hashValue;

            return true;
        }else{
            cout<< "Required place was already occupied..." << endl << "Index: " << index << endl << "Name: " << name;
        }

        return false;
    }





    void display(){
        cout<<" ___________\n|           |\n|   TABLE   |\n|___________|\n";
        for(int i=0; i < size ; i++){
            if(table[i] == -1)
                cout<<"|           |\n|     "<<i<<"     |----> Empty\n|___________|\n";
            else
                cout<<"|           |\n|     "<<i<<"     |----> "<<table[i]<<"\n|___________|\n";
        }
        
    }








    bool removeElement(char* name){
        //cout<<"______addElement______\n\n";

        int hashValue = getHashValue(name);

        int index = getIndex(hashValue);

        if(table[ index ] != -1){

            table[index] = -1;

            return true;
        }else{
            cout<< "Required place was already Empty..." << endl << "Index: " << index << endl << "Name: " << name;
        }

        return false;
    }








};
