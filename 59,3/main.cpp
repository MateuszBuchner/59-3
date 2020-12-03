#include <iostream>
#include <fstream>
using namespace std;

int liczba;

int iloczyn_cyfr(int x) {
  int wynik = 1;
  while (x > 0) {
  	wynik=wynik*(x%10); 
  	x=x/10; 
  }
  return wynik;
}

void zad53() {
  int tmp, wynik;
  
  int ile=0; 
  int min = 999999, max = 10;
  int t[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

  for (int i = 1; i < 1000; i++) {
    wynik = liczba;
    
    if (tmp == 1) {
	   	if (liczba < min) min = liczba;
	    if (liczba > max) max = liczba;
    }
  }
  
  cout << "Min tmp= 1: " << min << endl;
  cout << "Mak tmp= 1: " << max << endl;
  for (int i = 1; i < 9; i++) {
    cout << i << "=" << t[i] << " ";
  }
  cout << endl;
}

int main() {
  ifstream fin;
  fin.open("liczby.txt");
  for (int i = 0; i < 1000; i ++) {
    fin >> liczba;
  }
  fin.close();
  zad53();
}
