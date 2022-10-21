#include<iostream>
#include "hashgorkem.cpp"

using namespace std;

int getHashValue(char* arr){
    int hashValue = 0;
    for(int i=0; arr[i] != '\0' ;i++){
        hashValue += (int) arr[i];
    }
    return hashValue;
}

int main(){

    hashgorkem table(10);

    char* affan = new char[6];
    affan[0]='A';
    affan[1]='F';
    affan[2]='F';
    affan[3]='F';
    affan[4]='N';
    affan[5]='\0';

    table.addElement(affan);

    char imran[] = {'I','M', 'R', 'A', 'N', '\0'};
    table.addElement(imran);
    //cout<< "imran: " << getHashValue(imran) << endl;

    char elhan[] = {'E','L', 'H', 'A', 'N', '\0'};
    table.addElement(elhan);
    //cout<< "elhan: " << getHashValue(elhan) << endl;

    char ervin[] = {'E','R', 'V', 'I', 'N', '\0'};
    table.addElement(ervin);
    //cout<< "ervin: " << getHashValue(ervin) << endl;

    char sinanovic[] = {'S','I', 'N', 'A', 'N', 'O', 'V', 'I', 'C', '\0'};
    table.addElement(sinanovic);
    //cout<< "sinanovic: " << getHashValue(sinanovic) << endl;

    char emre[] = {'E','M', 'R', 'E', '\0'};
    table.addElement(emre);
    //cout<< "emre: " << getHashValue(emre) << endl;

    char vedad[] = {'V','E', 'D', 'A', 'D', '\0'};
    table.addElement(vedad);
    //cout<< "vedad: " << getHashValue(vedad) << endl;

    char ismail[] = {'i','s', 'm', 'a', 'i', 'l', '\0'};
    table.addElement(ismail);// index 9 for size 10
    //cout<< "ismail: " << getHashValue(ismail) << endl;

    char fatima[] = {'F','A', 'T', 'I', 'M', 'A', '\0'};// index 4 for size 10
    table.addElement(fatima);
    //cout<< "fatima: " << getHashValue(fatima) << endl;

    char tryingH[] = {'t','r', 'y', 'i', 'n', 'g',  'H', '\0'};// index 1 for size 10
    table.addElement(tryingH);
    //cout<< "tryingH: " << getHashValue(tryingH) << endl;
    
    table.display();



    table.removeElement(tryingH);

    table.removeElement(fatima);

    table.removeElement(ismail);

    table.display();


    return 0;
}






