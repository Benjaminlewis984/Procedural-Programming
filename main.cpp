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

int maxlen(const int [], int);
void bigInt(const int);
int arrayReduce(int [], int);
int bs(int [], int, int);
int bsr(int [], int, int);

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

double sec(void)
{
    return double(clock())/double(CLOCKS_PER_SEC);
}

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
    //  Array Processing. Creating a function reduce(array, size) that reduces
    //  the given array's 3 largest integers. i.e a=(9,1,1,6,7,1,2,6,6,6,7,1,9)
    //  reduce(a, size) returns a=(1,1,1,2,1) since 6,7,9 are the 3 largest.
    int array[16] = {9,1,1,6,7,1,2,3,3,5,6,6,6,6,7,9};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int reducedArraySize = arrayReduce(array, arraySize);
    std::cout << "Reduced Size : " << reducedArraySize << std::endl;}

    //  Iteration versus recursion
    //  Create a function bs() that is a binary search function that returns
    //  the index i of a sorted array. Using both iteration and recursion.
    //  Making the size of n and k have a runtime process of over 3 seconds.
    int n, K;
    n = K = 1600;
    auto t1 = std::chrono::high_resolution_clock::now();
    for(int j = 0; j < K; j++)
    {
        for(int i = 0; i < n; i++)
        {
            int a[i];
            int sizeOfa = sizeof(a)/ sizeof(a[0]);
            if(bs(a, n, i) != i)
            {
                std::cout << "\nERROR";
            }
        }
    }
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    std::cout << "Iterative version duration in milliseconds : " << duration <<std::endl;
    t1 = std::chrono::high_resolution_clock::now();
    for(int j = 0; j < K; j++)
    {
        for(int i = 0; i < n; i++)
        {
            int a[i];
            int sizeOfa = sizeof(a)/ sizeof(a[0]);
            if(bsr(a, n, i) != i)
            {
                std::cout << "\nERROR";
            }
        }
    }
    t2 = std::chrono::high_resolution_clock::now();
    std::cout << "Recursive version duration in milliseconds : " << duration <<std::endl;


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

    std::cout << first << second << third << std::endl;
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

     for (int i = 0; i < RC_SIZE; i++) {

             //Row position
             for (int k = 0; k < size; k++)
             {
                 //Column position
                 for (int j = 0; j < RC_SIZE; j++) {
                     //Writes one row at a time. The digitArray[] is used for deciding which number will be printed.
                     std::cout << ascNumbers[(digitArray[k])][i][j];
                 }
             }
         std::cout << std::endl;
         }
 }

 int bs(int array[], int n, int value)
 {
    // Iteration approach
    for (int i = 0; i < n; i++)
    {
        if (array[i] == value){
            return array[i];
        }
    }


    return 0;
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
                maxLength = modeCount;
            }
            count = 1; // resets the count for the new baseNumber
            baseNumber = sequence[i];
        }
    }
    return maxLength;
}
