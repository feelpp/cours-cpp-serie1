#include <iostream>
class Point
{
public:
    Point(double x,double y,double z) : M_x(x),M_y(y),M_z(z) {}
    double x() const { return M_x; }
    double y() const { return M_y; }
    double z() const { return M_z; }
    Point& operator+=(Point const& pt)
    { M_x+=pt.x();M_y+=pt.y();M_z+=pt.z(); return *this; }
private:
    double M_x,M_y,M_z;
};
int main()
{
    Point p(5.2,10.1,30);
    Point q(10.5,20,36.3);
    p += q;
    std::cout << "x=" << p.x() << " y="<<p.y() << " z=" << p.z() << "\n";
    return 0;
}