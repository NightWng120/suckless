//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "music", 0 ,		11},
	{"", "cpu", 1 ,		0},
	{"", "memory", 1 ,		0},
	{"", "battery", 5 ,		0},
	{"", "volume", 0 ,		10},
	{"", "internet", 5 ,		0},
	{"", "time", 1 ,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
