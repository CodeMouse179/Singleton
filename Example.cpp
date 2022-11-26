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

class NormalClass2
{
public:
    int value;

    NormalClass2(int value)
    {
        this->value = value;
    }
};

int main()
{
    //Usage 1 (Inherit class CodeMouse::Singleton):
    TestClass instance = TestClass::GetInstance();
    a instance_a = a::GetInstance();

    //Usage 2 (Generic static function):
    NormalClass instance2 = CodeMouse::Singleton<NormalClass>::GetInstance();

    //Usage 3 (Generic static function):
    NormalClass2 instance3 = CodeMouse::Singleton<NormalClass2>::GetInstance(10);

    return 0;
}