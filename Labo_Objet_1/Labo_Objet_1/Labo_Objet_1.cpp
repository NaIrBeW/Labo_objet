
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

void exercice1(void) {
	int num1,num2,num3,num4;

	cout << "Entrez vos quatres nombres\n" << endl;

	cin >> num1 >> num2 >> num3 >> num4; // On demande à l'utilisateur d'entrer 4 nombres


	int sum = num1 + num2 + num3 + num4;
	int moyenne = sum / 4;
	int produit = num1 * num2 * num3 * num4;
	int max = 1;

	for (int i = 1; i <= 4; i++) {
		if (i == 1) {
			max = num1;
		}
		else if (i == 2) {
			if (num2 > max) {
				max = num2;
			}
		}
		else if (i == 3) {
			if (num3 > max) {
				max = num3;
			}
		}
		else if (i == 4) {
			if (num4 > max) {
				max = num4;
			}
		}
	}
	int min = 1;

	for (int i = 1; i <= 4; i++) {
		if (i == 1) {
			min = num1;
		}
		else if (i == 2) {
			if (num2 < min) {
				min = num2;
			}
		}
		else if (i == 3) {
			if (num3 < min) {
				min = num3;
			}
		}
		else if (i == 4) {
			if (num4 < min) {
				min = num4;
			}
		}
	}
	cout << "somme: " << sum << "\n" << endl;
	cout << "moyenne: " << moyenne << "\n" << endl;
	cout << "produit: " << produit << "\n" << endl;
	cout << "max: " << max << "\n" << endl;
	cout << "min: " << min << "\n" << endl;
}

void exercice2(void) {
	static float pi = 3.14159;
	int rayon;

	cout << "Entrez votre rayon\n" << endl;
	cin >> rayon;

	float circon = rayon * 2 * pi;
	float aire = rayon * rayon * pi;

	cout << "Circonference: " << circon << "\n" << endl;
	cout << "Aire: " << aire << "\n" << endl;

}

void exercice3(void) {
	string nom; 

	cout << "Entrez votre nom\n" << endl;
	cin >> nom;

	cout << "Bonjour " << nom << endl;
}

void exercice4(void) {
	
	int bit = 0, num = 0;

	cout << "Entrez un nombre: " << endl;
	cin >> num;
	for (int i = 0; i < 32; i++) {
		if (1 << i & num) { // << sert a switcher 
			bit++;
		}
	}
	cout << "Votre nombre bit 1: " << bit << endl;

}

void exercice5(void) {

	int num = 0, i;

	cout << "Entrez un nombre: " << endl;
	cin >> num;

	for (i = 0; i < 8; i++) {
		num = (num ^ (1 << i)); // petit chapeau veut dire && || ensemble
	}

	cout << "Votre nombre bit inverser: " << num << endl;
	

}

void exercice6(void) {
	int num;

	cout << "Entrez un nombre: " << endl;
	cin >> num;

	if (num % 2 == 0) {
		cout << "Votre nombre est une puissance de 2" << endl;
	}
	else {
		cout << "Votre nombre n'est pas une puissance de 2" << endl;
	}
}

void exercice7(void) {
	int hauteur, i, c1,c2; 

	cout << "Entrez une hauteur : " << endl;
	cin >> hauteur;

	for (i = 1; i < hauteur / 2 + 2; i++) { // boucle triangle 1
		for (c1 = hauteur / 2 - i + 1; c1 >= 1;c1--) {
			cout << " ";
		}
		for (c2 = 0; c2 < i * 2 - 1; c2++) {
			cout << "*";
		}
		for (c1 = hauteur / 2 - i + 1;c1 >= 1; c1--) {
			cout << " ";
		}
		cout << "\n";
	}
	for (i = hauteur / 2; i > 0; i--) { // boucle triangle 2
		for (c1 = 1; c1 <= hauteur / 2 - i + 1;c1++) {
			cout << " ";
		}
		for (c2 = i * 2 - 1;c2 > 0;c2--) {
			cout << "*";
		}
		for (c1 = 1; c1 <= hauteur / 2 - i + 1;c1++) {
			cout << " ";
		}
		cout << "\n";
	}

}

void exercice8(void) {
	int ligne, i, c1, c2;

	cout << "Entrez un nombre" << endl;
	cin >> ligne;


	for (i = 1; i < ligne / 2 + 2; i++) { // boucle triangle 1
		for (c1 = ligne / 2 - i + 1; c1 >= 1;c1--) {
			cout << " ";
		}
		for (c2 = 0; c2 < i * 2 - 1; c2++) {
			cout << "*";
		}
		for (c1 = ligne / 2 - i + 1;c1 >= 1; c1--) {
			cout << " ";
		}
		cout << "\n";
	}
	
	for (i = 1; i <= ligne; i++) { // Ligne de la fleche 
		for (int c = ligne / 2; c > 0;c--) {
			cout << " ";
		}
		for (int j = i; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}


}

void exercice9(void) {
	int num =0, somme =0;

	cout << "Entrez votre numero: \n" << endl;
	cin >> num; 

	while (num > 0) {
		somme = somme + num % 10;
		num = num / 10;
	}

	cout << somme;
}

void exercice10(void) {
	int i, j, bin, num;

	cout << "Entrez votre numero: \n" << endl;
	cin >> num; 
	cout << "Votre numero binaire: \n" << endl; 
	for (i = 7; i >= 0; i--) {
		bin = 1 << i;
		j = num & bin;
		j == 0 ? cout << "0" : cout << "1";
	}

	
}

int main(int argc, char ** argv) {
	exercice8();

	return 0;
}


