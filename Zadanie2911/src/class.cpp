//
// Created by huber on 29.11.2021.
//

#include "class.h"

string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string content) {
    this->content = content;
}
