#include <iostream>
#include <string>
#include <windows.h> 
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

struct {
	int IQ;
	string name;
	char gender;
}player;
struct moves {
	int pow, acc;
	string name;

};
struct {
	int health = 50;
	string name = "fruitle";
	moves move1;
	moves move2;
	moves move3;
}fruitle;
struct {
	int health = 45;
	string name = "chairmander";
	moves move1;
	moves move2;
	moves move3;
}chairmander;
struct {
	int health = 55;
	string name = "pulpasaur";
	moves move1;
	moves move2;
	moves move3;
}pulpasaur;
struct {
	int health = 40;
	string name = "trixachu";
	moves move1;
	moves move2;
	moves move3;
}trixachu;
struct {
	int health = 60;
	string name = "geoguy";
	moves move1;
	moves move2;
	moves move3;
}geoguy;
struct {
	int health = 20;
	string name = "butterpie";
	moves move1;
	moves move2;
	moves move3;
}butterpie;
struct {
	int health = 25;
	string name = "needle";
	moves move1;
	moves move2;
	moves move3;
}needle;
struct {
	int health = 70;
	string name = "trollax";
	moves move1;
	moves move2;
	moves move3;
}trollax;

/*void givemoves() {

	fruitle.move1.name = "Tackle";
	fruitle.move1.pow = 10;
	fruitle.move1.acc = 95;
	fruitle.move2.name = "Water Gun";
	fruitle.move2.pow = 20;
	fruitle.move2.acc = 85;
	fruitle.move3.name = "Hydro Pump";
	fruitle.move3.pow = 35;
	fruitle.move3.acc = 55;
	chairmander.move1.name = "Tackle";
	chairmander.move1.pow = 12;
	chairmander.move1.acc = 95;
	chairmander.move2.name = "Flamethrower ";
	chairmander.move2.pow = 25;
	chairmander.move2.acc = 82;
	chairmander.move3.name = "Fire Blast";
	chairmander.move3.pow = 40;
	chairmander.move3.acc = 52;
	pulpasaur.move1.name = "Tackle";
	pulpasaur.move1.pow = 8;
	pulpasaur.move1.acc = 95;
	pulpasaur.move2.name = "Razor Leaf";
	pulpasaur.move2.pow = 17;
	pulpasaur.move2.acc = 88;
	pulpasaur.move3.name = "SolarBeam";
	pulpasaur.move3.pow = 30;
	pulpasaur.move3.acc = 59;
	trixachu.move1.name = "Tackle";
	trixachu.move1.pow = 8;
	trixachu.move1.acc = 95;
	trixachu.move2.name = "Spark";
	trixachu.move2.pow = 15;
	trixachu.move2.acc = 83;
	trixachu.move3.name = "Thunder";
	trixachu.move3.pow = 25;
	trixachu.move3.acc = 55;
	geoguy.move1.name = "Tackle";
	geoguy.move1.pow = 11;
	geoguy.move1.acc = 95;
	geoguy.move2.name = "Rock throw";
	geoguy.move2.pow = 22;
	geoguy.move2.acc = 75;
	geoguy.move3.name = "Earthquake";
	geoguy.move3.pow = 35;
	geoguy.move3.acc = 50;
	butterpie.move1.name = "Tackle";
	butterpie.move1.pow = 5;
	butterpie.move1.acc = 95;
	butterpie.move2.name = "String shot";
	butterpie.move2.pow = 11;
	butterpie.move2.acc = 85;
	butterpie.move3.name = "Bug Buzz";
	butterpie.move3.pow = 20;
	butterpie.move3.acc = 57;
	needle.move1.name = "Tackle";
	needle.move1.pow = 5;
	needle.move1.acc = 95;
	needle.move2.name = "Leech life";
	needle.move2.pow = 12;
	needle.move2.acc = 84;
	needle.move3.name = "Twin needle";
	needle.move3.pow = 21;
	needle.move3.acc = 56;
	trollax.move1.name = "Tackle";
	trollax.move1.pow = 15;
	trollax.move1.acc = 95;
	trollax.move2.name = "Body slam";
	trollax.move2.pow = 25;
	trollax.move2.acc = 80;
	trollax.move3.name = "HyperBeam";
	trollax.move3.pow = 40;
	trollax.move3.acc = 60;

}*/
int btlmoveselect(int macc1, int macc2, int macc3, int mpow1, int mpow2, int mpow3, string mname1, string mname2, string mname3, int khp, string kname, int ehp, string ekname) {
	int bmsleep = 350, bmsmovech;

	Sleep(bmsleep);
	cout << "\n\t" << kname << "'s HP: " << khp << "\t\t" << ekname << "'s HP: " << ehp << "\n\n";
	cout << "Pick a move.\n";
	Sleep(bmsleep);
	cout << "\t>> 1." << mname1 << " (Damage:" << mpow1 << ", Accuracy:" << macc1 << "%)" << endl;
	Sleep(bmsleep);
	cout << "\t>> 2." << mname2 << " (Damage:" << mpow2 << ", Accuracy:" << macc2 << "%)" << endl;
	Sleep(bmsleep);
	cout << "\t>> 3." << mname3 << " (Damage:" << mpow3 << ", Accuracy:" << macc3 << "%)" << endl;
	Sleep(bmsleep);
	cout << "Enter your choice: ";
	cin >> bmsmovech;
	while (bmsmovech < 1 || bmsmovech > 4) {
		cout << "There is no move in that slot.";
		cout << "\n\t" << kname << "'s HP: " << khp << "\t\t" << ekname << "'s HP : " << ehp << "\n\n";
		cout << "Select a move.\n";
		Sleep(bmsleep);
		cout << "\t>> 1." << mname1 << " (Damage:" << mpow1 << ", Accuracy:" << macc1 << "%)" << endl;
		Sleep(bmsleep);
		cout << "\t>> 2." << mname2 << " (Damage:" << mpow2 << ", Accuracy:" << macc2 << "%)" << endl;
		Sleep(bmsleep);
		cout << "\t>> 3." << mname3 << " (Damage:" << mpow3 << ", Accuracy:" << macc3 << "%)" << endl;
		Sleep(bmsleep);
		cout << "Enter your choice: ";
		cin >> bmsmovech;
	}
	return bmsmovech;
}
int btlplayerturn(int bptchoice, int macc1, int macc2, int macc3, int mpow1, int mpow2, int mpow3, string mname1, string mname2, string mname3, string kname, int ehp, string ekname) {
	int accheck, sleepnum = 350;
	if (bptchoice == 1) {
		srand((unsigned int)time(NULL));
		accheck = rand() % 100 + 1;
		//cout << accheck << endl;
		if (accheck + macc1 > 100) {
			ehp = ehp - mpow1;
			Sleep(sleepnum);
			cout << "You chose " << mname1 << endl;
			Sleep(sleepnum);
			cout << kname << " did " << mpow1 << " damage to " << ekname << endl;
		}
		else {
			Sleep(sleepnum);
			cout << "You chose " << mname1 << endl;
			Sleep(sleepnum);
			cout << "Attack missed" << endl;
			Sleep(sleepnum);
			cout << kname << " did no damage to " << ekname << endl;
		}
	}
	else if (bptchoice == 2) {
		srand((unsigned int)time(NULL));
		accheck = rand() % 100 + 1;
		//cout << accheck << endl;
		if (accheck + macc2 > 100) {
			ehp = ehp - mpow2;
			Sleep(sleepnum);
			cout << "You chose " << mname2 << endl;
			Sleep(sleepnum);
			cout << kname << " did " << mpow2 << " damage to " << ekname << endl;
		}
		else {
			Sleep(sleepnum);
			cout << "You chose " << mname2 << endl;
			Sleep(sleepnum);
			cout << "Attack missed" << endl;
			Sleep(sleepnum);
			cout << kname << " did no damage to " << ekname << endl;
		}
	}
	else if (bptchoice == 3) {
		srand((unsigned int)time(NULL));
		accheck = rand() % 100 + 1;
		//cout << accheck << endl;
		if (accheck + macc3 > 100) {
			ehp = ehp - mpow3;
			Sleep(sleepnum);
			cout << "You chose " << mname3 << endl;
			Sleep(sleepnum);
			cout << kname << " did " << mpow3 << " damage to " << ekname << endl;
		}
		else {
			Sleep(sleepnum);
			cout << "You chose " << mname3 << endl;
			Sleep(sleepnum);
			cout << "Attack missed" << endl;
			Sleep(sleepnum);
			cout << kname << " did no damage to " << ekname << endl;
		}
	}
	return ehp;

}
int btlopponentturn(int emacc1, int emacc2, int emacc3, int empow1, int empow2, int empow3, string emname1, string emname2, string emname3, string enkname, int yourkhp, string yourkname) {
	int enmove, eaccheck, ebltsleep = 350;
	enmove = rand() % 3 + 1;
	if (enmove == 1) {
		srand((unsigned int)time(NULL));
		eaccheck = rand() % 100 + 1;
		//cout << eaccheck << endl;
		if (eaccheck + emacc1 > 100) {
			yourkhp = yourkhp - empow1;
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname1 << endl;
			Sleep(ebltsleep);
			cout << enkname << " did " << empow1 << " damage to " << yourkname << endl;
		}
		else {
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname1 << endl;
			Sleep(ebltsleep);
			cout << "Attack missed" << endl;
			Sleep(ebltsleep);
			cout << enkname << " did no damage to " << yourkname << endl;
		}
	}
	else if (enmove == 2) {
		srand((unsigned int)time(NULL));
		eaccheck = rand() % 100 + 1;
		//cout << eaccheck << endl;
		if (eaccheck + emacc2 > 100) {
			yourkhp = yourkhp - empow2;
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname2 << endl;
			Sleep(ebltsleep);
			cout << enkname << " did " << empow2 << " damage to " << yourkname << endl;
		}
		else {
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname2 << endl;
			Sleep(ebltsleep);
			cout << "Attack missed" << endl;
			Sleep(ebltsleep);
			cout << enkname << " did no damage to " << yourkname << endl;
		}
	}
	else if (enmove == 3) {
		srand((unsigned int)time(NULL));
		eaccheck = rand() % 100 + 1;
		//cout << eaccheck << endl;
		if (eaccheck + emacc3 > 100) {
			yourkhp = yourkhp - empow3;
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname3 << endl;
			Sleep(ebltsleep);
			cout << enkname << " did " << empow3 << " damage to " << yourkname << endl;
		}
		else {
			Sleep(ebltsleep);
			cout << "Opponent chose " << emname3 << endl;
			Sleep(ebltsleep);
			cout << "Attack missed" << endl;
			Sleep(ebltsleep);
			cout << enkname << " did no damage to " << yourkname << endl;
		}
	}
	return yourkhp;
}
int btllost(int worl) {
	int outchoice = 0;
	string losemgs = " You lost...\n";
	string losechoice = " \t\t>>1. Restart Battle\n \t\t>>2. End Game";
	if (worl == 0) {
		do {
			for (int i = 0; losemgs[i] != '\0'; i++) {
				Sleep(60);
				cout << losemgs[i];
			}
			system("pause");
			for (int i = 0; losechoice[i] != '\0'; i++) {
				Sleep(60);
				cout << losechoice[i];
			}
			cout << endl << "Enter your choice: ";
			cin >> outchoice;
		} while (outchoice < 1 || outchoice > 2);
	}
	return outchoice;
}
int tourbattles(int btlnum, int tmacc1, int tmacc2, int tmacc3, int tmpow1, int tmpow2, int tmpow3, string tmname1, string tmname2, string tmname3, int tkhp, string tkname) {
	int sleepnum = 350, movech, enmove, accheck, turns = 0, won = 0;
	int enhp, empow1, empow2, empow3, emacc1, emacc2, emacc3;
	string enname, enmname1, enmname2, enmname3;
	if (btlnum == 0) {
		enname = trixachu.name;
		enhp = trixachu.health;
		empow1 = trixachu.move1.pow;
		empow2 = trixachu.move2.pow;
		empow3 = trixachu.move3.pow;
		emacc1 = trixachu.move1.acc;
		emacc2 = trixachu.move2.acc;
		emacc3 = trixachu.move3.acc;
		enmname1 = trixachu.move1.name;
		enmname2 = trixachu.move2.name;
		enmname3 = trixachu.move3.name;
	}
	else if (btlnum == 1) {
		enname = geoguy.name;
		enhp = geoguy.health;
		empow1 = geoguy.move1.pow;
		empow2 = geoguy.move2.pow;
		empow3 = geoguy.move3.pow;
		emacc1 = geoguy.move1.acc;
		emacc2 = geoguy.move2.acc;
		emacc3 = geoguy.move3.acc;
		enmname1 = geoguy.move1.name;
		enmname2 = geoguy.move2.name;
		enmname3 = geoguy.move3.name;
	}
	else if (btlnum == 2) {
		enname = butterpie.name;
		enhp = butterpie.health;
		empow1 = butterpie.move1.pow;
		empow2 = butterpie.move2.pow;
		empow3 = butterpie.move3.pow;
		emacc1 = butterpie.move1.acc;
		emacc2 = butterpie.move2.acc;
		emacc3 = butterpie.move3.acc;
		enmname1 = butterpie.move1.name;
		enmname2 = butterpie.move2.name;
		enmname3 = butterpie.move3.name;
	}
	else if (btlnum == 3) {
		enname = needle.name;
		enhp = needle.health;
		empow1 = needle.move1.pow;
		empow2 = needle.move2.pow;
		empow3 = needle.move3.pow;
		emacc1 = needle.move1.acc;
		emacc2 = needle.move2.acc;
		emacc3 = needle.move3.acc;
		enmname1 = needle.move1.name;
		enmname2 = needle.move2.name;
		enmname3 = needle.move3.name;
	}
	else if (btlnum == 4) {
		enname = trollax.name;
		enhp = trollax.health;
		empow1 = trollax.move1.pow;
		empow2 = trollax.move2.pow;
		empow3 = trollax.move3.pow;
		emacc1 = trollax.move1.acc;
		emacc2 = trollax.move2.acc;
		emacc3 = trollax.move3.acc;
		enmname1 = trollax.move1.name;
		enmname2 = trollax.move2.name;
		enmname3 = trollax.move3.name;
	}
	string btlmsg = "\t\t\t\t------BATTLE START------";
	system("pause");
	system("cls");
	while (enhp > 0 && tkhp > 0) {
		turns++;
		if (turns == 1) {
			for (int i = 0; btlmsg[i] != '\0'; i++) {
				if (btlmsg[i] != '-') {
					Sleep(80);
					cout << btlmsg[i];
				}
				else if (btlmsg[i] == '-') {
					Sleep(0);
					cout << btlmsg[i];
				}
			}
			Sleep(sleepnum);
			cout << endl << "Your opponent has chosen " << enname << "\n";
			Sleep(sleepnum);
			cout << "You choose " << tkname << "\n\n";
		}
		cout << "Turn: " << turns << "\n";
			movech = btlmoveselect(tmacc1, tmacc2, tmacc3, tmpow1, tmpow2, tmpow3, tmname1, tmname2, tmname3, tkhp, tkname, enhp, enname);
			enhp = btlplayerturn(movech, tmacc1, tmacc2, tmacc3, tmpow1, tmpow2, tmpow3, tmname1, tmname2, tmname3, tkname, enhp, enname);
		if (enhp > 0) {
			tkhp = btlopponentturn(emacc1, emacc2, emacc3, empow1, empow2, empow3, enmname1, enmname2, enmname3, enname, tkhp, tkname);
		}
		else {
			Sleep(sleepnum);
			cout << enname << " fainted!!" << endl;
			Sleep(sleepnum);
			cout << "You won the battle." << endl;
			won = 1;
		}
	}
	system("pause");
	system("cls");
	return won;
}
void tourtexts(int btlnum) {
	system("cls");
	string btlmsg1 = "     Bash: Yooo, i might be the first opponent in the tournament, but i sure am the strongest.\n";
	string btlmsg2 = "    Grock: Rock Strong!!\n           Rock Hard!!\n           Rock WIN!!\n";
	string btlmsg3 = "BugBoyJoy: You think you can beat me??\n           I am the 3rd and 4th opponent at the same time.\n           Get ready to lose.\n";
	string btlmsg4 = "   Glance: You reached the finals on your first try and on your first day with a kokemon.\n           It has to be just luck, let's see how you deal with me and my kokemon.\n";
	if (btlnum == 0) {
		for (int i = 0; btlmsg1[i] != '\0'; i++) {
			if (btlmsg1[i] != ' ') {
				Sleep(60);
				cout << btlmsg1[i];
			}
			else
				cout << btlmsg1[i];
		}
	}
	else if (btlnum == 1) {
		for (int i = 0; btlmsg2[i] != '\0'; i++) {
			if (btlmsg2[i] != ' ') {
				Sleep(60);
				cout << btlmsg2[i];
			}
			else
				cout << btlmsg2[i];
		}
	}
	else if (btlnum == 2) {
		for (int i = 0; btlmsg3[i] != '\0'; i++) {
			if (btlmsg3[i] != ' ') {
				Sleep(60);
				cout << btlmsg3[i];
			}
			else
				cout << btlmsg3[i];
		}
	}
	else if (btlnum == 4) {
		for (int i = 0; btlmsg4[i] != '\0'; i++) {
			if (btlmsg4[i] != ' ') {
				Sleep(60);
				cout << btlmsg4[i];
			}
			else
				cout << btlmsg4[i];
		}
	}
}
int choosing() {
	string chmsg1 = "      You: Ok, Ok i am getting up...\n      ???: What are you even doing here, sleeping in my lab?\n           Anyway... I am Professor Bush.\nProf Bush: Maybe you are here to get one of my kokemon?\n      You: I might be... What is a kokemon?\nProf Bush: Oh you are lucky. There are only 3 left, so chose carefuly.\n      You: Do you even hear me?\n           Whatever i will take one.";
	string chmsg2 = "      You: Wait. You want me to choose from a turtle, a lizard and a frog?\n           I am out of here....\nProf Bush: No please wait, you are the only one that showed up, I..I..I will pay you...\n      You: Now we are talking.";
	string chmsg3 = "Proff Bush: I said one of the 3. Do you se a ", chmsg4 = "th one ?";
	string chmsg5 = "Proff Bush: What are you doing? Just pick one.";
	int choice, x = 0, chtxtspeed = 80, chslspeed = 350;

	for (int i = 0; chmsg1[i] != '\0'; i++) {
		if (chmsg1[i] != ' ') {
			Sleep(chtxtspeed);
			cout << chmsg1[i];
		}
		else if (chmsg1[i] == ' ') {
			Sleep(0);
			cout << chmsg1[i];
		}
		if (chmsg1[i] == '\n')
			Sleep(chslspeed);

	}
	cout << endl;
	cout << "\t >> Enter '1' To get fruitle, the water turtle." << endl;;
	cout << "\t >> Enter '2' To get chairmander, the fire lizard." << endl;;
	cout << "\t >> Enter '3' To get pulpasaur, the grass frog." << endl;;
	Sleep(3000);
	for (int i = 0; chmsg2[i] != '\0'; i++) {
		if (chmsg2[i] != ' ') {
			Sleep(chtxtspeed);
			cout << chmsg2[i];
		}
		else if (chmsg2[i] == ' ') {
			Sleep(0);
			cout << chmsg2[i];
		}
		if (chmsg2[i] == '\n')
			Sleep(chslspeed);
		if (chmsg2[i] == '.')
			Sleep(chslspeed);
	}
	cout << endl;
	system("pause");
	do {
		if (x == 0) {
			cout << "\t >> Enter '1' To get fruitle, the water turtle." << endl;;
			cout << "\t >> Enter '2' To get chairmander, the fire lizard." << endl;;
			cout << "\t >> Enter '3' To get pulpasaur, the grass frog." << endl;;
			cout << "\nEnter your choice: ";
			cin >> choice;
		}
		else if (x != 0) {
			if (choice > 3) {
				for (int i = 0; chmsg3[i] != '\0'; i++) {
					Sleep(chtxtspeed);
					cout << chmsg3[i];
				}
				cout << choice;
				for (int i = 0; chmsg4[i] != '\0'; i++) {
					Sleep(60);
					cout << chmsg4[i];
				}
			}
			if (choice < 1) {
				for (int i = 0; chmsg5[i] != '\0'; i++) {
					Sleep(chtxtspeed);
					cout << chmsg5[i];
				}
			}
			cout << endl;
			cout << "\t >> Enter '1' To get fruitle, the water turtle." << endl;;
			cout << "\t >> Enter '2' To get chairmander, the fire lizard." << endl;;
			cout << "\t >> Enter '3' To get pulpasaur, the grass frog." << endl;;
			cout << "\nEnter your choice: ";
			cin >> choice;
			system("cls");
		}
		x = x + 1;
	} while (choice < 1 || choice > 3);
	system("cls");
	return choice;
}

