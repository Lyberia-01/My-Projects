//C++ program to create TIC-TAC-TOE program
#include <iostream>
using namespace std;
string p1, p2;
char input;
int j;
char entry[3][3];
char a('?');
char b('?');
char c('?');
char d('?');
char e('?');
char f('?');
char g('?');
char h('?');
char i('?');

void display(){
	cout << "_"<<a<<"|_"<<b<<"_|"<<c<<"_\n";
	cout << "_"<<d<<"|_"<<e<<"_|"<<f<<"_\n";
	cout << "_"<<g<<"|_"<<h<<"_|"<<i<<"_\n";
}
bool player1 = true;
bool player2 = false;

void in(){
	if(player1){
		cout << p1 << "\'s turn\n";
		cout << "Enter your space: ";
		cin >> input;
		switch(input){
			case 'a':
			case 'A':
				if((a != 'O')&&(a != 'X')){
					entry[0][0] = 'X';
					a = entry[0][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'b':
			case 'B':
				if((b != 'O')&&(b != 'X')){
					entry[0][1] = 'X';
					b = entry[0][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'c':
			case 'C':
				if((c != 'O')&&(c != 'X')){
				entry[0][2] = 'X';
				c = entry[0][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'd':
			case 'D':
				if((d != 'O')&&(d != 'X')){
				entry[1][0] = 'X';
				d = entry[1][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'e':
			case 'E':
				if((e != 'O')&&(e != 'X')){
				entry[1][1] = 'X';
				e = entry[1][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'f':
			case 'F':
				if((f != 'O')&&(f != 'X')){
				entry[1][2] = 'X';
				f = entry[1][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'g':
			case 'G':
				if((g != 'O')&&(g != 'X')){
				entry[2][0] = 'X';
				g = entry[2][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'h':
			case 'H':
				if((h != 'O')&&(h != 'X')){
				entry[2][1] = 'X';
				h = entry[2][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'i':
			case 'I':
				if((i != 'O')&&(i != 'X')){
				entry[2][2] = 'X';
				i = entry[2][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			default:
				cout << "Invalid!!\n";
				cout << "You Forfeit your turn\n";
				cout << "ENTER a VALID letter(space)\n";
				j--;
				break;
		}
		player2 = true;
		player1 = false;
		
	}else if(player2){
		cout <<p2 << "\'s turn\n";
		cout << "Enter your space: ";
		cin >> input;
		switch(input){
			case 'a':
			case 'A':
				if((a != 'O')&&(a != 'X')){
				entry[0][0] = 'O';
				a = entry[0][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'b':
			case 'B':
				if((b != 'O')&&(b != 'X')){
				entry[0][1] = 'O';
				b = entry[0][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'c':
			case 'C':
				if((c != 'O')&&(c != 'X')){
				entry[0][2] = 'O';
				c = entry[0][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'd':
			case 'D':
				if((d != 'O')&&(d != 'X')){
				entry[1][0] = 'O';
				d = entry[1][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'e':
			case 'E':
				if((e != 'O')&&(e != 'X')){
				entry[1][1] = 'O';
				e = entry[1][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'f':
			case 'F':
				if((f != 'O')&&(f != 'X')){
				entry[1][2] = 'O';
				f = entry[1][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'g':
			case 'G':
				if((g != 'O')&&(g != 'X')){
				entry[2][0] = 'O';
				g = entry[2][0];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'h':
			case 'H':
				if((h != 'O')&&(h != 'X')){
				entry[2][1] = 'O';
				h = entry[2][1];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			case 'i':
			case 'I':
				if((i != 'O')&&(i != 'X')){
				entry[2][2] = 'O';
				i = entry[2][2];
				}else{
					cout << "Already used!!\nChoose another number!\n";
					in();
					cout << "\n";
				}
				break;
			default:
				cout << "Invalid!!\n";
				cout << "You Forfeit your turn\n";
				cout << "ENTER a VALID letter(space)\n";
				j--;
				break;
		}
		
		player1 = true;
		player2 = false;
	}
	cout << "\n";
	display();
}

void implement(){
	cout << "\n";
	for(j = 0; j <= 9; j++){
		in();
		if(j == 7){
			cout << "NO winner!!";
			break;
		}
		if(((a == 'X')&&(b == 'X')&&(c == 'X')) || ((a == 'X')&&(e == 'X')&&(i == 'X')) || ((a == 'X')&&(d == 'X')&&(g == 'X')) || ((b == 'X')&&(e == 'X')&&(h == 'X')) || ((c == 'X')&&(f == 'X')&&(i == 'X')) || ((c == 'X')&&(e == 'X')&&(g == 'X')) || ((d == 'X')&&(e == 'X')&&(f == 'X')) || ((g == 'X')&&(h == 'X')&&(i == 'X'))){
			if(player1 == false){
				cout << "\n";
				cout << p1 << " WON\n";
				break;
			}
		}
		if(((a == 'O')&&(b == 'O')&&(c == 'O')) || ((a == 'O')&&(e == 'O')&&(i == 'O')) || ((a == 'O')&&(d == 'O')&&(g == 'O')) || ((b == 'O')&&(e == 'O')&&(h == 'O')) || ((c == 'O')&&(f == 'O')&&(i == 'O')) || ((c == 'O')&&(e == 'O')&&(g == 'O')) || ((d == 'O')&&(e == 'O')&&(f == 'O')) || ((g == 'O')&&(h == 'O')&&(i == 'O'))){
			if(player2 == false){
				cout << "\n";
				cout << p2 << " WON\n";
				break;
			}
		}
	}
}


int main(){
	string start;
	cout << "TicTacToe game" << endl;
	cout << "First player enter your name: ";
	getline(cin, p1);
	cout << "Second player enter your name: ";
	getline(cin, p2);
	
	cout << "INSTRUCTIONS\nPlease READ!!!" << endl;
	cout << "\n_a|_b_|c_ \n_d|_e_|f_ \n_g|_h_|i_\n";
	cout << "a to i are empty spaces\n";
	cout << p1 << " is X\n";
	cout << p2 << " is O\n";
	cout << "Press enter to start\n";
	cout << ">>";
	getline(cin, start);
	implement();
	
	return 0;
}

