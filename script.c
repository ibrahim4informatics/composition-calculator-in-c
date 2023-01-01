#include <stdio.h>;
/*
   -------------------------------------------------------------------------
   | Author => Ibrahim Elkhalil Benyahia                                   |
   | DZ Developement Comunity                                              |
   |                                                                       |
   | its programme to claculate composition with C programming language    |
   | written with methode to be simple and easy to read to help every body |
   | looking for this kinde of logics peace ....                           |
   -------------------------------------------------------------------------
*/

// factoriale function declaration
long factorial(long x);
// composition function declaration
long composition(long n, long p);
// main function 
int main(void)
{
    // defining variable nedded in main fuction
    int run = 0;
    long n;
    long p;
    // logic to make the programme end by typing 1
    while (run != 1)
    {
        // taking n value from user
        printf("enter the n value=> ");
        scanf("%d", &n);
        // taking p value from user
        printf("enter the p value=> ");
        scanf("%d", &p);
        // condition for composition law
        if (n >= p)
        {
            long x = composition(n, p);
            printf("the result is => %ld", x);
        }
        // error of composition law
        else if (n < p)
        {
            printf("\nsorry make sure tha n >= p");
        }
        // asking user for ending programme or not 1 to end it or 0 to  continue  
        printf("\nif you want to end the programme type 1 (type 0 to start again) => ");
        scanf("%d", &run);
        // ending the programme
        if (run == 1){
            printf("programme ended");
            return 0;
        }
        // main code end
    }
}

// factoriale function logic
long factorial(long x)
{
    long result = 1;
    if (x > 0)
    {
        for (x; x > 1; x -= 1)
        {
            result *= x;
        }
    }
    return result;
}
// composition function declaration
long composition(long n, long p)
{
    long z = n - p;
    long result = factorial(n) / (factorial(p) * factorial(z));
    return result;
}