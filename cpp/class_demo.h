#ifndef CLASS_DEMO_H_
#define CLASS_DEMO_H_

class Base
{
   public:
    virtual void Func1(int x);
    void Func2(int x);
    void Func3(int x);
};

class Subclass : public Base
{
   public:
    virtual void Func1(int x);
    void Func2(int x);
	void Func3(int x);
    void Func3(float x);
    void Func3(double x);
};

#endif // CLASS_DEMO_H_
