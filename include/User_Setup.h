#define USER_SETUP_INFO

// Configuration de l'écran
#define ILI9341_DRIVER

// Définition des broches exactes
#define TFT_MISO 12  // SDO(MISO)
#define TFT_MOSI 13  // SDI(MOSI)
#define TFT_SCLK 14  // SCK
#define TFT_CS   15  // CS
#define TFT_DC    2  // D/C
#define TFT_RST  -1  // Connected to RESET

// Configuration d'affichage
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// Configuration SPI
#define SPI_FREQUENCY  40000000

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240