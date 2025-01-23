#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
  int gd = DETECT, gm;
  int ch;
  char m;
  int a, b, c, d, w, x, y, z, e, f, g, h;
  initgraph(&gd, &gm, (char *)"");
  do
  {
    cout << "Choose an option to perform operations on:\n";
    cout << "1. Point\n";
    cout << "2. Line\n";
    cout << "3. Rectangle\n";
    cout << "4. Square\n";
    cout << "5. Triangle\n";
    cout << "6. Circle\n";
    cout << "7. Ellipse\n";
    cout << "Enter your choice" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
      // Point
      cout << "Enter required data for a point: ";
      cin >> a >> b >> c;
      putpixel(a, b, c);
      break;
    }
    case 2:
    {
      // Line
      cout << "Enter required data for line: ";
      cin >> a >> b >> c >> d;
      line(a, b, c, d);
      break;
    }
    case 3:
    {
      // Rectangle
      cout << "Enter required data for rectangle: ";
      cin >> a >> b >> c >> d;
      rectangle(a, b, c, d);
      break;
    }
    case 4:
    {
      // Square
      cout << "Enter required data for square: ";
      cin >> a >> b >> c >> d;
      rectangle(a, b, c, d);
      break;
    }
    case 5:
    {
      // Triangle
      cout << "Enter required data for triangle: ";
      ;
      cin >> a >> b >> c >> d >> w >> x >> y >> z >> e >> f >> g >> h;
      line(a, b, c, d);
      line(w, x, y, z);
      line(e, f, g, h);
      break;
    }
    case 6:
    {
      // Circle
      cout << "Enter required data for circle: ";
      cin >> a >> b >> c;
      circle(a, b, c);
      break;
    }
    case 7:
    {
      // Ellipse
      cout << "Enter required data for ellipse: ";
      cin >> a >> b >> c >> d >> w >> x;
      ellipse(a, b, c, d, w, x);
      cout << "Ellipse drawn.\n";
      break;
    }
    default:
      cout << "Invalid Input";
    }
    cout << "Do you want to continue?(Y/N)\n";
    cin >> m;
  } while (m == 'y');
  closegraph();
  return 0;
}
