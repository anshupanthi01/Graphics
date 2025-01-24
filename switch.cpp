#include <graphics.h>
#include <iostream>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int choice;
    cout << "Choose a shape to draw:\n";
    cout << "1. Arc\n" << "\ti.circle arc\n" << "\tii. ellipse arc\n";
    cout << "2. Pie Slice\n";
    cout << "3. Bar\n";
    cout << "4. Rectangle\n";
    cout << "5. 3D Bar\n";
    cout << "Enter your choice: ";
    cin >> choice;

    int x, y, radius, start_angle, end_angle, left, top, right, bottom, depth;

    switch (choice) {
        case 1: 
		// Draw Arc
            cout << "Enter center coordinates (x y): ";
            cin >> x >> y;
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Enter start angle and end angle: ";
            cin >> start_angle >> end_angle;

            setcolor(RED);
            arc(x, y, start_angle, end_angle, radius);
            break;

        case 2: 
		// Draw Pie Slice
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
		// Draw Bar
            cout << "Enter top left and bottom right coordinates (left top right bottom): ";
            cin >> left >> top >> right >> bottom;

            setcolor(GREEN); 
            setfillstyle(SOLID_FILL, GREEN); 
            bar(left, top, right, bottom);
            break;

        case 4: 
		// Draw Rectangle
            cout << "Enter top left and bottom right coordinates (left top right bottom): ";
            cin >> left >> top >> right >> bottom;
            
            setcolor(YELLOW); 
            rectangle(left, top, right, bottom);
            break;

        case 5: // Draw 3D Bar
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
    getch(); 
    closegraph();
    return 0;
}

         

