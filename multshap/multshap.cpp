#include "msoftcon.h"

class Shape {
protected:
	int xCo, yCo;
	color fillcolor;
	fstyle fillstyle;

public:
	Shape() : xCo(0), yCo(0), fillcolor(cWHITE), fillstyle(SOLID_FILL)
	{

	}

	Shape(int x, int y, color fc, fstyle fs) : xCo(x), yCo(y), fillcolor(fc), fillstyle(fs)
	{

	}

	void draw() const
	{
		set_color(fillcolor);
		set_fill_style(fillstyle);
	}
};