// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    {"", "sb-news", 0, 6},
    {"", "sb-torrent", 5, 10},
    {"", "sb-cpuperc dwm", 5, 9},
    {"", "sb-memory dwm", 5, 7},
    {"", "sb-cputemp", 5, 4},
    {"", "sb-volume dwm", 0, 3},
    {"", "sb-upt dwm", 15, 5},
    {"", "sb-clock dwm", 1, 2},
    {"", "sb-networking dwm", 1, 1},

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char *delim = " | ";

// Sets delimiters around the full statusbar. NULL character ('\0') means no
// delimeter.
static char leftpad[] = " ";
static char rightpad[] = " ";
