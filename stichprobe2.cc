#include<iostream>
#include<fstream>
#include<cmath>

int main() {

  int i;
  double n = 234;
  double c, c2, sumc, mit, var, abw;

  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  for (int j=0;j<26; ++j) {
    for (i=0; i<9; ++i) {

      fin >> c;
      sumc += c;
    
    }
    mit = sumc / 9;
    //std::cout << "Mittelwert:  " << mit << std::endl;
    fout << mit << std :: endl ;
    sumc = 0;

    for (i=0;i<9;++i) {

      fin2 >> c2;
      var += pow((c2 - mit), 2);
      
    }

    var /= 9;
    //std::cout << "Varianz:  " << var << std::endl;
    fout2 << var << std :: endl ;
    var = 0;
  }

  fin.close();
  fin2.close();
  fout.close();
  fout2.close();
}
