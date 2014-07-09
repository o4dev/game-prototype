
void print_header_msg(char * msg)
{
    printf("\e[1;1H\e[2J");
    puts(msg);
    puts("=====================================================");
}

void print_header()
{
    print_header_msg(
        #include "../res/text-intro.txt"
    );
}

void print_header_alt()
{
    print_header_msg( 
        #include "../res/text-intro-nopic.txt"
    );
}

