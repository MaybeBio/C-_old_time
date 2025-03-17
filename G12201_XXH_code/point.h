#pragma once

//����
class Point
{
    float c[2]; //�����꣬c[0]������,c[1]������
public:
    Point(float x = 0, float y = 0);
    void setCordinate(float x, float y);
    float getX();
    float getY();
    static float distance(Point &a, Point &b);
};

//������ࣺ������߹��ɵķ��ƽ��
class Polygon
{
    Point *ps; //���飬���趯̬����
    int count; //������
public:
    Polygon();
    Polygon(Polygon &);
    ~Polygon();
    void addPoint(float x, float y);
    void addPoint(const Point &);
    void addPoint(Point p[], int num); //ͬʱ���Ӷ��
    float area();                      //��������������ٶ���͹�ģ�
};