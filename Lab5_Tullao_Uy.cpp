#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Point3D {
    int x, y, z;
};

int manhattan_distance(const Point3D p1, const Point3D p2) {
    return abs(p1.x - p2.x) + abs(p1.y - p2.y) + abs(p1.z - p2.z);
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    vector<int> distances;

    for (int t = 0; t < numTestCases; t++) {
        int numPoints;
        cin >> numPoints;

        Point3D points[numPoints];
        for (int i = 0; i < numPoints; i++) {
            cin >> points[i].x >> points[i].y >> points[i].z;
        }

        for (int i = 0; i < numPoints - 1; i++) {
            distances.push_back(manhattan_distance(points[i], points[i+1]));
        }
    }

    for (int i = 0; i < distances.size(); i++) {
        cout << distances[i] << "\n";
    }

    return 0;
}
