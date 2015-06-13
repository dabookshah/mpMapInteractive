#ifndef COLOUR_HEADER_GUARD
#define COLOUR_HEADER_GUARD
#include <QColor>
#include <QVector>
namespace mpMapInteractive
{
	static const int nColours = 100;
	void constructColourTable(int n, QVector<QRgb>& vector);
}
#endif