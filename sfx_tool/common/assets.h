
// HELPERS
#define CHAR_RAM            ((byte *)0x0400)
#define COLOR_RAM           ((byte *)0xd800)
#define SCREEN_CHAR_WIDTH   40
#define FALSE                0
#define TRUE                 1

// SCENES ID
#define EDIT_WINDOW         0
#define INFO_WINDOW         1
#define SOUND_BANK_WINDOW   2
#define LOADER_WINDOW       3
#define EDIT_LABEL_WINDOW   4
#define ONE_TRACK_WINDOW    5
#define SCENES_COUNT        6

// MENU COLOR SETTINGS
#define OPTION_ON_COLOR             VCOL_DARK_GREY
#define OPTION_ON_SELECTED_COLOR    VCOL_LT_GREY
#define OPTION_OFF_COLOR            VCOL_BLACK

#define SFX_NAME_LEN        12
#define SFX_COUNT           48

struct ARGV {
    char cp0;
    char cp1;
    char cp2;
};

extern struct ARGV argv;

// "0123456789abcdef"
char byte2hexpetscii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 1, 2, 3, 4, 5, 6};
char byte2hexascii  [] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};

char screen_char_backup [1000];
char screen_color_backup[1000];
char char_ram_buffer[1000];



