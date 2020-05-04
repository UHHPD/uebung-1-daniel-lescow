#include<iostream>
#include<fstream>
#include<cmath>

int main() {

  int i;
  double n = 234;
  double c, sumc, mit, var, abw;

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

      fin2 >> c;
      var += pow((c - mit), 2);
      
    }

    var /= 9;
    //std::cout << "Varianz:  " << var << std::endl;
    fout2 << var << std :: endl ;
    var = 0;
  }

  sumc = 0;
  std::ifstream fin3("mittelwerte.txt");
  for (i=0; i<26; ++i) {

    fin3 >> c;
    sumc += c;

  }

  mit = sumc / 26;
  //fout << mit << std::endl;
  std::cout << "Mittelwert:  " << mit << std::endl;


  sumc = 0;
  std::ifstream fin4("varianzen.txt");
  for (i=0; i<26; ++i) {

    fin4 >> c;
    sumc += c;

  }

  mit = sumc / 26;
  //fout2 << mit << std::endl;
  std::cout << "Mittelwert:  " << mit << std::endl;

  fin.close();
  fin2.close();
  fin3.close();
  fin4.close();
  fout.close();
  fout2.close();

}
