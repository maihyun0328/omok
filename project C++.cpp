//#include <iostream>
//#include <string>
//#include<windows.h>
//#include<conio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<string.h>
//
//using namespace std;
//#define _CRT_SECURE_NO_WARNINGS
//#define BLACK 0 
//#define BLUE 1 
//#define GREEN 2 
//#define CYAN 3 
//#define RED 4 
//#define MAGENTA 5 
//#define BROWN 6 
//#define LIGHTGRAY 7 
//#define DARKGRAY 8 
//#define LIGHTBLUE 9 
//#define LIGHTGREEN 10 
//#define LIGHTCYAN 11 
//#define LIGHTRED 12 
//#define LIGHTMAGENTA 13 
//#define YELLOW 14 
//#define WHITE 15 
//
//class Player {
//public:
//	pair<char, int> which() {
//		char a;
//		int b;
//		cin >> a >> b;
//		return make_pair(a, b);
//	}
//};
//
//class Pan {
//private:
//	int pan[20][20];
//public:
//	void setpan(int a, int b, int c) { pan[a - 1][b - 1] = c; }
//	bool getpan(int a, int b) { return pan[a - 1][b - 1]; }
//
//	Pan() {
//		for (int i = 0; i < 20; i++) {
//			for (int n = 0; n < 20; n++) {
//				pan[i][n] = 0;
//			}
//		}
//		char a = 'A';
//		int b = 1;
//		cout << " ";
//		for (int i = 0; i < 20; i++) {
//			printf("%2d",b);
//			b += 1;
//		}
//		cout << endl;
//		for (int i = 0; i < 20; i++) {
//			textcolor(LIGHTGRAY, BLACK);
//			cout << a;
//			a += 1;
//			for (int n = 0; n < 20; n++) {
//				textcolor(LIGHTGRAY,DARKGRAY);
//				cout << "□";
//			}
//			cout << endl;
//		}
//	}
//	void setting(char a, int b, int z) {
//		a -= 'a';
//			gotoxy((b - 0.5) * 2, a + 1);
//		if (z == 1) {
//			textcolor(BLACK, DARKGRAY);
//			cout << "О";
//			setpan(b, a, z);
//		}
//		else if (z == 2) {
//			textcolor(WHITE, DARKGRAY);
//			cout << "О";
//			setpan(b, a, z);
//		}
//	}
//	void gotoxy(int x, int y) {
//		COORD coord = { x, y };
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//	}
//	void textcolor(int foreground, int background) {
//		int color = foreground + background * 16;
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//	}
//};
//
//class Omoc {
//private:
//	int number;
//	Player baek, heuk;
//	Pan pan;
//	string p1which;
//	string p2which;
//public:
//	Omoc() {
//	}
//	
//	void winner(int a) {
//		pan.gotoxy(24,24);
//		cout << "player" << a << " win!";
//	}
//
//	int check(int x, int y, int z) {
//		pan.gotoxy(35, 35);
//		cout << "1";
//		int a[8] = { 0,0,0,0,0,0,0,0 };
//		int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
//		int dy[8] = { -1,-1,0,1,1,1,0,-1 };
//		for (int n = 0; n < 8; n++) {
//			for (int i = 1; i < 6; i++) {
//				if (pan.getpan(x + (dx[n] * i), y + (dy[n] * i)) == z) {
//					a[n] += 1;
//				}
//				else {
//					break;
//				}
//			}
//		}
//		pan.gotoxy(35, 35);
//		for (int i = 0; i < 8; i++) {
//			cout << a[i] << " ";
//		}
//		for (int i = 0; i < 4; i++) {
//			if (a[i] + a[i + 4] == 4) {
//				return z;
//			}
//			else {
//				return 0;
//			}
//		}
//	}
//
//	void start() {
//		pan.gotoxy(1, 1);
//		cout << "Ⅹ";
//		check(4,3, 1);
//		while (1) {
//			pan.textcolor(LIGHTGRAY, BLACK);
//			pan.gotoxy(22, 22);
//			pair<char, int> p1which = heuk.which();
//			while (pan.getpan(p1which.second, p1which.first - 'a') != 0 || p1which.second <= 0 || p1which.second > 20) {
//				pan.gotoxy(22, 22);
//				p1which = heuk.which();
//			}
//			pan.setting(p1which.first, p1which.second, 1);
//			
//			if (check(p1which.second, p1which.first - 'a' , 1) == 1) {
//				winner(1);
//			}
//			pan.textcolor(LIGHTGRAY, BLACK);
//			pan.gotoxy(22, 22);
//			pair<char, int> p2which = baek.which();
//			while (pan.getpan(p2which.second, p2which.first - 'a') != 0 || p2which.second <= 0 || p2which.second > 20) {
//				pan.gotoxy(22, 22);
//				p2which = baek.which();
//			}
//			pan.setting(p2which.first, p2which.second, 2);
//
//			if (check(p2which.second, p2which.first - 'a' , 2) == 2) {
//				winner(2);
//			}
//		}
//	}
//};
//
//int main() {
//	Omoc game;
//	game.start();
//}
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 

