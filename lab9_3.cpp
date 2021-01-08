#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    int num=0;
    double sum=0, sumsta=0, fin, avg;
    string textline;
    while (getline(source,textline))
    {
      sum += stod(textline);
      sumsta = sumsta + stod(textline)*stod(textline);
      num++;
    }
    cout << "Number of data = "<< num << '\n';
    cout << setprecision(3);
    avg = sum/num;
    cout << "Mean = "<< avg << '\n';
    fin = sumsta/num - avg*avg;
    cout << "Standard deviation = " << sqrt(fin) <<'\n';
    source.close();
    return 0;
}