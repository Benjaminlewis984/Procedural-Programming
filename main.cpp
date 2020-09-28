/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Procedural Programming
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>
#include <map>

#define NUM_DIM 7
#define SINGLE_DIGITS 10

int maxlen(const int [], int);
void bigInt(const int);

const char ascNumbers[SINGLE_DIGITS][NUM_DIM][NUM_DIM] = {
        {
                {' ', ' ', '@', '@', '@', '@', ' '},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', ' ', '@', '@', '@', '@', ' '}
        },

        {
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', '@', '@', '@', ' ', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', '@', '@', '@', '@', '@', '@'}
        },

        {
                {' ', ' ', ' ', '@', '@', '@', ' '},
                {' ', ' ', '@', '@', ' ', '@', '@'},
                {' ', ' ', ' ', ' ', '@', '@', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', '@', '@', ' ', ' ', ' '},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', '@', '@', '@', '@'}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', ' '},
                {' ', ' ', ' ', ' ', '@', ' ', ' '},
                {' ', ' ', ' ', '@', '@', '@', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', '@'},
                {' ', '@', '@', ' ', ' ', ' ', '@'},
                {' ', '@', '@', '@', '@', '@', ' '}
        },

        {
                {' ', ' ', ' ', '@', '@', '@', ' '},
                {' ', ' ', '@', ' ', '@', '@', ' '},
                {' ', '@', ' ', ' ', '@', '@', ' '},
                {' ', '@', '@', '@', '@', '@', ' '},
                {' ', ' ', ' ', ' ', '@', '@', ' '},
                {' ', ' ', ' ', ' ', '@', '@', ' '},
                {' ', ' ', ' ', ' ', '@', '@', ' '}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', ' ', ' ', ' ', ' ', '@', '@'},
                {' ', ' ', ' ', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', ' ', ' ', ' ', ' ', '@', '@'},
                {' ', ' ', ' ', ' ', '@', '@', ' '},
                {' ', ' ', ' ', '@', '@', ' ', ' '},
                {' ', ' ', '@', '@', ' ', ' ', ' '},
                {' ', '@', '@', ' ', ' ', ' ', ' '},
                {' ', '@', '@', ' ', ' ', ' ', ' '}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'}
        },

        {
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'},
                {' ', ' ', ' ', ' ', ' ', '@', '@'},
                {' ', ' ', ' ', ' ', ' ', '@', '@'},
                {' ', '@', '@', '@', '@', '@', '@'}
        }
};

int main() {

//  Plateau Program - max sequence length
    int sequence [13] = {1, 1, 1, 2, 3, 3, 5, 6, 6, 6, 6, 7, 9};
    int sizeOfSeq = sizeof(sequence)/ sizeof(sequence[0]);
    int mode = maxlen(sequence, sizeOfSeq);
    std::cout << "The mode is : " << mode << std::endl;

//    BigInt 3 dimensional array that shows ascii symbol @ written for integers 0 - 9
    int numPrint = 1;
    for (int i = 0; i <= 9; i++)
    {
        bigInt(numPrint);
        std::cout << std::endl;
        if (numPrint != 9)
        {
            numPrint = (numPrint * 10) + (numPrint + 1);
        } else {
            numPrint = 1234567890;
        }
    }

    return 0;
}

 void bigInt(const int number)
 {
     int size = std::to_string(number).length();

         for (int i = 0; i < NUM_DIM; i++) {
             //checks each char in the argument
             for (int k = 0; k < size; k++) {
                 //positions column for each number
                 for (int j = 0; j <NUM_DIM; j++) {
                     //this int determins which number will be written in the NUMBERS array
                     //the entire row is written for each number before moving to the next row
                     std::cout << ascNumbers[(number)][i][j];
                 }
                 std::cout << std::endl;
             }
         }


 }

int maxlen(const int sequence[], int sizeOfSeq)
{
    int baseNumber = sequence[0];
    int mode = baseNumber;
    int count = 1;
    int modeCount = 1;
  /*
   * Count will keep track of how many occurrences there are of sequential numbers that are the same.
   * count will switch with modeCount when there is no longer the same sequential number.
   * This solution will have a time complexity of O(n) since the for loop only iterates through the
   * array once i.e there are n number of elements in the array and each element is visited once.
   * Therefore the number of elements n is equal to the amount of time the program will take O(n)
   */
    for (int i = 1; i < sizeOfSeq; i++)
    {
        if (sequence[i] == baseNumber)
        { // count occurrences of the current number
            ++count;
        }
        else
        {
            if (count > modeCount)
            {
                modeCount = count;
                mode = baseNumber;
            }
            count = 1; // resets the count for the new baseNumber
            baseNumber = sequence[i];
        }
    }
    return mode;
}
