#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float re = 0, float im = 0) : real(re), imag(im) {}

    Complex &operator=(const Complex &); //����=���ǹ��츴�ƺ���
    Complex &operator+=(Complex &);
    friend Complex operator+(Complex &, Complex &);
    friend Complex operator-(Complex &, Complex &);
    void show();
    float operator*(Complex &);
    friend Complex &operator-=(Complex &, Complex &);
};

Complex &Complex::operator=(const Complex &right) //����=���ǹ��츴�ƺ���
{
    //�����������thisָ�룬ʵ����Ҳ���������������ɲ��������
    real = right.real, imag = right.real; //����Ҳ����������ǳ������  *this = right;
    return (*this);                       //��ֵ�����ֵ�����������
}
Complex &Complex::operator+=(Complex &right)
{
    //�����������thisָ�룬ʵ����Ҳ���������������ɲ��������
    real += right.real;
    imag += right.imag;
    return (*this); //���ϸ�ֵ�����ֵҲ���������
}
Complex operator+(Complex &left, Complex &right)
{
    //������Ԫ������û��this���������������ɲ�����ʽ����
    //+�����㲻��ı��������ı�����ֵ����+����������Ҫ�¹�����������(���ﺯ������ֵ���Ͳ���������)
    Complex t;
    t.real = left.real + right.real;
    t.imag = left.imag + right.imag;
    return t;
    //or: Complex t(left); t+=right; return t;
    //or: return Complex(left.real + right.real,left.imag + right.imag);
}
Complex operator-(Complex &left, Complex &right)
{
    //ͬoperator+����
    return Complex(left.real - right.real, left.imag - right.imag);
}
void Complex::show()
{
    cout << "(" << real << "," << imag << ")" << endl;
}
float Complex::operator*(Complex &right)
{
    return real * right.real + imag * right.imag;
}
Complex &operator-=(Complex &left, Complex &right)
{
    //��Ԫ������û��this���������������ɲ�����ʽ����
    //-=����Ҫ�ı����������ֵ��-=���ʽ��ֵ�������������
    //����������ɲ�������ģ��������������Ǻ����������ڱ�����������������ʽ����
    left.real -= right.real;
    left.imag -= right.imag;
    return left;
}

int main()
{
    Complex C1(1.1, 2.2);
    Complex C2 = C1; //�������C2�ĸ��ƹ��캯��
    C2.show();
    Complex C3;
    C3 = C2 = C1; //�������C2��operator=��C3��operator=
    C3.show();
    C3 += C2 += C1; //�������C2��operator+=��C3��operator+=
    C2.show();
    C3.show();
    C3 -= C2 -= C1; //�������C2��operator-=��C3��operator-=
    Complex C4;
    C4 = C2 + C1; //�������C2��operator+��C4��operatr=��C1��C2��ֵ����仯

    float v = C1 * C2; //�������C1��operator*
}