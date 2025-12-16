#include <iostream>

int main()
{
    struct Point
    {
        int x;
        int y;
        ~Point()
        {
            std::cout << "พ่้อยกำลังโดนทำลาย" << std::endl;
        }
        int sum()
        {
            return x + y;
        }
        int diff()
        {
            return x - y;
        }
        int prod()
        {
            return x * y;
        }
        int quot()
        {
            return x / y;
        }
        void fourDirections(int distance)
        {
            std::cout << "Up: (" << x << ", " << y + distance << ")\n";
            std::cout << "Down: (" << x << ", " << y - distance << ")\n";
            std::cout << "Left: (" << x - distance << ", " << y << ")\n";
            std::cout << "Right: (" << x + distance << ", " << y << ")\n";
        }
        void eightDirections(int distance)
        {
            std::cout << "Up-Left: (" << x - distance << ", " << y + distance << ")\n";
            std::cout << "Up-Right: (" << x + distance << ", " << y + distance << ")\n";
            std::cout << "Down-Left: (" << x - distance << ", " << y - distance << ")\n";
            std::cout << "Down-Right: (" << x + distance << ", " << y - distance << ")\n";
        }

    } p1;
    int x0, y0;
    for (x0 = 1; x0 <= 10; x0++)
    {
        y0 = x0 + 1;
        p1 = {x0, y0};
        std::cout << "(" << p1.x << ", " << p1.y << ")" << std::endl;
        std::cout << " Sum: " << p1.sum() << std::endl;
        std::cout << " Diff: " << p1.diff() << std::endl;
        std::cout << " Prod: " << p1.prod() << std::endl;
        std::cout << " Quot: " << p1.quot() << std::endl;
        p1.fourDirections(3);
        p1.eightDirections(3);
    }
}
