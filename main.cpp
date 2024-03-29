/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Procedural Programming
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>
#include <vector>
#include <chrono>

#define RC_SIZE 7
#define SINGLE_DIGITS 10
#define MAX_ARRAY_SIZE 90000

int maxlen(const int [], int);
void bigInt(const int);
int arrayReduce(int [], int);
int bs(int [], int, int);
int bs(int [], int, int, int);

void initializeArray(int* array) {
//  Simply fills out the array from 0 to the MAX_ARRAY_SIZE incr by 1
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) array[i] = i;
}

const char ascNumbers[SINGLE_DIGITS][RC_SIZE][RC_SIZE] = {
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

{   //  Segment 1
    //  Plateau Program - max sequence length
    int sequence [13] = {1, 1, 1, 2, 3, 3, 5, 6, 6, 6, 6, 7, 9};
    int sizeOfSeq = sizeof(sequence)/ sizeof(sequence[0]);
    int mode = maxlen(sequence, sizeOfSeq);
    std::cout << "The maximum length : " << mode << std::endl;
    std::cout << std::endl;
}

{   //  Segment 2
    //  BigInt 3 dimensional array that shows ascii symbol @ written for integers 0 - 9
    int numPrint = 1;
    for (int i = 0; i < 10; i++)
    {
        bigInt(numPrint);
        std::cout << std::endl;
        if (numPrint != 123456789)
        {
            numPrint = (numPrint * 10) + (i + 2);
        } else
        {
            numPrint = 1234567890;
        }
    }
}

{   //  Segment 3
    /* Array Processing. Creating a function reduce(array, size) that reduces
     * the given array's 3 largest integers. i.e a=(9,1,1,6,7,1,2,6,6,6,7,1,9)
     * educe(a, size) returns a=(1,1,1,2,1) since 6,7,9 are the 3 largest. */
    int array[16] = {9,1,1,6,7,1,2,3,3,5,6,6,6,6,7,9};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int reducedArraySize = arrayReduce(array, arraySize);
    std::cout << "Reduced Size : " << reducedArraySize << std::endl;}

    {// Segment 4
        /*  Iteration versus recursion
         * Create a function bs() that is a binary search function that returns
         * the index i of a sorted array. Using both iteration and recursion.
         * Making the size of n and k have a runtime process of over 3 seconds.*/
    int array[MAX_ARRAY_SIZE];
    initializeArray(array);
    int low = 0;
    int high = MAX_ARRAY_SIZE-1;
    int n, K;
    n = K = 1600;
    // Iteration
    auto t1 = std::chrono::high_resolution_clock::now();
    for(int j = 0; j < K; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(bs(array, n, i) != i)
            {
                std::cout << "\nERROR" << std::endl;
            }
        }
    }
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    std::cout << "Iterative version duration in milliseconds : " << duration1 <<std::endl;

    // Recursion
    t1 = std::chrono::high_resolution_clock::now();
    for(int j = 0; j < K; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(bs(array, low, high, i) != i)
            {
                std::cout << "\nERROR";
            }
        }
    }
    t2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    std::cout << "Recursive version duration in milliseconds : " << duration2 <<std::endl;
    std::cout << "Ratio between recursive and iterative function. Recursion is : x" << duration1/duration2 << " faster" << std::endl;

    /* Throughout all speed test between iteration and recursion, recursion was faster ever time
     * Consistantly rescursion was about x4 faster than iteration.
     * This is mainly because recursion uses a faster part of memory; i.e the stack.
     * Since the stack is a part of RAM it is able to do calculation at a much faster rate.*/
    }

    return 0;
}

int arrayReduce(int array[], int size)
{
//  First find three largest values
    int first, second, third;
    first = second = third = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > first)
        {
            third = second; second = first; first = array[i];
        } else if (array[i] > second && array[i] != first)
        {
            third = second; second = array[i];
        } else if (array[i] > third && array[i] != second && array[i] != first)
        {
            third = array[i];
        }
    }
//  Reduces array by values. O(n) time
    std::vector<int> reducedArray;
    for (int i = 0; i < size; i++)
    {
        if (array[i] != first && array[i] != second && array[i] != third)
        {
            reducedArray.push_back(array[i]);
        }
    }
    int reducedSize = reducedArray.size();
    // Commented section shows which values are the largest.
    // std::cout << first << second << third << std::endl;
    return reducedSize;
}

 void bigInt(const int number)
 {
     int size = std::to_string(number).length();
     int numDigit = number;
     int digitArray[size];
     int z = size - 1;
//   Getting individual digits from number and assigns it to digitArray to use for printing later.
     while (numDigit > 0)
     {
         int digit = numDigit % 10;
         numDigit /= 10;
         digitArray[z] = digit;
         --z;
     }
     for (int i = 0; i < RC_SIZE; i++)
     {
             //Row position
             for (int k = 0; k < size; k++)
             {
                 //Column position
                 //Writes one row at a time. The digitArray[] is used for deciding which number will be printed.
                 for (int j = 0; j < RC_SIZE; j++) std::cout << ascNumbers[(digitArray[k])][i][j];

             }
         std::cout << std::endl;
         }
 }

// Iteration approach
 int bs(int array[], int n, int value)
 {
    int low = 0;
    int high = n - 1;
    int middle = (low + high) / 2;
    if (low > high) return -1;
    if (value < array[middle])
    {
        for (int i = low; i < middle; i++) if (array[i] == value) return array[i];
    }
     if (value > array[middle])
     {
         for (int i = 0; i > middle; i--) if (array[i] == value) return array[i];
     }
 }

// Recursion approach
int bs(int array[], int low, int high, int value)
{
//  This function is based on the one provided in the CSC 600 reader.
    int middle = (low + high) / 2;
    if (low > high) return -1;
    if (value < array[middle]) return bs(array, low, middle-1, value);
    if (value > array[middle]) return bs(array, middle+1, high, value);
    return middle;
}

int maxlen(const int sequence[], int sizeOfSeq)
{
    int baseNumber = sequence[0];
    int mode = baseNumber;
    int maxLength = 0;
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
        // count occurrences of the current number
        if (sequence[i] == baseNumber) ++count;
        else
        {
            if (count > modeCount)
            {
                modeCount = count;
                mode = baseNumber;
                maxLength = modeCount;
            }
            count = 1; // resets the count for the new baseNumber
            baseNumber = sequence[i];
        }
    }
    return maxLength;
}
