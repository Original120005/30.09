#include <iostream>
#include <string>
#include "Laptop.h"
#include "hdd.h"
#include "ram.h"
#include "VideoСard.h"
#include "cpu.h"
#include "Keyboard.h"
#include "Printer.h"
using namespace std;

int main() {
	VideoСard card("RTX 3060");
	CPU cp("Intel I7");
	Keyboard kb("HARON", "English");
	Printer print("Smi", "0020");

	Laptop Lap("Msi", 512, 8, card, cp, &kb, &print);
	Lap.Print();



}