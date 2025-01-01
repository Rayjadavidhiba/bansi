#include<iostream.h>
#include<conio.h>
class MemMil
{
   private:
   int m_value1;
   double m_value2;
   char m_value3;
   public:
   MemMil():m_value1(1),m_value2(2.2),m_value3('c')
   {
   }
   void print()

   {
     cout<<"MemMil("<<m_value1<<","<<m_value2<<","<<m_value3<<")\n";
   }
};
int main()
{
  MemMil MemMil;
  MemMil.print();
  return 0;
}