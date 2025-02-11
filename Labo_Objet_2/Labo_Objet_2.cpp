

#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
#include <ctype.h>
#include <cstring>
#include <algorithm>
#include <sstream>
using namespace std;
//https://www.geeksforgeeks.org/swap-in-cpp/ (exercice 4, comprehension de la fonction swap **PAS COPIER**)
//https://www.geeksforgeeks.org/stringstream-c-applications/ (comprehension stringstream)
//https://www.geeksforgeeks.org/stdstoi-function-in-cpp/ (fonction stoi et comprehension) 

void exercice1() {
    string mot;
    cout << "Entrez un mot" << endl;
    getline(std::cin, mot); 

    for (int i = 0; i<mot.size(); i++) {
        mot[i] += 1; 
    }
    
    cout << mot << endl;
    

};

void exercice2() {
    string phrase;
    cout << "Entrez une phrase" << endl;
    getline(std::cin, phrase); 
     

    for (int i = 0; i < phrase.size(); i++) {
        phrase[0] = toupper(phrase[0]);
        if (phrase[i] == ' ') {
            phrase[i + 1] = toupper(phrase[i + 1]);
        }
    }

    cout << phrase << endl; 
};

void exercice3() {
    string phrase;
    int mot = 0, pluslong = 0;
    cout << "Entrez une phrase" << endl;
    getline(std::cin, phrase); 
    int end_char = 0;
    for (int i = 0; phrase[i]!='\0'; i++) {
        if (isalpha(phrase[i])) {
            ++mot;
            if (mot > pluslong) {
                pluslong = mot;
                end_char = i +1;
            }
        }
        else {
            mot = 0; 
        }
    }
    char* word = &phrase[end_char - pluslong];
    word[pluslong] = '\0';
    std::cout << word << std::endl;
    
         


};

void exercice4() {
    string mot, temp;
    int i = 0, j;

    cout << "Entrez un mot pour determiner si cela est un palindrome" << endl;
    getline(std::cin, mot); 

    temp = mot;

    j = mot.length() - 1;

    while (i < j) {
        swap(mot[i], mot[j]);
        i++;
        j--;
    }

    if (temp == mot) {
        cout << "Votre mot est un palindrome" << endl;
    }
    else {
        cout << "Votre mot n'est pas un palindrome" << endl;
    }
    

};

void exercice5() {
    string phrase;
    int i = 0, check,sum = 0;

    cout << "Entrez une phrase avec des nombres a additionner" << endl;
    getline(std::cin, phrase);

    stringstream ss(phrase); // Creer un flux de texte a partir de la phrase
    string word;

    while (ss >> word) {
        if (isdigit(word[0])) { // Verifier si le mot commence par un chiffre
            sum += stoi(word); // stoi sert a convertir le mot en entier (int) et l'ajouter a la somme
        }
    }
    cout << "Somme des nombres dans la phrase: " << sum << endl;
};




int main()
{
    exercice5();
}

