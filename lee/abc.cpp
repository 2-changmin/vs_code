#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, sum = 0;

    ifstream fin("numbers.dat");
    if(!fin){
        cerr << "Error opening input file" << endl;
        return -1;
    }

    while(fin >> n){
        sum += n;
    }
    fin.close();

    ofstream fout("numbers.sum.txt");
    if(!fout){
        cerr << "Error opening input file" << endl;
        return -1;
    }
    fout << "гу= " << sum << endl;
    fout.close();
    cout << "Bye!" << endl;
    //cout << "гу= " << sum << endl;
    return 0;
}