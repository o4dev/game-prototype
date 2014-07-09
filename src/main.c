#include <stdio.h>
#include <Aurorae.h>
#include <unistd.h>

#include "msgs.c"


int main(int argc, char * argv[])
{
    print_header();
    hello();
    sleep(5);

    print_header_alt();
    hello();
    
    puts("[SDL TIME!]");

    load_image();

    print_header();
    printf("And now the time (from Python :D): \n\t");
    run_code("date");   
    puts("\npress <enter> for some poetry "
         "(about Python [Also from python])");
    getchar();

    print_header_alt();
    puts("\n\n>>> import this \n\n");
    run_code("this");   
    getchar();

    return 0;
}
