#include <stdio.h>

unsigned int rcshift(unsigned int, int);
unsigned int lcshift(unsigned int, int);
int wordlength(void);

int main()
{
    unsigned int n = 0xffff;
    int num = 4;
    
    printf("%d\n", wordlength());

    // %x is for hexadecimal
    printf("BEFORE: %x\n",n);
    n = rcshift(n,num);

    printf("AFTER RIGHT:  %x\n",n);
    n = lcshift(n,num * num);

    printf("AFTER LEFT:   %x\n",n); 
}  

unsigned int rcshift(unsigned int number, int howmany)
{
    int i;
    unsigned int mask = ~0; // -1

    mask = ~(mask >> 1);  //     ( 1111 1111  1111 1111  1111 1111  1111 1111 >> 0000 0000  0000 0000  0000 0000  0000 0001 ) 
                          // .'. ( 0111 1111  1111 1111  1111 1111  1111 1111 )
                          //    ~(mask >> 1)  == -(( 0111 1111  1111 1111  1111 1111  1111 1111 ) - ( 0000 0000  0000 0000  0000 0000  0000 0001 ))


    for( i = 0; i < howmany; i++)
    {
        if ( number & 01 ) // number == 4 which is ( 0000 0000  0000 0000  0000 0000  0000 0100 ) bitwise AND 01 which is ( 0000 0000  0000 0000  0000 0000  0000 0001 )
        number = (number >> 1) | mask;
        else            // if number == 4 else statement runs
        number >>= 1;   // number = number right shift 1
                        // ( 0000 0000  0000 0000  0000 0000  0000 0100 ) = ( 0000 0000  0000 0000  0000 0000  0000 0100 ) >> ( 0000 0000  0000 0000  0000 0000  0000 0001 )
    }
    return(number);
}
unsigned int lcshift(unsigned int number, int howmany)
{
    unsigned int r;
    r = rcshift(number, wordlength());
    return(r);
}

int wordlength(void)
{
    return 8;
}