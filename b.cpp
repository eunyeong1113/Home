#include <iostream>
using namespace std;

class CharStorage
{
private :
   char Cstrg[10];
   int n;
public :
   CharStorage(int n = 0);
   CharStorage(char * str);
   void showStorage();
   int CntChar(char ch);
   void ListAllCnt();
};

void main()
{
   int num;
   char aa;
   cout << "몇개를 입력하시겠습니까? ";
   cin >> num; 
   CharStorage s2(num);
   s2.showStorage();
   cout << "문자 하나 입력 : ";
   cin >> aa;
   cout << "입력하신 문자 " << aa << "랑 같은 문자의 개수는 " << s2.CntChar(aa) << "개입니다";
   cout << endl;
   s2.ListAllCnt();
}

CharStorage::CharStorage(int n) : n(n)
{
   for (int i = 0; i < n; i++)
      cin >> Cstrg[i];
}
CharStorage::CharStorage(char * str)
{
   for (int i = 0; i < n; i++)
      str = Cstrg;
}
void CharStorage::showStorage()
{
   cout << n << " : ";
   for (int i = 0; i < n; i++)
      cout << Cstrg[i];
}
int CharStorage::CntChar(char ch)
{
   int count = 0;
   
   for (int i = 0; i < n; i++)
   {
      if (Cstrg[i] == ch)
         count++;
   }
   return count;
}
void CharStorage::ListAllCnt()
{
   char temp[10];
   int cnt2 = 0;
   for (int i = 0; i < n; i++)
   {
      int cnt = 0;// 각각 배열의 원소값에 중복되는 개수가 몇개잇는지 확인할수잇다.
      for (int j = 0; j <= i; j++)
      {
         if (temp[j] != Cstrg[i])
            cnt++;
      }
      if (cnt == i + 1)
      {
         temp[cnt2] = Cstrg[i];
         cnt2++;
      }
   }
   for (int i = 0; i < cnt2; i++)
      cout << Cstrg[i] << ":" << CntChar(temp[i]);
}
