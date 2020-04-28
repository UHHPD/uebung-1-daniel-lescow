#include<iostream>
#include<fstream>
#include<cmath>

int main() {

  int sum, c, i;
  int const n = 234;
  double mit, var, abw;

  c = 0;
  std::ifstream fin("datensumme.txt");
  for(i=0; i<n; ++i) {

    fin >> c;
    sum += c;

  }
  
  mit = sum / n;

  c= 0;
  std::ifstream fin2("datensumme.txt");
  for(i=0; i<n; ++i) {

    fin2 >> c;
    var += pow((c - mit), 2);

  }

  var /= n;

  abw = sqrt(var);

  fin.close();
  fin2.close();

  std::cout << "Mittelwert:  " << mit << std::endl;
  std::cout << "Varianz:  " << var << std::endl;
  std::cout << "Standardabweichung:  " << abw << std::endl;
}