class Player {
public:
    pair<char, int> which() {
        char a;
        int b;
        cin >> a >> b;
        return make_pair(a, b);
    }
};

class Pan {
private:
    int pan[20][20];
public:
    void setpan(int a, int b, int c) { pan[a - 1][b - 1] = c; }
    int getpan(int a, int b) { return pan[a - 1][b - 1]; }

    Pan() {
        for (int i = 0; i < 20; i++) {
            for (int n = 0; n < 20; n++) {
                pan[i][n] = 0;
            }
        }
        char a = 'A';
        int b = 1;
        cout << " ";
        for (int i = 0; i < 20; i++) {
            printf("%2d", b);
            b += 1;
        }
        cout << endl;
        for (int i = 0; i < 20; i++) {
            textcolor(LIGHTGRAY, BLACK);
            cout << a;
            a += 1;
            for (int n = 0; n < 20; n++) {
                textcolor(LIGHTGRAY, DARKGRAY);
                cout << "□";
            }
            cout << endl;
        }
    }
    void setting(char a, int b, int z) {
        int y = a - 'a' + 1;
        gotoxy((b - 1) * 2 + 1, y);
        if (z == 1) {
            textcolor(BLACK, DARKGRAY);
            cout << "●";
            setpan(b, y, z);
        }
        else if (z == 2) {
            textcolor(WHITE, DARKGRAY);
            cout << "○";
            setpan(b, y, z);
        }
    }
    void gotoxy(int x, int y) {
        COORD coord = { x, y };
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    void textcolor(int foreground, int background) {
        int color = foreground + background * 16;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
};

class Omoc {
private:
    Player baek, heuk;
    Pan pan;
public:
    Omoc() {
    }

    void winner(int a) {
        pan.gotoxy(24, 24);
        cout << "player " << a << " win!";
        exit(0);
    }

    int threecheck(int x, int y, int z) {
        int v = 0;
        int jump[8] = { 0 ,0,0,0,0,0,0,0 };
        int a[8] = { 0,0,0,0,0,0,0,0 };
        int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
        int dy[8] = { -1,-1,0,1,1,1,0,-1 };
        for (int n = 0; n < 8; n++) {
            jump[n] = 0;
            for (int i = 1; i < 5; i++) {
                int nx = x + (dx[n] * i);
                int ny = y + (dy[n] * i);
                if (nx >= 1 && nx <= 20 && ny >= 1 && ny <= 20 && pan.getpan(nx, ny) == z) {
                    a[n] += 1;
                }
                else if (jump[n] == 1 && nx >= 1 && nx <= 20 && ny >= 1 && ny <= 20 && pan.getpan(nx, ny) == z) {
                    a[n] += 1;
                }
                else {
                    if (jump[n] >= 1)  break;
                    jump[n] += 1;
                }
            }
        }
        for (int i = 0; i<8;i++) {
            if (a[i] == 0) {
                jump[i] = 0;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (a[i] + a[i + 4] == 2) {
                if (i > 4) {
                    continue;
                }
                if (jump[i] + jump[i + 4] == 2) {
                    continue;
                }
                v += 1;
            }
        }
        if (v >= 2 ) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int fourcheck(int x, int y, int z) {
        int v = 0;
        int jump[8] = { 0 ,0,0,0,0,0,0,0 };
        int a[8] = { 0,0,0,0,0,0,0,0 };
        int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
        int dy[8] = { -1,-1,0,1,1,1,0,-1 };
        for (int n = 0; n < 8; n++) {
            jump[n] = 0;
            for (int i = 1; i < 5; i++) {
                int nx = x + (dx[n] * i);
                int ny = y + (dy[n] * i);
                if (nx >= 1 && nx <= 20 && ny >= 1 && ny <= 20 && pan.getpan(nx, ny) == z) {
                    a[n] += 1;
                }
                else if (jump[n] == 1 && nx >= 1 && nx <= 20 && ny >= 1 && ny <= 20 && pan.getpan(nx, ny) == z) {
                    a[n] += 1;
                }
                else {
                    if (jump[n] >= 1)  break;
                    jump[n] += 1;
                }
            }
        }
        for (int i = 0; i < 8; i++) {
            if (a[i] == 0) {
                jump[i] = 0;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (a[i] + a[i + 4] == 3) {
                if (i > 4) {
                    continue;
                }
                if (jump[i] + jump[i + 4] == 2) {
                    continue;
                }
                v += 1;
            }
        }
        if (v >= 2) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int check(int x, int y, int z) {
        int a[8] = { 0,0,0,0,0,0,0,0 };
        int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
        int dy[8] = { -1,-1,0,1,1,1,0,-1 };
        for (int n = 0; n < 8; n++) {
            for (int i = 1; i < 5; i++) {
                int nx = x + (dx[n] * i);
                int ny = y + (dy[n] * i);
                if (nx >= 1 && nx <= 20 && ny >= 1 && ny <= 20 && pan.getpan(nx, ny) == z) {
                    a[n] += 1;
                }
                else {
                    break;
                }
            }
        }
        for (int i = 0; i < 8; i++) {
            pan.gotoxy(24, 24);
            cout << a[i] << " ";
        }
        for (int i = 0; i < 4; i++) {
            if (a[i] + a[i + 4] >= 5 && z == 1) {
                return 4;
            }
            else if (a[i] + a[i + 4] >= 5 && z == 2) {
                return z;
            }
            if (a[i] + a[i + 4] == 4) {
                return z;
            }
        }
        return 0;
    }

    void start() {
        while (1) {
            pan.textcolor(LIGHTGRAY, BLACK);
            pan.gotoxy(22, 22);
            pair<char, int> p1which = heuk.which();
            while (pan.getpan(p1which.second, p1which.first - 'a' + 1) != 0 || p1which.second <= 0 || 
                p1which.second > 20 || p1which.first < 'a' || p1which.first > 't' || 
                threecheck(p1which.second, p1which.first - 'a' + 1,1) == 1||
                check(p1which.second, p1which.first - 'a' + 1, 1) == 4 ||
                fourcheck(p1which.second, p1which.first - 'a' + 1, 1) == 1) {

                pan.gotoxy(22, 22);
                p1which = heuk.which();
            }
            pan.setting(p1which.first, p1which.second, 1);
            if (check(p1which.second, p1which.first - 'a' + 1, 1) == 1) {
                winner(1);
            }
            pan.textcolor(LIGHTGRAY, BLACK);
            pan.gotoxy(22, 22);
            pair<char, int> p2which = baek.which();
            while (pan.getpan(p2which.second, p2which.first - 'a' + 1) != 0 || p2which.second <= 0 || p2which.second > 20 || p2which.first < 'a' || p2which.first > 't') {
                pan.gotoxy(22, 22);
                p2which = baek.which();
            }
            pan.setting(p2which.first, p2which.second, 2);

            if (check(p2which.second, p2which.first - 'a' + 1, 2) == 2) {
                winner(2);
            }
        }
    }
};

int main() {
    Omoc game;
    game.start();
}