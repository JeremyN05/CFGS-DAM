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
        printf("\x1b[38;5;46m                              ` )\n\x1b[0m");
        printf("\x1b[38;5;46m                     (         (\n\x1b[0m");
        printf("\x1b[38;5;46m                      )      (\n\x1b[0m");
        printf("\x1b[38;5;46m                    )          )\n\x1b[0m");
        printf("\x1b[38;5;46m                   (          ( ,\n\x1b[0m");
        printf("\x1b[38;5;46m                  _ _)_      .-Y.\n\x1b[0m");
        printf("\x1b[38;5;46m       .--._ _.--'.',T.\\_.--' (_)`.\n\x1b[0m");
        printf("\x1b[38;5;46m     .'_.   `  _.'  `-'    __._.---;\n\x1b[0m");
        printf("\x1b[38;5;46m    /.'  `.  -'     ___.--' ,--.  :\x1b[0m");printf("\x1b[38;5;51m       o       ,-. _\n\x1b[0m");
        printf("\x1b[38;5;46m   : |  xX|       ,'  .-'`.(   |  '\x1b[0m");printf("\x1b[38;5;51m      (   o  ,' .-' `,\x1b[0m"); printf("\x1b[38;5;196m              _                             \n\x1b[0m");
        printf("\x1b[38;5;46m  :  `.  .'    ._'-,  \\   | \\  ||/\x1b[0m"); printf("\x1b[38;5;51m        `.{  / .'    :             \x1b[0m"); printf("\x1b[38;5;196m | |                             \n\x1b[0m");
        printf("\x1b[38;5;46m .;    `'    ,',\\|\\|   \\  |  `.;'\x1b[0m"); printf("\x1b[38;5;51m     .__(()`./.'  _.-'            \x1b[0m"); printf("\x1b[38;5;196m __| |_ __ __ _  __ _  ___  _ __  \n\x1b[0m");
        printf("\x1b[38;5;46m ;           |   ` `    \\.'|\\\\ :\x1b[0m"); printf("\x1b[38;5;51m      ``.-. _ '_.-'               \x1b[0m"); printf("\x1b[38;5;196m / _` | '__/ _` |/ _` |/ _ \\| '_ \\ \n\x1b[0m");
        printf("\x1b[38;5;46m .'           ` /|,         `|\\\\ \\\x1b[0m"); printf("\x1b[38;5;51m        -'' \\  \\               \x1b[0m"); printf("\x1b[38;5;196m | (_| | | | (_| | (_| | (_) | | | |\n\x1b[0m");
        printf("\x1b[38;5;46m :             \\`/|,-.       `|\\\\ :\x1b[0m"); printf("\x1b[38;5;51m        ,-'| `-.               \x1b[0m"); printf("\x1b[38;5;196m \\__,_|_|  \\__,_|\\__, |\\___/|_| |_|\n\x1b[0m");
        printf("\x1b[38;5;46m:        _     \\`/  |   _   .^.'\\ \\\x1b[0m"); printf("\x1b[38;5;51m          -'> \\_                                \x1b[0m"); printf("\x1b[38;5;196m __/ |            \n\x1b[0m");
        printf("\x1b[38;5;46m`;      --`-.   \\`._| ,' \\  |  \\ : \\\x1b[0m"); printf("\x1b[38;5;51m           )`.\\`-                             \x1b[0m"); printf("\x1b[38;5;196m |___/       \n\x1b[0m");
        printf("\x1b[38;5;46m :.      .---\\   \\   ,'   | '   \\ : .\x1b[0m"); printf("\x1b[38;5;51m          `  `.\\_,/\n\x1b[0m");
        printf("\x1b[38;5;46m  :.        __\\   `. :    | `-.-',  :\x1b[0m"); printf("\x1b[38;5;51m               `-'\n\x1b[0m");
        printf("\x1b[38;5;46m  `:.     -'   `.   `.`---'__.--'  /\n\x1b[0m");
        printf("\x1b[38;5;46m   `:         __.\\    `---'      _'\n\x1b[0m");
        printf("\x1b[38;5;46m    `:.     -'    `.       __.--'\n\x1b[0m");
        printf("\x1b[38;5;46m     `:.          __`--.--'\\\n\x1b[0m");
        printf("\x1b[38;5;46m      `:.      --'     __   `.\n\x1b[0m");
        printf("\x1b[38;5;46m       `:.     --'         `-'\n\x1b[0m");
        printf("                                       Pulsa ENTER para empezar \n");
    

    return 0;
}

