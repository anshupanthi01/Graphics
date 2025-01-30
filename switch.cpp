#include <graphics.h>
#include <iostream>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int choice;
    char a;
    do
    {
        cout << "Choose a shape to draw:\n";
        cout << "1. Arc\n";
        cout << "2. Pie Slice\n";
        cout << "3. Bar\n";
        cout << "4. Rectangle\n";
        cout << "5. 3D Bar\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int x, y, radius, start_angle, end_angle, left, top, right, bottom, depth;

        switch (choice)
        {
        case 1:
        {
            int ch;
            cout << "\t1. Circle Arc\n"
                 << "\t2. Ellipse Arc\n";
            cout << "Enter your choice: ";
            cin >> ch;

            cout << "Enter center coordinates (x y): ";
            cin >> x >> y;
            cout << "Enter start angle and end angle: ";
            cin >> start_angle >> end_angle;

            setcolor(RED);
            if (ch == 1)
            {
                cout << "Enter radius: ";
                cin >> radius;
                arc(x, y, start_angle, end_angle, radius);
            }
            else if (ch == 2)
            {
                int x_radius, y_radius;
                cout << "Enter x-radius and y-radius: ";
                cin >> x_radius >> y_radius;
                ellipse(x, y, start_angle, end_angle, x_radius, y_radius);
            }
            else
            {
                cout << "Invalid choice for arc type!" << endl;
            }
            break;
        }

        case 2:
            cout << "Enter center coordinates (x y): ";
            cin >> x >> y;
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Enter start angle and end angle: ";
            cin >> start_angle >> end_angle;

            setcolor(BLUE);
            setfillstyle(SOLID_FILL, BLUE);
            pieslice(x, y, start_angle, end_angle, radius);
            break;

        case 3:
            cout << "Enter top left and bottom right coordinates (left top right bottom): ";
            cin >> left >> top >> right >> bottom;

            setcolor(GREEN);
            setfillstyle(SOLID_FILL, GREEN);
            bar(left, top, right, bottom);
            break;

        case 4:
            cout << "Enter top left and bottom right coordinates (left top right bottom): ";
            cin >> left >> top >> right >> bottom;

            setcolor(YELLOW);
            rectangle(left, top, right, bottom);
            break;

        case 5:
            cout << "Enter top left and bottom right coordinates (left top right bottom): ";
            cin >> left >> top >> right >> bottom;
            cout << "Enter depth: ";
            cin >> depth;

            setcolor(CYAN);
            setfillstyle(SOLID_FILL, CYAN);
            bar3d(left, top, right, bottom, depth, 1);
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
        cout << "Do you want to continue?";
        cin >> a;
    } while (a == 'y');

    getch();
    closegraph();
    return 0;
}
