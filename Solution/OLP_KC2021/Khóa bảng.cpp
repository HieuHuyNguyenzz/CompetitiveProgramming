// Sol 6/20 test
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};

vector<Point> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int h, w, k;
vector<string> board;
set<vector<Point>> unique_polyominoes;

void normalize(vector<Point>& shape) {
    int min_x = shape[0].x, min_y = shape[0].y;
    for (const auto& p : shape) {
        min_x = min(min_x, p.x);
        min_y = min(min_y, p.y);
    }
    for (auto& p : shape) {
        p.x -= min_x;
        p.y -= min_y;
    }
    sort(shape.begin(), shape.end());
}

void generate_polyominoes(vector<Point>& shape) {
    if (shape.size() == k) {
        normalize(shape);
        unique_polyominoes.insert(shape);
        return;
    }
    
    set<Point> current_points(shape.begin(), shape.end());
    for (const auto& p : shape) {
        for (const auto& dir : directions) {
            Point new_point = {p.x + dir.x, p.y + dir.y};
            if (current_points.count(new_point) == 0) {
                shape.push_back(new_point);
                generate_polyominoes(shape);
                shape.pop_back();
            }
        }
    }
}

bool can_place(const vector<Point>& shape, int x, int y) {
    for (const auto& p : shape) {
        int nx = x + p.x, ny = y + p.y;
        if (nx < 0 || nx >= h || ny < 0 || ny >= w || board[nx][ny] != '#') {
            return false;
        }
    }
    return true;
}

long long count_placements() {
    long long count = 0;
    for (const auto& polyomino : unique_polyominoes) {
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (can_place(polyomino, i, j)) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    cin >> h >> w >> k;
    board.resize(h);
    for (int i = 0; i < h; ++i) {
        cin >> board[i];
    }

    vector<Point> initial_shape = {{0, 0}};
    generate_polyominoes(initial_shape);

    long long result = count_placements();
    cout << result << endl;

    return 0;
}
