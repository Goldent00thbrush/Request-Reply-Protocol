#include "Message.h"

Message::Message(void *p_message, size_t p_message_size){
    message = new char [p_message_size];
    *(char *)message = *(char *)p_message;
    message_size = p_message_size;
}

char* Message::marshal(){

}
void* Message::getMessage(){

}
size_t Message::getMessageSize(){
    return message_size;
}
MessageType Message::getMessageType(){
    return message_type;
}
void Message::setMessage (void *message, size_t message_size){
    *(char *)this->message = *(char *)message;
    this->message_size = message_size;

}
void Message::setMessageType (MessageType message_type){
    this->message_type = message_type;
}

Message::~Message(){
    
}