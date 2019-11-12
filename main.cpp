//
//  main.cpp
//  Harry Potter Incantations
//
//  Created by Sarahi Cardenas Trejo on 11/2/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
using namespace std;
#include <fstream>


int getChoiceOfSpell();
void displayMagic(int x);

//main function
int main() {
    
    cout << "This will display a list of incancations from the Harry Potter Universe. Type a number and hit enter to display the type of incantations you wish to see." << endl;
    int choiceOfSpell;
    choiceOfSpell = getChoiceOfSpell();
    
    while(choiceOfSpell != 4){
        switch(choiceOfSpell){
            case 1:
                displayMagic(1);
                break;
            case 2:
                displayMagic(2);
                break;
            case 3:
                displayMagic(3);
                break;
        }
        choiceOfSpell = getChoiceOfSpell();
    }
}

//getChoiceOfSpell function

int getChoiceOfSpell(){
    int choice;
    
    cout << "\n1 - charm" << endl;
    cout << "2 - spell" << endl;
    cout << "3 - curse" << endl;
    cout << "4 - quit\n" << endl;

    cin >> choice;
    return choice;
}

//displayMagic function
void displayMagic(int x){
    
    ifstream objectFile("spells.txt");//ifstream is for reading a file and ofstream is for writing in a file
    string name;
    double power;
    
    if(x==1){
        while(objectFile >> name >> power){
            if(power==0){
                cout << name << ' ' << power << endl;
            }
        }
    }
    if(x==2){
        while(objectFile >> name >> power){
            if(power>0){
                cout << name << ' ' << power << endl;
            }
        }
    }
    if(x==3){
        while(objectFile >> name >> power){
            if(power<0){
                cout << name << ' ' << power << endl;
            }
        }
    }
    
}











