//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "capslock",			0,		9},

	{"", "backlight",			0,		10},
	
	{"", "volume",				0,		11},

	{"", "memory",				5,		0},

	{"", "battery",				5,		12},
	
	{"", "cpu",				5,		0},

	{"", "wifi",				5,		0},

	{"", "clock",				1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
