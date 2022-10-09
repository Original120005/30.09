#pragma once
#include <iostream>
using namespace std;

class VideoCard {
	string name;
	string type;
	int memory;

public:
	VideoCard() {
		name = nullptr;
		type = nullptr;
		memory = 0;
	}

	VideoCard(const char* name_card) {
		name = name_card;
	}

	void Input() {
		cout << "Enter type of video card: ";
		cin >> type;
		cout << "Enter amount memroy of video card: ";
		cin >> memory;
	}

	void Print() {
		cout << "Name of video card: " << name << endl;
		cout << "Type of video card: " << type << endl;
		cout << "Memory of video card: " << memory << "Mb/Gb" << endl;
	}

};
