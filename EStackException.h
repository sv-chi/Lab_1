#ifndef ESTACKEXCEPTION_H
#define ESTACKEXCEPTION_H

#include <QString>

class EStackException{

    private:

        QString message;

    public:

        EStackException();
        EStackException(QString arg_message);
        EStackException(EStackException *arg);
        ~EStackException();

        QString what();
};

#endif // ESTACKEXCEPTION_H
