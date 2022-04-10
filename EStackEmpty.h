#ifndef ESTACKEMPTY_H
#define ESTACKEMPTY_H

#include "EStackException.h"
#include <QString>

class EStackEmpty : public EStackException
{


    public:

    explicit EStackEmpty(QString arg);

    explicit EStackEmpty(EStackEmpty *arg);

};



#endif // ESTACKEMPTY_H
