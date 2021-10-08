#include "unorderedSetType.h"
#include <iostream>

using namespace std;

void unorderedSetType::insertAt(int location, int insertItem) {
   if(!isEmpty())
   {
       if(seqSearch(insertItem)!=-1)
       {
           cout<<"Item already exists in Set. Cannot insert."<<endl;
       }
       else
           unorderedArrayListType::insertAt(location,insertItem);
   }
   else
   {
       unorderedArrayListType::insertAt(location,insertItem);
   }

}

//insert at end

void unorderedSetType::insertEnd(int insertItem) {
   if(!isEmpty())
   {
       if(seqSearch(insertItem)!=-1)
       {
           cout<<"Item already exists in Set. Cannot insert."<<endl;
       }
       else
           unorderedArrayListType::insertEnd(insertItem);
   }
   else
   {
       unorderedArrayListType::insertEnd(insertItem);
   }
}

//replace at a given location
void unorderedSetType::replaceAt(int location, int repItem) {
   if(!isEmpty())
   {
       if(seqSearch(repItem)!=-1)
       {
               cout<<"Item already exists in Set. Cannot replace."<<endl;
       }
       else
       {
           unorderedArrayListType::replaceAt(location,repItem);
       }
   }
}

//constructor
unorderedSetType::unorderedSetType(int size):
unorderedArrayListType(size) {
}