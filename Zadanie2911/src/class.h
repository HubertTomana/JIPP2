//
// Created by huber on 29.11.2021.
//

#ifndef JIPP2_CLASS_H
#define JIPP2_CLASS_H

#include <iostream>

using namespace std;


class Note {
protected:
    string title;

public :
    string getTitle();
    void setTitle(string title);
    //virtual string getContent();
    //virtual void setContent(string *napis);
};

class TextNote : public Note {
private :
    string content;

public:
    string getContent();
    void setContent(string content);
};
/*
class ListNote : public Note {
private:
    string content[100];

public :
    string getContent() {
        return *content;
    }
    void setContent(string *content) {
        //this->*content = content;
    }
};*/

class NoteDirector {
private :
    string notesList[100];
    int used=0;

public:
    void addNote();
    void deleteNote();
    void editNote();
    void clearAllNotes();
    void printAll();
};


#endif //JIPP2_CLASS_H
