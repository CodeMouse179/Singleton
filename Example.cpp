#include "Singleton.hpp"

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
    return 0;
}