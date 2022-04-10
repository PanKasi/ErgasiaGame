#include <iostream>
#include <string>
#include <windows.h> 
#include <conio.h>
#include <ctime>

using namespace std;

struct{
	int IQ;
	string name;
	char gender;
}player;
struct moves{
	int pow, acc;
	string name;

};
struct{
	int health = 50;
	string name = "fruitle";
	moves move1;
	moves move2;
	moves move3;
}fruitle;
struct{
	int health = 45;
	string name = "chairmander";
	moves move1;
	moves move2;
	moves move3;
}chairmander;
struct{
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
	int health = 100;
	string name = "trollax";
	moves move1;
	moves move2;
	moves move3;
}trollax;
int btlmoveselect(int macc1, int macc2, int macc3, int mpow1, int mpow2, int mpow3, string mname1, string mname2, string mname3,int khp, string kname, int ehp, string ekname) {
	int bmsleep = 350,bmsmovech;

	Sleep(bmsleep);
	cout << "\n\t" << kname <<"'s HP: " << khp << "\t\t" << ekname << "'s HP: " << ehp << "\n\n";
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
int btlplayerturn(int bptchoice, int macc1, int macc2, int macc3, int mpow1, int mpow2, int mpow3, string mname1,string mname2, string mname3, string kname, int ehp ,string ekname) {
	int accheck, sleepnum = 350;
	if (bptchoice == 1) {
		accheck = rand() % 100 + 1;
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
		accheck = rand() % 100 + 1;
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
		accheck = rand() % 100 + 1;
		cout << accheck;
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
		eaccheck = rand() % 100 + 1;
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
		eaccheck = rand() % 100 + 1;
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
		eaccheck = rand() % 100 + 1;
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
}//fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.health, fruitle.name
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
	string btlmsg = "\t\t\t------BATTLE START------";
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
			cout << "You choose " << tkname <<"\n\n";
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
	return won;
}
int choosing(){
	string chmsg1 = "      You: Ok, Ok i am getting up...\n      ???: What are you even doing here, sleeping in my lab?\n           Anyway... I am Professor Bush.\nProf Bush: Maybe you are here to get one of my kokemon?\n      You: I might be... What is a kokemon?\nProf Bush: Oh you are lucky. There are only 3 left, so chose carefuly.\n      You: Do you even hear me?\n           Whatever i will take one.";
	string chmsg2 = "      You: Wait. You want me to choose from a turtle, a lizard and a frog?\n           I am out of here....\nProf Bush: No please wait, you are the only one that showed up, I..I..I will pay you...\n      You: Now we are talking.";
	string chmsg3 = "Proff Bush: I said one of the 3. Do you se a ", chmsg4 = "th one ?";
	string chmsg5 = "Proff Bush: What are you doing? Just pick one.";
	int choice, x = 0,chtxtspeed = 80, chslspeed = 350;

	for (int i = 0; chmsg1[i] != '\0'; i++) {
		if (chmsg1[i] != ' ') {
			Sleep(chtxtspeed);
			cout << chmsg1[i];
		}
		else if (chmsg1[i] != '  Y' || chmsg1[i] != ' ?' || chmsg1[i] != ' A'){
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
		else if (chmsg2[i] != '  Y') {
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
	do{
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

int Grandsonbattle(int kekcho_b){
	int sleepnum = 350, movech, enmove, accheck, turns = 0, won = 0;
	string btlmsg = "\t\t\t------BATTLE START------";
	if (kekcho_b == 1){
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
			movech = btlmoveselect(fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name,fruitle.health, fruitle.name, pulpasaur.health, pulpasaur.name);
			pulpasaur.health = btlplayerturn(movech,fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.name, pulpasaur.health, pulpasaur.name);
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
	else if (kekcho_b == 2){
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
	else{
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
	fruitle.health = 50;
	chairmander.health = 45;
	pulpasaur.health = 55;
	return won;
}
void firstenc(int kekcho) {
	int strnum=0,txtspeed = 80, feslspeed = 350;
	char gen;
	string ans;
	string femsg1 = "Prof Bush: Congrats.. boy? girl? I don't know your name or gender.\n           We professors can not tell genders.\n           Please give me your name.\n";
	string femsg2, femsg3;
	string genmsg = "Prof Bush: Now your gender.\n";
	for (int i = 0; femsg1[i] != '\0'; i++) {
		if (femsg1[i] != ' ') {
			Sleep(txtspeed);
			cout << femsg1[i];
		}
		else if (femsg1[i] != '  W') {
			Sleep(0);
			cout << femsg1[i];
		}
		if (femsg1[i] == ' boy' || femsg1[i] == ' gir') {
			Sleep(feslspeed);
		}
	}
	system("pause");
	do {
		do {
			strnum = 0;
			cout << "Please use a 5 letter name." << endl;
			cout << "Enter your name: ";
		
			cin >> player.name;
			for (int i = 0; player.name[i] != '\0'; i++) {
				strnum++;
			}
		} while (strnum != 5);
		cout << "\nAre you sure about that name?\n";
		system("pause");
		cout << "\t >> Enter 'yes'." << endl;
		cout << "\t >> Enter 'no'." << endl;
		cout << "\nEnter your choice: ";
		cin >> ans;
	} while (ans == "no");
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
				else if (femsg2[i] != '  Y') {
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
				else if (femsg3[i] != '  Y' || femsg3[i] != '  H' || femsg3[i] != '  O' || femsg3[i] != '  G') {
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
				else if (femsg2[i] != '  P') {
					Sleep(0);
					cout << femsg2[i];
				}
			}
			for (int i = 0; femsg3[i] != '\0'; i++) {
				if (femsg3[i] != ' ') {
					Sleep(txtspeed);
					cout << femsg3[i];
				}
				else if (femsg3[i] != '  Y') {
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
				else if (femsg2[i] != '  O') {
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
				else if (femsg3[i] != '  Y') {
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

int main(){
	srand((unsigned int)time(NULL));
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
	chairmander.move1.pow = 10;
	chairmander.move1.acc = 95;
	chairmander.move2.name = "Flamethrower ";
	chairmander.move2.pow = 25;
	chairmander.move2.acc = 82;
	chairmander.move3.name = "Fire Blast";
	chairmander.move3.pow = 40;
	chairmander.move3.acc = 52;
	pulpasaur.move1.name = "Tackle";
	pulpasaur.move1.pow = 10;
	pulpasaur.move1.acc = 95;
	pulpasaur.move2.name = "Razor Leaf";
	pulpasaur.move2.pow = 17;
	pulpasaur.move2.acc = 88;
	pulpasaur.move3.name = "SolarBeam";
	pulpasaur.move3.pow = 30;
	pulpasaur.move3.acc = 59;
	int endg = 0;
	do {
		int kokchoice = 0, j = 0, gameover = 0;
		int btlout = 0, goverchoice, tourwins = 0;
		string plname;
		string msg1 = "???: Wake up....\n     Wake up....\n";
		string msg2 = "     I SAID", msg3 = "WAKE UP.";
		string msg4 = "???: Can you at least answer?", msg5 = "???: Are you ignoring me?", msg6 = "???: Ok Stay there!!";
		string msg7;
		string msg8;
		string losemgs =" You lost...\n \t\t>>1. Restart Battle\n \t\t>>2. End Game";
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
			endg = 1;
			break;
		}
		}
		if (endg == 1) { break; }
		firstenc(kokchoice);
		do {
			goverchoice = 0;
			btlout = Grandsonbattle(kokchoice);
			if (btlout == 0) {
				do {
					for (int i = 0; losemgs[i] != '\0'; i++) {
						Sleep(60);
						cout << losemgs[i];
					}
					cout << endl << "Enter your choice: ";
					cin >> goverchoice;
					if (goverchoice == 2) {
						endg = 1;
					}
				} while (goverchoice < 1 || goverchoice > 2);
			}
		} while (goverchoice == 1);
		if (endg == 1) { break; }
		cout << "Prof Bush: Well, well, well, we have a winner!!\n           You are a natural at battling, i didn't even teach you how to do it!!\n           I will sign you up for the upcoming tournament tomorrow!!";
		cout << "    " << player.name << ": Tournament??\n           I just got this thing and you are making me go to a tournament??";
		cout << "Prof Bush: I don't have all day for this.\n           The game has to end soon, so we are wrappinh it up with an excuse that does not feel extremely unatural for the story.\n";
		cout << "    " << player.name << ": Game?? Story??\n           Professor, did you forget to get your meds again?\n";
		cout << "Prof Bush: Oh look at that we are already in the tournament\n           Are you ready for the first battle?\n";
		cout << "    " << player.name << ": How did we get here?\n           Whatever, i don't care.\n           Let's get this over with, so i can get back to my sleep.";
		cout << "Prof Bush: The first battle begins now.\n           Don't forget, your kokemon heals to full after each battle.\n           Good luck!!\n";
		if (kokchoice == 1) {
				btlout = tourbattles(tourwins, fruitle.move1.acc, fruitle.move2.acc, fruitle.move3.acc, fruitle.move1.pow, fruitle.move2.pow, fruitle.move3.pow, fruitle.move1.name, fruitle.move2.name, fruitle.move3.name, fruitle.health, fruitle.name);
				if (btlout == 0) {
					
				}
		}

	} while (endg == 0);
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
	return 0;
}
