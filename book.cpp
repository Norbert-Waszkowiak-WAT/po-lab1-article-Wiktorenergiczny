#include "author.h"
#include "chapter.h"
#include "book.h"
#include <iostream>
using namespace std;
Book::Book(): title(""), author(Author("","")), publicationYear(0){}
Book::Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> &bookChapter):
title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapter){}
void Book::addChapter(Chapter newChapter){
    chapters.push_back(newChapter);
}
    vector<Chapter> &Book::getChapters(){
return chapters;
    }