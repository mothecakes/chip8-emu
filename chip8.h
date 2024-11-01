#ifndef chip_h
#define chip_h

class Chip8 {
public:
	unsigned short opcode;
	unsigned char memory[4096];
	unsigned char v[16];
	unsigned short I;
	unsigned short pc;

	/*
	0x000-0x1ff chip 8 interpreter (contains fontset for modern emus)
	0x050-0x0a0 built in 4x5 pixel fontset
	0x200-0xfff program rom and work ram
	*/

	unsigned char gfx[64 * 32];

	// timer registers
	unsigned char delay_timer;
	unsigned char sound_timer;

	unsigned short stack[16];
	unsigned short sp;

	unsigned char key[16];

	void initialize();
	void loadGame();
	void emulateCycle();
	void setKeys();

	void fetch();
	void decode();
	void execute();

	void updateTimer();
};

#endif // !chip_h
