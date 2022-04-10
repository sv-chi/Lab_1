

#include "EStackException.h"

EStackException::EStackException()
{

}
EStackException::EStackException(QString arg_message){

    message = arg_message;
}

EStackException::EStackException(EStackException *arg){

    message = arg->message;
}

EStackException::~EStackException(){
    //delete message;
}

QString EStackException::what(){
    return message;
}



