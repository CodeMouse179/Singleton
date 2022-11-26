//     +--------------------------------------------------------------------------------+
//     |                                 Singleton v1.0.0                               |
//     |  Introduction : Generic Singleton for C++                                      |
//     |  Modified Date : 2022/11/26                                                    |
//     |  License : MIT                                                                 |
//     |  Source Code : https://github.com/CodeMouse179/Singleton                       |
//     |  Readme : https://github.com/CodeMouse179/Singleton/blob/main/README.md        |
//     |                                                                                |
//     |                             Designer : CodeMouse179                            |
//     |  Email : codemouse179@gmail.com                                                |
//     |  Github : https://github.com/CodeMouse179                                      |
//     |  Bilibili : https://space.bilibili.com/3461577785215838                        |
//     +--------------------------------------------------------------------------------+

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