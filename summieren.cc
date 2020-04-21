#include<fstream> //für Ein- und Ausgabe der Files
#include<iostream> //für Ein- und Ausgabe des Terminals

int main() {
  std::ifstream fin("daten.txt"); //Öffnen der Ausgabedatei 
  std::ofstream fout("datensumme.txt"); //Öffnen der Eingabedatei

  int a; //Variable für den ersten Summanden
  int b; //Variable für den zweiten Summanden
  int c; //Variable für die Summe
  
  while(! fin.eof()) { //while Schleife läuft bis zum Ende der daten.txt
  
    fin >> a; //Lesen der ersten Zahl
    fin >> b; //Lesen der zweiten Zahl
  
    c = a + b; //Addition der Zahlen
   
    //std :: cout << c << std :: endl ; //Ausgabe der Summe
    fout << c << std :: endl ; //Ausgabe in die Datensumme txt Datei
  }

  fin.close(); //Schließen der daten.txt
  fout.close(); //Schließen der datensumme.txt
}