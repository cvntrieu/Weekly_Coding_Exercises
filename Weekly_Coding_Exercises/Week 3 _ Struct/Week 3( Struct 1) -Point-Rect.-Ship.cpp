
#include <iostream>

using namespace std;

struct Point {

	int x;
	int y;
};


struct Rect {

	int x;
	int y;
	int w;
	int h;

	bool contains(const Point p) {

		return ((x <= p.x) && (p.x <= x + w)
			&& (p.y >= y) && (p.y <= y + h));
	}
};


struct Ship {

	Rect coordinates;
	string id;
	double dx;
	double dy;

	void move() {

		coordinates.x += dx;
		coordinates.y += dy;
	}

	void display(const Ship& ship) {

		cout << ship.coordinates.x << " " << ship.coordinates.y << endl;
	}
};


void print(const Point p) { // Pass-by-value

	cout << p.x << " " << p.y;
}


void otherPrint(const Point& p) { //Pass-by-reference

	cout << p.x << " " << p.y;
}


Point midPoint(const Point p1, const Point p2) {

	Point mid;
	mid.x = (p1.x + p2.x) / 2;
	mid.y = (p1.y + p2.y) / 2;

	return mid;
}



int main() {

	Point point;
	point.x = 10;
	point.y = 12;
	print(point);
	cout << endl;
	otherPrint(point);

	Point other;
	other.x = 1;
	other.y = 2;
	Point res = midPoint(point, other);
	cout << endl << res.x << " " << res.y << endl;

	int loop = 0;
	Ship ship;
	ship.coordinates.x = 1;
	ship.coordinates.y = 2;
	ship.dx = 2;
	ship.dy = 1;

	while (loop < 10) {

		ship.move();
		ship.display(ship);
		loop++;
	}

	return 0;
}