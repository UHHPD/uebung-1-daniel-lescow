#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  int i;
  double n = 234;
  double c,b, sumc, mit, var, abw;

  
  for(i=0; i<n; ++i) {
    fin >> c;
    sumc += c;
  }

  mit = sumc / n;
  std::cout << "Mittelwert:  " << mit << std::endl;


  std::ifstream fin2("datensumme.txt");
  for(i=0; i<n; ++i) {

    fin2 >> c;
    var += pow((c-mit), 2);

  }

  var /= n;
  std::cout << "Varianz:  " << var << std::endl;

  std::cout << "Abweichung:  " <<sqrt(var) << std::endl;

  fin.close();
  fin2.close();
}