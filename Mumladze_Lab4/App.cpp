#include "DataManager.h"

using namespace System;

int main(array<String^>^ args) {
	BookManager^ bm = gcnew(BookManager);
	bm->ReadBookListFromFile();
	return 0;
}