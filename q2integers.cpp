/* Read all the integers from an input file and
   write the average to an output file        */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    string line;

    if(!fin){
        cout << "Error in reading file!" << endl;
        exit(0);
    }
    if(!fout){
        cout << "Error in writing to file !" << endl;
        exit(0);
    }

    double sum = 0.0, average = 0.0;
    double count_num = 0.0;

    if (fin.is_open()) {
        double number;

        while (fin >> number) {
          sum += number;
          count_num++;
        }
        fin.close();
    }
    else {
      cout << "Failed to open the file." << endl;
    }

    if (count_num > 0) {
        average = sum / count_num;
        cout << "Average written to file..." << endl;
        fout << average << endl;
        fout.close();
    }
    else {
        cout << "No numbers found in the file." << endl;
    }

    cout << "Average: " << average <<  endl;

    return 0;
}