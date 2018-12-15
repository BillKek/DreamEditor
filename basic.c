
/*
Ol� Sam. L. !

Atualizei o projeto s� para esse teste.


Procesa assim ( vamos focar no b�sico ):
01 - Compile a API com make.
02 - Compile e teste PRIMEIRO ( basic.c ) ...
03 - Agora Compile e teste ( test_editor.c ) ... e se executar normal  clicar no EDITOR e ( CTRL + R ).

Favor informar os resultados ...

OBS: O EDITOR retirei/comentei a parte de cores e numeros de linhas ... RESUMO: s� o b�sico.

OBS2: Levantei da cama s� para fazer esse teste ... s� vou ler a resposta desse E-mail amanh� ...

Grato !
*/


//-------------------------------------------------------------------
//
// Basic Example:
//
// FILE:
//   basic.c
//
// COMPILE:
//   gcc basic.c -o basic libapp.a -lSDL -Wall
//
//-------------------------------------------------------------------
//
#include "src/app.h"

#define ID_BUTTON   1000

OBJECT *zero = NULL;
OBJECT *button;
int count;

void call_button (int msg) {
    printf ("Count: %d\n", count++);
}

void CreateInterface (void) {
    zero = app_GetRoot ();
    if (zero) {
        button = app_NewButton (zero, ID_BUTTON, 100, 100, "Hello");
        if (button) {
            app_SetCall (button, call_button);
        }
    }
}

int main (int argc, char **argv) {
    if (app_Init(argc,argv)) {
        CreateInterface();
        app_Run (NULL);
    }
    return 0;
}

