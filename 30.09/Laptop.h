#pragma once
#include <string>
#include<iostream>
#include "hdd.h"
#include "ram.h"
#include "VideoCard.h"
#include "cpu.h"
#include "Keyboard.h"
#include "Printer.h"

using namespace std;

class Laptop {
	string name;
	hdd hdd;
	Ram ram;
	VideoCard card;
	CPU cp;
	Keyboard* kbrd;
	Printer* print;

public:
	Laptop(const char* newname, int h, int r, VideoCard c, CPU p, Keyboard* kb, Printer* prnt) : hdd(h), ram(r), card(c), cp(p), kbrd(kb), print(prnt) {
		name = newname;
	}

	void Print() {
		card.Input();
		cout << "\n";
		cp.Input();

		system("pause");
		cout << "\n\n";

		cout << "Laptop name: " << name << endl;
		hdd.Print();
		ram.Print();
		cout << "\n\tVideo card:\n";
		card.Print();
		cout << "\n\tCPU:\n";
		cp.Print();
		kbrd->Print();
		cout << "\n";
		print->Print();
	}
};