int Grandsonbattle(int kekcho_b) {
	int sleepnum = 350, movech, turns = 0, won = 0;
	system("pause");
	system("cls");
	string btlmsg = "\t\t\t\t------BATTLE START------";
	if (kekcho_b == 1) {
		while (pulpasaur.health > 0 && fruitle.health > 0) {
			turns++;
			if (turns == 1) {
				for (int i = 0; btlmsg[i] != '\0'; i++) {
					if (btlmsg[i] != '-') {
						Sleep(80);
						cout << btlmsg[i];
					}
					else if (btlmsg[i] == '-') {
						Sleep(0);
						cout << btlmsg[i];
					}
				}
				Sleep(sleepnum);
				cout << endl << "Your opponent has chosen pulpasaur\n";
				Sleep(sleepnum);
				cout << "You choose fruitle\n\n";
			}
			cout << "Turn: " << turns << "\n";
			movech = btlmoveselect(fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.health, fruitle.name, pulpasaur.health, pulpasaur.name);
			pulpasaur.health = btlplayerturn(movech, fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.name, pulpasaur.health, pulpasaur.name);
			if (pulpasaur.health > 0) {
				fruitle.health = btlopponentturn(pulpasaur.move1.acc, pulpasaur.move2.acc, pulpasaur.move3.acc, pulpasaur.move1.pow, pulpasaur.move2.pow, pulpasaur.move3.pow, pulpasaur.move1.name, pulpasaur.move2.name, pulpasaur.move3.name, pulpasaur.name, fruitle.health, fruitle.name);
			}
			else {
				Sleep(sleepnum);
				cout << "pulpasaur fainted" << endl;
				Sleep(sleepnum);
				cout << "You won the battle" << endl;
				won = 1;
			}

		}
	}
	else if (kekcho_b == 2) {
		while (chairmander.health > 0 && fruitle.health > 0) {
			turns++;
			if (turns == 1) {
				for (int i = 0; btlmsg[i] != '\0'; i++) {
					if (btlmsg[i] != '-') {
						Sleep(80);
						cout << btlmsg[i];
					}
					else if (btlmsg[i] == '-') {
						Sleep(0);
						cout << btlmsg[i];
					}
				}
				Sleep(sleepnum);
				cout << endl << "Your opponent has chosen fruitle\n";
				Sleep(sleepnum);
				cout << "You choose chairmander\n\n";
			}
			cout << "Turn: " << turns << "\n";
			movech = btlmoveselect(chairmander.move1.acc, chairmander.move2.acc, chairmander.move3.acc, chairmander.move1.pow, chairmander.move2.pow, chairmander.move3.pow, chairmander.move1.name, chairmander.move2.name, chairmander.move3.name, chairmander.health, chairmander.name, fruitle.health, fruitle.name);
			fruitle.health = btlplayerturn(movech, chairmander.move1.acc, chairmander.move2.acc, chairmander.move3.acc, chairmander.move1.pow, chairmander.move2.pow, chairmander.move3.pow, chairmander.move1.name, chairmander.move2.name, chairmander.move3.name, chairmander.name, fruitle.health, fruitle.name);
			if (fruitle.health > 0) {
				chairmander.health = btlopponentturn(fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.name, chairmander.health, chairmander.name);
			}
			else {
				Sleep(sleepnum);
				cout << "fruitle fainted" << endl;
				Sleep(sleepnum);
				cout << "You won the battle" << endl;
				won = 1;
			}
		}
	}
	else {
		while (chairmander.health > 0 && pulpasaur.health > 0) {
			turns++;
			if (turns == 1) {
				for (int i = 0; btlmsg[i] != '\0'; i++) {
					if (btlmsg[i] != '-') {
						Sleep(80);
						cout << btlmsg[i];
					}
					else if (btlmsg[i] == '-') {
						Sleep(0);
						cout << btlmsg[i];
					}
				}
				Sleep(sleepnum);
				cout << endl << "Your opponent has chosen chairmander\n";
				Sleep(sleepnum);
				cout << "You choose pulpasaur\n\n";
			}
			cout << "Turn: " << turns << "\n";
			movech = btlmoveselect(pulpasaur.move1.acc, pulpasaur.move2.acc, pulpasaur.move3.acc, pulpasaur.move1.pow, pulpasaur.move2.pow, pulpasaur.move3.pow, pulpasaur.move1.name, pulpasaur.move2.name, pulpasaur.move3.name, pulpasaur.health, pulpasaur.name, chairmander.health, chairmander.name);
			pulpasaur.health = btlplayerturn(movech, pulpasaur.move1.acc, pulpasaur.move2.acc, pulpasaur.move3.acc, pulpasaur.move1.pow, pulpasaur.move2.pow, pulpasaur.move3.pow, pulpasaur.move1.name, pulpasaur.move2.name, pulpasaur.move3.name, pulpasaur.name, chairmander.health, chairmander.name);
			if (chairmander.health > 0) {
				pulpasaur.health = btlopponentturn(chairmander.move1.acc, chairmander.move2.acc, chairmander.move3.acc, chairmander.move1.pow, chairmander.move2.pow, chairmander.move3.pow, chairmander.move1.name, chairmander.move2.name, chairmander.move3.name, chairmander.name, pulpasaur.health, pulpasaur.name);
			}
			else {
				Sleep(sleepnum);
				cout << "fruitle fainted" << endl;
				Sleep(sleepnum);
				cout << "You won the battle" << endl;
				won = 1;
			}
		}
	}
	system("pause");
	system("cls");
	fruitle.health = 50;
	chairmander.health = 45;
	pulpasaur.health = 55;
	return won;
}
void firstenc(int kekcho) {
	int strnum = 0, txtspeed = 80, feslspeed = 350;
	char gen;
	string femsg1 = "Prof Bush: Congrats.. boy? girl? I don't know your name or gender.\n           We professors can not tell genders.\n           Please give me your name.\n";
	string femsg2, femsg3;
	string genmsg = "Prof Bush: Now your gender.\n";
	for (int i = 0; femsg1[i] != '\0'; i++) {
		if (femsg1[i] != ' ') {
			Sleep(txtspeed);
			cout << femsg1[i];
		}
		else if (femsg1[i] == ' ') {
			Sleep(0);
			cout << femsg1[i];
		}
		if (femsg1[i] == ' boy' || femsg1[i] == ' gir') {
			Sleep(feslspeed);
		}
	}
	system("pause");
	do {
		strnum = 0;
		cout << "Please use a 5 letter name." << endl;
		cout << "Enter your name: ";

		cin >> player.name;
		for (int i = 0; player.name[i] != '\0'; i++) {
			strnum++;
		}
	} while (strnum != 5);
	for (int i = 0; genmsg[i] != '\0'; i++) {
		Sleep(60);
		cout << genmsg[i];
	}
	system("pause");
	cout << "\t >> Enter 'b' for boy." << endl;
	cout << "\t >> Enter 'g' for girl." << endl;
	cout << "\nEnter your choice: ";
	cin >> player.gender;
	if (player.gender == 'b' || player.gender == 'B') {
		femsg2 = "Prof Bush: Oh God not another boy. I have a grandson that is also a boy, I think...\n           You will get to meet him, oh there he comes!!\n";
		femsg3 = " Grandson: Yo Gramps, did you give this dude a free kokemon before giving me one first?\n           HE GOT THE ONE I WANTED!!\n           Ok i am picking the one with type advantage and i am coming to beat you\n           Get ready loser!!\n";
		for (int i = 0; femsg2[i] != '\0'; i++) {
			if (femsg2[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg2[i];
			}
			else if (femsg2[i] == ' ') {
				Sleep(0);
				cout << femsg2[i];
			}
			if (femsg2[i] == '.')
				Sleep(feslspeed);
		}
		for (int i = 0; femsg3[i] != '\0'; i++) {
			if (femsg3[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg3[i];
			}
			else if (femsg3[i] == ' ') {
				Sleep(0);
				cout << femsg3[i];
			}
			if (femsg3[i] == '.')
				Sleep(feslspeed);
		}
	}
	else if (player.gender == 'g' || player.gender == 'G') {
		femsg2 = "Prof Bush: Oh my how lucky. We professors rarely see girls. I will have to bring my grandson to meet you, hehe\n           Perfect timing, here he comes!!\n";
		femsg3 = " Grandson: *Blush* Is...Is...Is that a GIRL???\n           Gramps!! Why didn't you tell me we had quests?\nProf Bush: Its the kokemon selection day boy, grab one and battle with her\n Grandson: Ok, Ok, here we go!\n";
		for (int i = 0; femsg2[i] != '\0'; i++) {
			if (femsg2[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg2[i];
			}
			else if (femsg2[i] == ' ') {
				Sleep(0);
				cout << femsg2[i];
			}
		}
		for (int i = 0; femsg3[i] != '\0'; i++) {
			if (femsg3[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg3[i];
			}
			else if (femsg3[i] == ' ') {
				Sleep(0);
				cout << femsg3[i];
			}
			if (femsg3[i] == '.')
				Sleep(feslspeed);
		}
	}
	else {
		femsg2 = "Prof Bush: Well i.... don't know that one.... but i do not judge, you can be whatever you want.\n           But don't meet my grandson, he is kind of racist to different people.\n           Oh no, here he comes!!\n";
		femsg3 = " Grandson: What do we have he...\nProf Bush: QUICK, get a kokemon and battle NOW. Don't speak, you dont have to know each other.\n Grandson: But Graaaamps...\nProf Bush: Shhhh get this and fight.\n";
		for (int i = 0; femsg2[i] != '\0'; i++) {
			if (femsg2[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg2[i];
			}
			else if (femsg2[i] == ' ') {
				Sleep(0);
				cout << femsg2[i];
			}
			if (femsg2[i] == '.')
				Sleep(feslspeed);
		}
		for (int i = 0; femsg3[i] != '\0'; i++) {
			if (femsg3[i] != ' ') {
				Sleep(txtspeed);
				cout << femsg3[i];
			}
			else if (femsg3[i] == ' ') {
				Sleep(0);
				cout << femsg3[i];
			}
			if (femsg3[i] == '.')
				Sleep(feslspeed);
		}
	}
	string femsg4 = ": Can this battle start already??\n           I am already getting bored.\nProf Bush: Yeah, yeah, let's go.\n";
	cout << "    " << player.name;
	for (int i = 0; femsg4[i] != '\0'; i++) {
		if (femsg4[i] != ' ') {
			Sleep(txtspeed);
			cout << femsg4[i];
		}
		else if (femsg4[i] == ' ') {
			Sleep(0);
			cout << femsg4[i];
		}
	}
}

int main() {
	fruitle.move1.name = "Tackle";
	fruitle.move1.pow = 10;
	fruitle.move1.acc = 95;
	fruitle.move2.name = "Water Gun";
	fruitle.move2.pow = 20;
	fruitle.move2.acc = 85;
	fruitle.move3.name = "Hydro Pump";
	fruitle.move3.pow = 35;
	fruitle.move3.acc = 55;
	chairmander.move1.name = "Tackle";
	chairmander.move1.pow = 12;
	chairmander.move1.acc = 95;
	chairmander.move2.name = "Flamethrower ";
	chairmander.move2.pow = 25;
	chairmander.move2.acc = 82;
	chairmander.move3.name = "Fire Blast";
	chairmander.move3.pow = 40;
	chairmander.move3.acc = 52;
	pulpasaur.move1.name = "Tackle";
	pulpasaur.move1.pow = 8;
	pulpasaur.move1.acc = 95;
	pulpasaur.move2.name = "Razor Leaf";
	pulpasaur.move2.pow = 17;
	pulpasaur.move2.acc = 88;
	pulpasaur.move3.name = "SolarBeam";
	pulpasaur.move3.pow = 30;
	pulpasaur.move3.acc = 59;
	trixachu.move1.name = "Tackle";
	trixachu.move1.pow = 8;
	trixachu.move1.acc = 95;
	trixachu.move2.name = "Spark";
	trixachu.move2.pow = 15;
	trixachu.move2.acc = 83;
	trixachu.move3.name = "Thunder";
	trixachu.move3.pow = 25;
	trixachu.move3.acc = 55;
	geoguy.move1.name = "Tackle";
	geoguy.move1.pow = 11;
	geoguy.move1.acc = 95;
	geoguy.move2.name = "Rock throw";
	geoguy.move2.pow = 22;
	geoguy.move2.acc = 75;
	geoguy.move3.name = "Earthquake";
	geoguy.move3.pow = 35;
	geoguy.move3.acc = 50;
	butterpie.move1.name = "Tackle";
	butterpie.move1.pow = 5;
	butterpie.move1.acc = 95;
	butterpie.move2.name = "String shot";
	butterpie.move2.pow = 11;
	butterpie.move2.acc = 85;
	butterpie.move3.name = "Bug Buzz";
	butterpie.move3.pow = 20;
	butterpie.move3.acc = 57;
	needle.move1.name = "Tackle";
	needle.move1.pow = 5;
	needle.move1.acc = 95;
	needle.move2.name = "Leech life";
	needle.move2.pow = 12;
	needle.move2.acc = 84;
	needle.move3.name = "Twin needle";
	needle.move3.pow = 21;
	needle.move3.acc = 56;
	trollax.move1.name = "Tackle";
	trollax.move1.pow = 15;
	trollax.move1.acc = 95;
	trollax.move2.name = "Body slam";
	trollax.move2.pow = 25;
	trollax.move2.acc = 80;
	trollax.move3.name = "HyperBeam";
	trollax.move3.pow = 40;
	trollax.move3.acc = 60;
	srand((unsigned int)time(NULL));
	//givemoves();
	int endg = 0;
	int kokchoice = 0, j = 0, gameover = 0;
	int btlout, goverchoice, tourwins = 0, tourend = 0;
	do {
		kokchoice = 0;
		j = 0;
		gameover = 0;
		tourwins = 0;
		tourend = 0;
		string plname;
		string msg1 = "???: Wake up....\n     Wake up....\n";
		string msg2 = "     I SAID", msg3 = "WAKE UP.";
		string msg4 = "???: Can you at least answer?", msg5 = "???: Are you ignoring me?", msg6 = "???: Ok Stay there!!";
		string msg7;
		string msg8;

		int choice1;
		for (int i = 0; msg1[i] != '\0'; i++) {
			if (msg1[i] != ' ') {
				Sleep(200);
				cout << msg1[i];
			}
			else
				cout << msg1[i];
			if (msg1[i] == '\n') {
				Sleep(1500);
			}
		}
		for (int i = 0; msg2[i] != '\0'; i++) {
			if (msg2[i] != ' ') {
				Sleep(400);
				cout << msg2[i];
			}
			else cout << msg2[i];

		}
		Sleep(700);
		cout << " " << msg3 << endl;
		Sleep(1000);
		system("pause");
		do {
			if (j == 0) {
				cout << "\t >> Enter '1' to wake up." << endl;
				cout << "\t >> Enter '2' to sleep more." << endl;
				cout << "\nEnter your choice: ";
				cin >> choice1;
			}
			else if (j == 1) {
				for (int i = 0; msg4[i] != '\0'; i++) {
					Sleep(60);
					cout << msg4[i];
				}
				cout << endl;
				cout << "\t >> Enter '1' to wake up." << endl;
				cout << "\t >> Enter '2' to sleep more." << endl;
				cout << "\nEnter your choice: ";
				cin >> choice1;
			}
			else if (j == 2) {
				for (int i = 0; msg5[i] != '\0'; i++) {
					Sleep(60);
					cout << msg5[i];
				}
				cout << endl;
				cout << "\t >> Enter '1' to wake up." << endl;
				cout << "\t >> Enter '2' to sleep more." << endl;
				cout << "\nEnter your choice: ";
				cin >> choice1;
			}
			else {
				for (int i = 0; msg6[i] != '\0'; i++) {
					Sleep(60);
					cout << msg6[i];
				}
				choice1 = 2;
			}
			j = j + 1;
		} while (choice1 < 1 || choice1 > 2);
		system("cls");
		switch (choice1) {
		case 1: {
			kokchoice = choosing();
			break;
		}
		case 2: {
			string asleepmsg = "You just stay asleep.......\n";
			Sleep(800);
			for (int i = 0; asleepmsg[i] != '\0'; i++) {
				Sleep(80);
				cout << asleepmsg[i];
			}
			goverchoice = 2;
			endg = 1;
			break;
		}
		}
		if (endg == 1) { break; }
		firstenc(kokchoice);
		do {
			btlout = Grandsonbattle(kokchoice);
			goverchoice = btllost(btlout);
		} while (goverchoice == 1);
		if (goverchoice == 2) { endg = 1; }
		if (endg == 1) { break; }
		string beftourmsg1 = "Prof Bush: Well, well, well, we have a winner!!\n           You are a natural at battling, i didn't even teach you how to do it!!\n           I will sign you up for the upcoming tournament tomorrow!!\n";
		string beftourmsg2 = ": Tournament??\n           I just got this thing and you are making me go to a tournament??\n";
		string beftourmsg3 = "Prof Bush: I don't have all day for this.\n           The game has to end soon, so i have to wrap it up with a quick exsuse.\n";
		string beftourmsg4 = ": Game??\n           Professor, did you forget to get your meds again?\n";
		string beftourmsg5 = "Prof Bush: Oh look at that, we are already in the tournament\n           Are you ready for the first battle?\n";
		string beftourmsg6 = ": How did we get here?\n           Whatever, i don't care.\n           Let's get this over with, so i can get back to my sleep.\n";
		string beftourmsg7 = "Prof Bush: The first battle begins now.\n           Don't forget, your kokemon heals to full after each battle.\n           Good luck!!\n";
		for (int i = 0; beftourmsg1[i] != '\0'; i++) {
			if (beftourmsg1[i] != ' ') {
				Sleep(80);
				cout << beftourmsg1[i];
			}
			else cout << beftourmsg1[i];
		}
		cout << "    " << player.name;
		for (int i = 0; beftourmsg2[i] != '\0'; i++) {
			if (beftourmsg2[i] != ' ') {
				Sleep(80);
				cout << beftourmsg2[i];
			}
			else cout << beftourmsg2[i];
		}
		for (int i = 0; beftourmsg3[i] != '\0'; i++) {
			if (beftourmsg3[i] != ' ') {
				Sleep(80);
				cout << beftourmsg3[i];
			}
			else cout << beftourmsg3[i];
		}
		cout << "    " << player.name;
		for (int i = 0; beftourmsg4[i] != '\0'; i++) {
			if (beftourmsg4[i] != ' ') {
				Sleep(80);
				cout << beftourmsg4[i];
			}
			else cout << beftourmsg4[i];
		}
		for (int i = 0; beftourmsg5[i] != '\0'; i++) {
			if (beftourmsg5[i] != ' ') {
				Sleep(80);
				cout << beftourmsg5[i];
			}
			else cout << beftourmsg5[i];
		}
		cout << "    " << player.name;
		for (int i = 0; beftourmsg6[i] != '\0'; i++) {
			if (beftourmsg6[i] != ' ') {
				Sleep(80);
				cout << beftourmsg6[i];
			}
			else cout << beftourmsg6[i];
		}
		for (int i = 0; beftourmsg7[i] != '\0'; i++) {
			if (beftourmsg7[i] != ' ') {
				Sleep(80);
				cout << beftourmsg7[i];
			}
			else cout << beftourmsg7[i];
		}
		do {
			do {
				tourtexts(tourwins);
				btlout = 0;
				if (kokchoice == 1) {
					btlout = tourbattles(tourwins, fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.health, fruitle.name);
				}
				else if (kokchoice == 2) {
					btlout = tourbattles(tourwins, chairmander.move1.acc, chairmander.move2.acc, chairmander.move3.acc, chairmander.move1.pow, chairmander.move2.pow, chairmander.move3.pow, chairmander.move1.name, chairmander.move2.name, chairmander.move3.name, chairmander.health, chairmander.name);
				}
				else {
					btlout = tourbattles(tourwins, pulpasaur.move1.acc, pulpasaur.move2.acc, pulpasaur.move3.acc, pulpasaur.move1.pow, pulpasaur.move2.pow, pulpasaur.move3.pow, pulpasaur.move1.name, pulpasaur.move2.name, pulpasaur.move3.name, pulpasaur.health, pulpasaur.name);
				}
				if (btlout == 1) { tourwins++; }
				if (btlout == 0 && tourwins == 3) {
					tourwins = 2;
				}
			} while (btlout == 1 && tourwins < 5);
			goverchoice = btllost(btlout);
		} while (goverchoice == 1);
		if (goverchoice == 2) { endg = 1; }
		if (endg == 1) { break; }
		if (tourwins == 5) {
			string vicmsg1 = "Prof Bush: You... you won?\n           I can not believe you actually won...\n           All this work... for NOTHING!!\n           I LOST ALL MY MONEY BECAUSE OF YOU!!!\n";
			string vicmsg2 = ": Lost your money?\n           Wait, did you bet against me?\n";
			string vicmsg3 = "Prof Bush: Ofcourse I would bet against you idiot.\n           Why whould I give you a free kokemon in the first place and then put you in a tournament right away?\n";
			string vicmsg4 = ": You sure suck at scamming people.\n           I am going back to sleep now.\n           . . . . . . . . . . .\n";
			for (int i = 0; vicmsg1[i] != '\0'; i++) {
				if (vicmsg1[i] != ' ') {
					Sleep(80);
					cout << vicmsg1[i];
				}
				else cout << vicmsg1[i];
			}
			cout << "    " << player.name;
			for (int i = 0; vicmsg2[i] != '\0'; i++) {
				if (vicmsg2[i] != ' ') {
					Sleep(80);
					cout << vicmsg2[i];
				}
				else cout << vicmsg2[i];
			}
			for (int i = 0; vicmsg3[i] != '\0'; i++) {
				if (vicmsg3[i] != ' ') {
					Sleep(80);
					cout << vicmsg3[i];
				}
				else cout << vicmsg3[i];
			}
			cout << "    " << player.name;
			for (int i = 0; vicmsg4[i] != '\0'; i++) {
				if (vicmsg4[i] != ' ') {
					Sleep(80);
					cout << vicmsg4[i];
				}
				else cout << vicmsg4[i];
				if (vicmsg4[i] == '.') {
					Sleep(400);
				}
			}
			endg = 1;
			tourend = 1;
		}
	} while (endg == 0);
	system("cls");
	if (goverchoice == 2) {
		string gameoverscreen = "\t\t\t\t\tGAME OVER ";
		Sleep(200);
		for (int i = 0; gameoverscreen[i] != '\0'; i++) {
			if (gameoverscreen[i] != '\t') {
				Sleep(200);
				cout << gameoverscreen[i];
			}
			else if (gameoverscreen[i] == '\t') {
				Sleep(0);
				cout << gameoverscreen[i];
			}
		}
	}
	else {
		string gameoverscreen = "\t\t\t\t\tVICTORY ";
		Sleep(200);
		for (int i = 0; gameoverscreen[i] != '\0'; i++) {
			if (gameoverscreen[i] != '\t') {
				Sleep(200);
				cout << gameoverscreen[i];
			}
			else if (gameoverscreen[i] == '\t') {
				Sleep(0);
				cout << gameoverscreen[i];
			}
		}
	}
	return 0;
}