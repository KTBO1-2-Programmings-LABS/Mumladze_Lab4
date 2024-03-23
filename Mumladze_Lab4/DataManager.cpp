#include "DataManager.h"

using namespace System;
using namespace System::IO;

BookManager::BookManager(void) {
    this->fileName = gcnew String("./Data/Books.txt");
    this->books = gcnew ArrayList();
    this->links = gcnew ArrayList();
}

void BookManager::ReadBookListFromFile(void) {
    StreamReader^ sr = File::OpenText(fileName);
    String^ line;
    while ((line = sr->ReadLine()) != nullptr) {
        array<String^>^ bookData = line->Split(',');
        if (bookData->Length == 3) {
            Book^ temp = gcnew Book();
            temp->ISBN = bookData[0]->Trim();
            temp->title = bookData[1]->Trim();
            temp->author = bookData[2]->Trim();
            this->books->Add(temp);
        }
    }
    sr->Close();
}

void BookManager::WriteBookListToFile(void) {

}

void BookManager::AddBookToList(String^ raw) {

}

void BookManager::RemoveBookFromList(String^ ISBN) {

}

String^ BookManager::FindISBNByName(String^ name) {
    return "";
}

