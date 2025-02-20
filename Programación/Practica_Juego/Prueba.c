#include <stdio.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main() {
    printf(RED "Este es un texto rojo\n" RESET);
    printf(GREEN "Este es un texto verde\n" RESET);
    printf(YELLOW "Este es un texto amarillo\n" RESET);
    printf(BLUE "Este es un texto azul\n" RESET);
    printf(MAGENTA "Este es un texto magenta\n" RESET);
    printf(CYAN "Este es un texto cian\n" RESET);
    printf("Este es un texto normal\n");

    printf("Colores ANSI extendidos (256 colores):\n");

    for (int i = 0; i < 256; i++) {
        printf("\x1b[38;5;%dmTexto color %d\n\x1b[0m", i, i);
    }

    printf("Colores RGB personalizados:\n");

    printf("\x1b[38;2;255;0;0mTexto en rojo (RGB 255,0,0)\n\x1b[0m");
    printf("\x1b[38;2;0;255;0mTexto en verde (RGB 0,255,0)\n\x1b[0m");
    printf("\x1b[38;2;0;0;255mTexto en azul (RGB 0,0,255)\n\x1b[0m");
    printf("\x1b[38;2;255;255;0mTexto en amarillo (RGB 255,255,0)\n\x1b[0m");
    printf("\x1b[38;2;255;0;255mTexto en magenta (RGB 255,0,255)\n\x1b[0m");
    printf("\x1b[38;2;0;255;255mTexto en cian (RGB 0,255,255)\n\x1b[0m");

printf("\n\n");
        printf("                              ` )\n");
        printf("                     (         (\n");
        printf("                      )      (\n");
        printf("                    )          )\n");
        printf("                   (          ( ,\n");
        printf("                  _ _)_      .-Y.\n");
        printf("       .--._ _.--'.',T.\\_.--' (_)`.\n");
        printf("     .'_.   `  _.'  `-'    __._.---;\n");
        /*"    /.'  `.  -'     ___.--' ,--.  :       o       ,-. _\n"
        "   : |  xX|       ,'  .-'`.(   |  '      (   o  ,' .-' `,             _                             \n"
        "  :  `.  .'    ._'-,  \\   | \\  ||/        `.{  / .'    :             | |                             \n"
        " .;    `'    ,',\\|\\|   \\  |  `.;'     .__(()`./.'  _.-'            __| |_ __ __ _  __ _  ___  _ __  \n"
        " ;           |   ` `    \\.'|\\\\ :      ``.-. _ '_.-'               / _` | '__/ _` |/ _` |/ _ \\| '_ \\ \n"
        ".'           ` /|,         `|\\\\ \\        -'' \\  \\                | (_| | | | (_| | (_| | (_) | | | |\n"
        ":             \\`/|,-.       `|\\\\ :         ,-'| `-.               \\__,_|_|  \\__,_|\\__, |\\___/|_| |_|\n"
        ":        _     \\`/  |   _   .^.'\\ \\          -'> \\_                                __/ |            \n"
        "`;      --`-.   \\`._| ,' \\  |  \\ : \\           )`.\\`-                             |___/       \n"
        " :.      .---\\   \\   ,'   | '   \\ : .          `  `.\\_,/\n"
        "  :.        __\\   `. :    | `-.-',  :               `-'\n"
        "  `:.     -'   `.   `.`---'__.--'  /\n"
        "   `:         __.\\    `---'      _'\n"
        "    `:.     -'    `.       __.--'\n"
        "     `:.          __`--.--'\\\n"
        "      `:.      --'     __   `.\n"
        "       `:.     --'         `-'\n"*/
        printf("                                       Pulsa ENTER para empezar \n");
    

    return 0;
}

