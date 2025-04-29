#ifndef OFFICECHAIR_H
#define OFFICECHAIR_H

#include "chair.h"

class officeChair : public chair {
    string type;

protected:
    void SetType(string type) {
        this->type = type;
    }

public:
    officeChair(string type) {
        SetType(type);
        cout << "Тип офісного стільця: " << type << "\n";
    }
};

#endif
