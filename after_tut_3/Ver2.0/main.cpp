/*
 * =====================================================================================
 *
 *       Filename:  hashgorkem.cpp
 *
 *    Description:  A brief example of how to implement VERY PRIMITIVE HASH TABLE.
 *	
 *
 *        Version:  2.0 BETA
 *        Created:  21/10/22 23:00:00
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
#include "hashgorkem.cpp"

using namespace std;


int main(){

    hashgorkem table(10);

    int affan = 0;
    table.addElement(affan);

    int imran = 1;
    table.addElement(imran);
    //cout<< "imran: " << getHashValue(imran) << endl;

    int elhan = 2;
    table.addElement(elhan);
    //cout<< "elhan: " << getHashValue(elhan) << endl;

    int ervin = 3;
    table.addElement(ervin);
    //cout<< "ervin: " << getHashValue(ervin) << endl;

    int sinanovic = 4;
    table.addElement(sinanovic);
    //cout<< "sinanovic: " << getHashValue(sinanovic) << endl;

    int emre = 5;
    table.addElement(emre);
    //cout<< "emre: " << getHashValue(emre) << endl;

    int vedad = 6;
    table.addElement(vedad);
    //cout<< "vedad: " << getHashValue(vedad) << endl;

    int ismail = 7;
    table.addElement(ismail);// index 9 for size 10
    //cout<< "ismail: " << getHashValue(ismail) << endl;

    int fatima = 8;// index 4 for size 10
    table.addElement(fatima);
    //cout<< "fatima: " << getHashValue(fatima) << endl;

    int tryingH = 9;// index 1 for size 10
    table.addElement(tryingH);
    //cout<< "tryingH: " << getHashValue(tryingH) << endl;
    
    table.display();

    cout<<"\n\n\n";

    table.removeElement(tryingH);

    table.removeElement(fatima);

    table.removeElement(ismail);

    table.display();


    return 0;
}






