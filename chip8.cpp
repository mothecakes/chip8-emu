#include "chip8.h"

void Chip8::initialize() {
	pc = 0x200;
	opcode = 0;
	I = 0;
	sp = 0;

	//clear display
	//clear stack
	//clear register v0-vf
	//clear memory

	//load fontset
	for (int i = 0; i < 80; ++i)
		//	memory[i] = chip8_fontset[i];
		;
	//reset timers
}

void Chip8::fetch() {
	// grabs byte from pc and the one after
	opcode = memory[pc] << 8 | memory[pc + 1];
}

void Chip8::decode() {
	// checks only first four bits aka first letter of the hex
	switch (opcode & 0xF000) {
	case 0x0000:
		switch (opcode & 0x00FF) {
		case 0x00E0:
			// display clear
			break;
		case 0x00EE:
			// return from subroutine
			break;
		}
		break;
	case 0x1000:
		// jump to address
		break;
	case 0x2000:
		// calls 
		break;
	case 0x3000:
		// skips if
		break;
	case 0x4000:
		// skips if
		break;
	case 0x5000:
		// skips if
		break;
	case 0x6000:
		// skips if
		break;
	case 0x7000:
		// skips if
		break;
	case 0x8000:
		// bit ops
		break;


	}
}

void 
