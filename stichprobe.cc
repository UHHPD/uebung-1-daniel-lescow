#include<iostream>
#include<fstream>
#include<cmath>

int main() {

  int i;
  double n = 234;
  //double n = 26;
  double c, sumc, mit, var, abw;

  std::ifstream fin("datensumme.txt");  //=> Mit=2,808  Var=1,463
  //std::ifstream fin("mittelwerte.txt"); => Mit=3,115  (Var=0,299)
  //std::ifstream fin("varianzen.txt");   => Mit=2,436  (Var=1,687)

  //Der Mittelwert und die Varianz der datensumme.txt sind kleiner. 

  for (i=0; i<n; ++i) {

    fin >> c;
    sumc += c;

  }

  mit = sumc / n;
  std::cout << "Mittelwert:  " << mit << std::endl;


  std::ifstream fin2("datensumme.txt");
  //std::ifstream fin2("mittelwerte.txt"); 
  //std::ifstream fin2("varianzen.txt"); 
  for (i=0; i<n; ++i) {

    fin2 >> c;
    var += pow((c - mit), 2);

  }

  var /= n;
  std::cout << "Varianz:  " << var << std::endl;

  std::cout << "Abweichung:  " <<sqrt(var) << std::endl;

  fin.close();
  fin2.close();
}