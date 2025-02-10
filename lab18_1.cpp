#include <algorithm>
using namespace std;

struct Rect {
    double x, y, w, h;
};

double overlap(const Rect& R1, const Rect& R2) {
    double R1_right = R1.x + R1.w;
    double R1_bottom = R1.y - R1.h;
    double R2_right = R2.x + R2.w;
    double R2_bottom = R2.y - R2.h;

    double x_overlap = max(0.0, min(R1_right, R2_right) - max(R1.x, R2.x));
    double y_overlap = max(0.0, min(R1.y, R2.y) - max(R1_bottom, R2_bottom));

    return x_overlap * y_overlap;
}
