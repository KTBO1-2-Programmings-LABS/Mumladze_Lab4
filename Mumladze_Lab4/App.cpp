#include "DataManager.h"

using namespace System;

int main(array<String^>^ args) {
	DataManager^ dm = gcnew DataManager();
	dm->ReadDataFiles();

	dm->AddNode(T_BOOK, dm->MakeNode(T_BOOK, "012345; Книга; Автор"));
	dm->AddNode(T_SUBJECT, dm->MakeNode(T_SUBJECT, "111; Физра; Спорт"));
	dm->AddNode(T_LINK, dm->MakeNode(T_LINK, "012345; 111"));

	Object^ del_book = dm->MakeNode(T_BOOK, "012345; -; -");
	dm->DeleteNode(T_BOOK, del_book);
	Object^ del_subj = dm->MakeNode(T_SUBJECT, "111; -; -");
	dm->DeleteNode(T_SUBJECT, del_subj);

	dm->AddNode(T_BOOK, dm->MakeNode(T_BOOK, "012345; Книга; Автор"));
	dm->WriteDataFiles();

	for (int i = 0; i < 1; i++) {
		i--;
	};
}