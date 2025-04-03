#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    double sum, average, score = 0;
    double maxnum = -101;
    int cnt = 0;
    string name;
    string max_name;

    ifstream fin("scores.txt");
    ofstream fout("result.txt");
    if(!fin){cerr << "Error opening scores.txt"; return -1;}
    if(!fout){cerr << "Error opening result.txt"; return -1;}
    while(fin >> name >> score){
        if(maxnum < score){maxnum = score; max_name = name;}
        cnt++;
        sum += score;
    }
    average = sum / cnt;
    fout << fixed << setprecision(2) << showpoint;
    fout << "총 " << cnt << " 명" << endl;
    fout << "합계: " << sum << endl;
    fout << "평균: " << average << endl;
    fout << "최고점: " << max_name << " " << maxnum << endl;
    cout << "Results saved in result.txt" << endl;
    fin.close();
    fout.close();
    return 0;   
}