#include "Singleton.hpp"

SINGLETON_CLASS(a)
{
public:
    a()
    {
    }
};

class TestClass : public CodeMouse::Singleton<TestClass>
{
public:
    TestClass()
    {
    }
};

int main()
{
    TestClass instance = TestClass::GetInstance();
    a instance_a = a::GetInstance();
    return 0;
}