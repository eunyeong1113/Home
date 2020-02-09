#include <iostream>
using namespace std;

class Storage
{
private:
   int nData;
   int strg[20];
public :
   Storage(int nsize = 0);
   void showList();
   int mem3m();
   int cntBiggerThen(int n); 
   void add_Strg(Storage s2);
};

void main()
{
   int num;
   int number;
   cout << "숫자를 입력해 주세요 :";
   Storage s1(10);
   s1.showList();
   cout << endl;
   cout << "1의자리가 3의 배수인 수의 개수는 ";
   num = s1.mem3m();
   cout << num << "개입니다";
   cout << endl;
   cout << "숫자하나를 입력해 주세요 : ";
   cin >> number;
   cout << number << "보다 큰 수는" << s1.cntBiggerThen(number) << "개 입니다.";
   cout << endl;
   cout << "숫자를 입력해 주세요 :";
   Storage s2(15);
   s2.showList();
   cout << endl;
   cout << "1의자리가 3의 배수인 수의 개수는 ";
   num = s2.mem3m();
   cout << num << "개입니다";
   cout << endl;
   cout << "숫자하나를 입력해 주세요 : ";
   cin >> number;
   cout << number << "보다 큰 수는" << s2.cntBiggerThen(number) << "개 입니다.";
   cout << endl;
   s1.add_Strg(s2);
   s1.showList();
}

Storage::Storage(int nsize)
{
   nData = nsize;
   for (int i = 0; i < nsize; i++)
      cin >> strg[i];
}

void Storage::showList()
{
   if (nData <= 20)
   {
      cout << nData << " : ";
      for (int i = 0; i < nData; i++)
      {
         cout << strg[i] << " ";
      }
   }
   else
   {
      cout << "덧셈을 수행할수 없음.";
      exit(0);
   }
}
int Storage::mem3m()
{
   int count;
   count = 0;
   for (int i = 0; i < nData; i++)
   {
      if (strg[i] % 10 == 3 || strg[i] % 10 == 6 || strg[i] % 10 == 9)
         count++;
   }
   return count;
}
int Storage::cntBiggerThen(int n)
{
   int cnt = 0;
   for (int i =0;i<nData;i++)
   {
      if (strg[i] > n)
         cnt++;
   }
   return cnt;
}
void Storage::add_Strg(Storage s2)
{
   int count = 0;
   int over = 0;
   for (int i = 0; i < s2.nData; i++)
   {
      for (int j = 0; j < nData; j++)
      {
         if (s2.strg[i] == strg[j])
         {
            over = 1;
            count++;
         }
      }
      if (over != 1)
         strg[nData + i-count] = s2.strg[i];//카운터값빼줘야지 쓰레기값안들어감
      over = 0;
   }
   nData += s2.nData-count;//이걸해줘야 한꺼번에합쳐짐//카운터값뺴줘야쓰레긱값뺴고들어감
