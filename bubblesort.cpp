#include <iostream> 
//#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

const int LENGTH = 10;

int * bubblesort(int values[LENGTH]) {
    bool sorted = false; 
    while (!sorted) {
        sorted = true;
        for (int c = 0; c < LENGTH; c++) {
            if (values[c] > values[c+1]) {
                int temp = values[c];
                values[c] = values[c+1];
                values[c+1] = temp;
                sorted = false;
            }
        }
    }
    return values;
}

int main()
{
    int count = 10;
    int values[count];
    
    /* initialize random seed: */
    srand (time(NULL));
    
    /* populate randomly */
    for (int c = 0; c < LENGTH; c++) {
        values[c] = rand() % 100;
    }
    
    /* output original */
    std::cout << "Input: ";
    for (int c = 0; c < LENGTH; c++) {        
        std::cout << values[c] << " ";
    }    
    std::cout << "\n";
    
    /* get sort array */
    int *sortedvalues = bubblesort(values);
    
    /* output */
    std::cout << "Output: ";
    for (int c = 0; c < LENGTH; c++) {        
        std::cout << sortedvalues[c] << " ";
    }    
    std::cout << "\n";
}
