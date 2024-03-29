#ifndef MESSAGE_H
#define MESSAGE_H

#include <cstddef>
#include <string>

enum MessageType {
    Request,
    Reply
};

class Message{

    private:
        MessageType message_type;
        void * message;
        size_t message_size;

    public:
        Message(void *p_message, size_t p_message_size);
        Message(char *marshalled_base64);
        char *marshal();
        void *getMessage();
        size_t getMessageSize();
        MessageType getMessageType();
        void setOperation (int _operation);
        void setMessage (void * message, size_t message_size);
        void setMessageType (MessageType message_type);
        ~Message();

};
#endif // MESSAGE_H