//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    {"", "cpuperc dwm",				5,		      9},
	{"", "pacupdate dwm",				18000,		      8},
	{"", "memory dwm",				5,		      7},
	{"", "corona",				        18000,		      6},
	{"", "forecast",				18000,		      5},
	{"", "cputemp desktop",			        5,		      4},
	{"", "volume dwm",				0,		      3},
	{"", "clock dwm",				60,		      2},
	{"", "networking",				5,		      1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
