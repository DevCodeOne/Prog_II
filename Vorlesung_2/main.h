#ifndef __main_header__
#define __main_header__

class point {
	public :
		point(double x = 0, double y = 0) : m_x(x), m_y(y) {}
		double get_x() const { return m_x; }
		double get_y() const { return m_y; }
	private :
		double m_x; 
		double m_y;
};

#endif


