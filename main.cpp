#include <iostream>
#include <stdlib.h>

class MyNumber
{
public:
  int a;
  void Print();
  int Inc();
  MyNumber Sum(MyNumber b);
private:
  bool IsPos();
};


void MyNumber::Print()
{
  std::cout << a;
}

int MyNumber::Inc()
{
  a++;
  if (IsPos())
	return a;
  else
  {
	a = -a;
	return a;
  }
}

MyNumber MyNumber::Sum(MyNumber b)
{
  MyNumber c;
  c.a = a;
  c.a = c.a + b.a;
  return c;
}

bool MyNumber::IsPos()
{
  if (a >= 0)
	return true;
  else
	return false;
}


int main(int argc, char** argv)
{
  bool f = true;
  float a = 0;

  std::cout << "Hi !!!\n";
  if (argc > 1)
  {
	a = atoi(argv[1]);
  }
  else
	return 1;

  
  MyNumber A;
  A.a = a;
  MyNumber B;
  B.a = A.Inc();
  MyNumber C;
  C = A.Sum(B);
  

  std::cout << " a = " << A.a << "b = " << B.a  << std::endl;
  std::cout << A.a << " + " << B.a << " = " << C.a << std::endl;
  C.a = -C.a;
  std::cout << "-c = " << C.a << std::endl;
  std::cout << C.Inc() << std::endl;
  return 0;
}
