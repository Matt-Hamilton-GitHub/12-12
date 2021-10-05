#include "unorderedSetType.h"
#include <iostream>

using namespace std;


void unorderedSetType::insertAt(int location, int insertItem)
{
int index = seqSearch(insertItem);
if (index == -1)  {
if(location < 0 || location > length) {
cout << "Invalid location for insertion\n";
return;
}
if(length == maxSize){
cout << "Can't insert in a full list.\n";
}
else{
insertEnd(insertItem);
}
}
}

void unorderedSetType::insertEnd(int insertItem)
{
if(seqSearch(insertItem) != -1)
return;
if(length != maxSize)
insertEnd(insertItem);
else
std::cout << "Can't insert in a full list.\n";
}

void unorderedSetType::replaceAt(int location, int repItem)
{
if(seqSearch(repItem) != -1)
return;
if(location < 0 || location >= length){
std::cout << "Invalid location\n";
return;
}
list[location] = repItem;
}