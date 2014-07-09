#include "config.h"

#include <stdio.h>
#include "SDL/SDL.h"
#include <Python.h>


#define RESOURCE(item) RESOURCE_PATH item

void hello()
{
    puts("Hello World!");
}

void load_image()
{
    //The images
    SDL_Surface* hello = NULL;
    SDL_Surface* screen = NULL;

    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );

    //Set up screen
    screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );

    //Load image
    hello = SDL_LoadBMP( RESOURCE("hello.bmp") );

    //Apply image to screen
    SDL_BlitSurface( hello, NULL, screen, NULL );

    //Update Screen
    SDL_Flip( screen );

    //Pause
    SDL_Delay( 5000 );

    //Free the loaded image
    SDL_FreeSurface( hello );

    //Quit SDL
    SDL_Quit();
}


void run_code(char * module)
{
    Py_Initialize();
    PyRun_SimpleString("from sys import path\n"
                       "path.append( 'scripts/' );\n");

    PyImport_Import(
        PyString_FromString(module)
    );

    Py_Finalize();
}


