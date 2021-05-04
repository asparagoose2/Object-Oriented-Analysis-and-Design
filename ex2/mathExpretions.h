#include <iostream>

using namespace std;

class Expretions
{
public:
    Expretions() {};
    ~Expretions() {};
    virtual Expretions* clone() const = 0;
    virtual double calculate() const = 0;
};

class Number : public Expretions
{
private:
    double value;
public:
    Number(double val) : value(val) {}
    double calculate() const {return value;}
    Number* clone() const {return new Number(*this);}
    ~Number() {};
};

class BinaryExpression : public Expretions
{
protected:
    Expretions* left;
    Expretions* right;
public:
    BinaryExpression(Expretions& l , Expretions& r) {left = l.clone(); right = r.clone();}
    ~BinaryExpression() {delete left; delete right;};
};

class Plus : public BinaryExpression
{
public:
    Plus(Expretions& l , Expretions& r) : BinaryExpression(l,r) {}
    ~Plus() {};
    double calculate() const {return left->calculate() + right->calculate();}
    Plus* clone() const {return new Plus(*this);}
};

class Minus : public BinaryExpression
{
public:
    Minus(Expretions& l , Expretions& r) : BinaryExpression(l,r) {}
    ~Minus() {};
    double calculate() const {return left->calculate() - right->calculate();}
    Minus* clone() const {return new Minus(*this);}
};

class Div : public BinaryExpression
{
public:
    Div(Expretions& l , Expretions& r) : BinaryExpression(l,r) {}
    ~Div() {};
    double calculate() const {return left->calculate() / right->calculate();}
    Div* clone() const {return new Div(*this);}
};

class Mul : public BinaryExpression
{
public:
    Mul(Expretions& l , Expretions& r) : BinaryExpression(l,r) {}
    ~Mul() {};
    double calculate() const {return left->calculate() * right->calculate();}
    Mul* clone() const {return new Mul(*this);}
};

