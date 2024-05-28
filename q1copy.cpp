//Reading and copying file content and writing to another file

#include<iostream>
#include <stdlib.h>
#include<fstream>

using namespace std;

int main(){
    string data;
    ifstream fin("example1.txt");
    ofstream fout("example2.txt", ios::app);

    if(!fin){
        cout << "Error in reading file!" << endl;
        exit(0);
    }
    if(!fout){
        cout << "Error in writing to file !" << endl;
        exit(0);
    }
    while(getline(fin,data)){
        fout << data << endl;
    }
    cout << "\nData transferred to file. \nOpen file to check. \n";

    fin.close();
    fout.close();
}