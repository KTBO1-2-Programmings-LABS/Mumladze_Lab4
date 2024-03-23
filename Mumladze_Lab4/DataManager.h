using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref struct Link {
	String^ book;
	String^ subject;
};

// ��������� ������ ����� �����
ref struct Book {
	String^ ISBN;
	String^ title;
	String^ author;
};

ref struct Subject {
	String^ name;
	String^ description;
};

// �����, ����������� ����������� � ������
ref class BookManager {
private:
	// ��� ����� � ������� � ������
	String^ fileName;
	// ������ ����
	ArrayList^ books;
	// ������ ������ {�����, ����������}
	ArrayList^ links;
public:
	// ����������� ������
	BookManager(void);
	// ������ ������ ���� �� �����
	void ReadBookListFromFile(void);
	// ������ ������ ���� � ����
	void WriteBookListToFile(void);
	// ���������� ����� � ������ (������ ���� �� �������)
	void AddBookToList(String^);
	// �������� ����� �� ������ (�� ISBN ����)
	void RemoveBookFromList(String^);
	// �������� ISBN ��� ����� �� �� ��������
	String^ FindISBNByName(String^);
};

/* // �����, ����������� ����������� � �����������
ref class SubjectManager {
private:
	// ��� ����� � ������� � ������
	String^ fileName;
	// ������ ���������
	ArrayList^ Books;
	// ������ ������ {�����, ����������}
	ArrayList^ Links;
public:
	// ����������� ������
	SubjectManager(void);
	// ������ ������ ��������� �� �����
	void ReadSubjectListFromFile(void);
	// ������ ������ � ����
	void WriteSubjectListToFile(void);
	// ���������� ����� � ������
	void AddSubjectToList(String^);
	// �������� ����� �� ������
	void RemoveSubjectFromList(String^);
};

ref class LinkManager {
private:
	// ��������� �� ������ ������ BookManager
	BookManager^ bm;
	// ��������� �� ������ ������ SubjectManager
	SubjectManager^ sm;
	// ��� ����� � ������� � ������
	String^ fileName;
	// ������ ������ {�����, ����������}
	ArrayList^ links;
public:
	// ����������� ������
	LinkManager(void);
	// ������ ������ ������ �� �����
	void ReadLinkListFromFile(void);
	// ������ ������ ������ � ����
	void WriteLinkListToFile(void);
	// ����� ����� �� �����
	void FindSubjectsByBook(String^);
	// ����� ����� �� ����������
	void FindBooksBySubject(String^);
};

*/