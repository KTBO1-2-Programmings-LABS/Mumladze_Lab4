using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref struct Link {
	String^ book;
	String^ subject;
};

// Структура записи одной книги
ref struct Book {
	String^ ISBN;
	String^ title;
	String^ author;
};

ref struct Subject {
	String^ name;
	String^ description;
};

// Класс, управляющий информацией о книгах
ref class BookManager {
private:
	// Имя файла с данными о книгах
	String^ fileName;
	// Список книг
	ArrayList^ books;
	// Список связей {книга, дисциплина}
	ArrayList^ links;
public:
	// Конструктор класса
	BookManager(void);
	// Чтение списка книг из файла
	void ReadBookListFromFile(void);
	// Запись списка книг в файл
	void WriteBookListToFile(void);
	// Добавление книги в список (парсит ввод по запятой)
	void AddBookToList(String^);
	// Удаление книги из списка (по ISBN коду)
	void RemoveBookFromList(String^);
	// Получить ISBN код книги по ее названию
	String^ FindISBNByName(String^);
};

/* // Класс, управляющий информацией о дисциплинах
ref class SubjectManager {
private:
	// Имя файла с данными о книгах
	String^ fileName;
	// Список дисциплин
	ArrayList^ Books;
	// Список связей {книга, дисциплина}
	ArrayList^ Links;
public:
	// Конструктор класса
	SubjectManager(void);
	// Чтение списка дисциплин из файла
	void ReadSubjectListFromFile(void);
	// Запись списка в файл
	void WriteSubjectListToFile(void);
	// Добавление книги в список
	void AddSubjectToList(String^);
	// Удаление книги из списка
	void RemoveSubjectFromList(String^);
};

ref class LinkManager {
private:
	// Указатель на объект класса BookManager
	BookManager^ bm;
	// Указатель на объект класса SubjectManager
	SubjectManager^ sm;
	// Имя файла с данными о связях
	String^ fileName;
	// Список связей {книга, дисциплина}
	ArrayList^ links;
public:
	// Конструктор класса
	LinkManager(void);
	// Чтение списка связей из файла
	void ReadLinkListFromFile(void);
	// Запись списка связей в файл
	void WriteLinkListToFile(void);
	// Найти связи по книге
	void FindSubjectsByBook(String^);
	// Найти связи по дисциплине
	void FindBooksBySubject(String^);
};

*/