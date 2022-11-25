#ifndef CODEMOUSE_SINGLETON_HPP
#define CODEMOUSE_SINGLETON_HPP

#define SINGLETON_CLASS(class_name) class class_name : public CodeMouse::Singleton<class_name>

namespace CodeMouse
{
    //Generic Singleton <static class>
    template<typename T>
    class Singleton
    {
    protected: //Allow subclasses to access the constructor.
        Singleton()
        {
        }

    public:
        static T& GetInstance()
        {
            static T instance;
            return instance;
        }
    };
}

#endif