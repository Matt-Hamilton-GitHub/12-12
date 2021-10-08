
#ifndef UNORDEREDSETTYPE_H
#define UNORDEREDSETTYPE_H


#include "unorderedArrayListType.h"
#include "arrayListType.h"

class unorderedSetType : public unorderedArrayListType
{
	
public:
void insertAt(int location, int insertItem);
void insertEnd(int insertItem);
void replaceAt(int location, int repItem);

unorderedSetType(int size);


} ;

#endif  /* UNORDEREDSETTYPE_H */