#include "DataManager.h"

using namespace System;

int main(array<String^>^ args) {
	LinkManager^ lm = gcnew LinkManager();
	BookManager^ bm = gcnew BookManager(lm);
	SubjectManager^ sm = gcnew SubjectManager(lm);
	lm->ReadLinkListFromFile();
	bm->ReadBookListFromFile();
	sm->ReadSubjectListFromFile();
	return 0;
}