// shape.h: Base class header

class rect // Base class
{
protected:
    float length, width, area;

public:
    rect(float l, float w)
    {
        length = l;
        width = w;
    }

    void calArea()
    {
        area = length * width;
    }

    void showArea()
    {
        std::cout << "\tArea = " << area << std::endl;
    }
};