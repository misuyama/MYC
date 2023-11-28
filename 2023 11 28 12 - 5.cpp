#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    operator string() {
        return "사진";
    }
};

class Message {
private:
    int sendTime;
    string sendName;

public:
    Message(int sendTime, string sendName) {
        this->sendTime = sendTime;
        this->sendName = sendName;
    }

    int GetSendTime() const {
        return sendTime;
    }

    string GetSendName() const {
        return sendName;
    }
};

class TextMessage : public Message {
private:
    string text;

public:
    TextMessage(int sendTime, string sendName, string text)
        : Message(sendTime, sendName) {
        this->text = text;
    }

    string GetText() const {
        return text;
    }
};

class ImageMessage : public Message {
private:
    Image* image;

public:
    ImageMessage(int sendTime, string sendName, Image* image)
        : Message(sendTime, sendName) {
        this->image = image;
    }

    Image* GetImage() const {
        return image;
    }
};

int main() {
    Image* dogImage = new Image;
    TextMessage* hello = new TextMessage(10, "김태우", "안녕");
    ImageMessage* dog = new ImageMessage(20, "김태우", dogImage);

    cout << "보낸 시간 : " << hello->GetSendTime() << endl;
    cout << "보낸 사람 : " << hello->GetSendName() << endl;
    cout << "내용 : " << hello->GetText() << endl;

    cout << "보낸 시간 : " << dog->GetSendTime() << endl;
    cout << "보낸 사람 : " << dog->GetSendName() << endl;
    cout << "내용 : " << (string)*dog->GetImage() << endl;

    delete dogImage;
    delete hello;
    delete dog;
}
