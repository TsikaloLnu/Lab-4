#ifndef TABLE_H
#define TABLE_H

#include "furniture.h"

class table : public furniture {
public:
    table() {
        SetMaterial("металу");
        SetLegs(4);
        SetPurpose("прийому їжі");
        CreateFurniture();
        Describe();
    }
};

#endif
