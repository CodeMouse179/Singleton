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

class NormalClass
{
public:
    NormalClass()
    {
    }
};

int main()
{
    //Usage 1 (Inherit class CodeMouse::Singleton):
    TestClass instance = TestClass::GetInstance();
    a instance_a = a::GetInstance();

    //Usage 2 (Generic static function):
    NormalClass instance2 = CodeMouse::Singleton<NormalClass>::GetInstance();

    return 0;
}