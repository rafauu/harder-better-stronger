#include "StrongType.hpp"

class ExampleClass
{
public:
    StrongType(double, Width);
    StrongType(double, Height);

    double exampleMethod(Width width, Height height)
    {
	return width.get() * height.get();
    }
};
