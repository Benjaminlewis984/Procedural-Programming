/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Procedural Programming
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>
#include <map>

int maxlen(int [], int);

int main() {

//  Plateau Program - max sequence length
    int sequence [13] = {1, 1, 1, 2, 3, 3, 5, 6, 6, 6, 6, 7, 9};
    int sizeOfSeq = sizeof(sequence)/ sizeof(sequence[0]);
    maxlen(sequence, sizeOfSeq);
    std::cout << "Yee" << std::endl;

    return 0;
}

int maxlen(int sequence[], int size)
{
    int numOfMaxSeqLen;
    std::map<int, int> sequenceMap;

    for (int i = 0; i < size; i++)
    {
        if(sequenceMap.empty())
        {
            sequenceMap.insert({sequence[i], 1});
        }
        if (sequence[i] == sequence[i+1])
        {
            int a = sequenceMap.at(sequence[i]);
            auto b = sequenceMap.find(sequence[i]);
            b->second++;
            std::cout << ".find() points to " << b->first <<
                 " = " << b->second << std::endl;
        } else {
            sequenceMap.insert({sequence[i], 1});
        }
    }



    pair<int, int> findEntryWithLargestValue(
            map<int, int> sampleMap)
    {

        // Reference variable to help find
        // the entry with the highest value
        pair<int, int> entryWithMaxValue
                = make_pair(0, 0);

        // Iterate in the map to find the required entry
        map<int, int>::iterator currentEntry;
        for (currentEntry = sampleMap.begin();
             currentEntry != sampleMap.end();
             ++currentEntry) {

            // If this entry's value is more
            // than the max value
            // Set this entry as the max
            if (currentEntry->second
                > entryWithMaxValue.second) {

                entryWithMaxValue
                        = make_pair(
                        currentEntry->first,
                        currentEntry->second);
            }
        }

    return numOfMaxSeqLen;
}
