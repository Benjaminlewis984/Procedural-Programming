/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Procedural Programming
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>
#include <map>

int maxlen(const int [], int);

int main() {

//  Plateau Program - max sequence length
    int sequence [13] = {1, 1, 1, 2, 3, 3, 5, 6, 6, 6, 6, 7, 9};
    int sizeOfSeq = sizeof(sequence)/ sizeof(sequence[0]);
    int mode = maxlen(sequence, sizeOfSeq);
    std::cout << "The mode is : " << mode << std::endl;

    return 0;
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
