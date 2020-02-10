#include <iostream>
#include<fstream>
using namespace std;

struct book
{
   char title[20]; //책 이름
   int price;      //책 가격
   char publiaher[20];  //출판사
};

class Library
{
private :
   book bliat[10];
   int count; //책의 수
public :
   Library(int n);
   void addBook();
   void ahowList();

};

Library::Library(int n)
{
   count = n;
}

void Library::addBook()
{
   for (int i =0; i<count; i++)
   {
      cout << "책 이름 : "; cin >> bliat[i].title;
      cout << "책 가격 : "; cin >> bliat[i].price;
      cout << "출판사 : "; cin >> bliat[i].publiaher;
   }
}

void Library::ahowList()
{  
   ofstream fout;
   fout.open("book.dat");//파일내보내기
   
   struct book id;
   cout<<endl;
   for (int i = 0; i < count; i++)
   {
      cout  <<" 책 이름 : " << bliat[i].title << endl;
      cout << " 책 가격 : " << bliat[i].price << endl;
      cout << " 출판사 : " << bliat[i].publiaher << endl;
   }
 
   for (int i = 0; i < count; i++)
   {
      fout  <<" 책 이름 : " << bliat[i].title << endl;
      fout << " 책 가격 : " << bliat[i].price << endl;
      fout << "  출판사 : " << bliat[i].publiaher << endl;
   }
   fout.close();
}

void main()
{

   Library Ib(2);
   Ib.addBook();
   Ib.ahowList();
}
