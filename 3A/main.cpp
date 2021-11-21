#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

struct Point{
    int x, y, indexPre;

    Point(int x1 = 0, int y1 = 0)
    {
        x = x1;
        y = y1;
    }

    bool operator!=(Point a)
    {
        return x != a.x || y != a.y;
    }

};

string s, t;
int moveAround[8][2] = {{-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}};
string index[8] = {"LU", "U", "RU", "R", "RD", "D", "LD", "L"};
Point start, finish;

Point toPoint(string a)
{
    int first = (a[0] - '0') - 48;
    int second = (int)a[1] - 48;
    return Point(first, second);
}

void BFS(Point start)
{
    queue<Point> q;
    vector<int> path;
    bool visited[9][9];
    int pre[9][9];
    Point prePoint[9][9];

    memset(visited, 0, sizeof visited);

    pre[start.x][start.y] = -1;
    prePoint[start.x][start.y] = start;

    q.push(start);
    visited[start.x][start.y] = true;

    while(!q.empty())
    {
        Point next = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int newX = next.x + moveAround[i][0];
            int newY = next.y + moveAround[i][1];
            if (newX >= 1 && newX <= 8 && newY >= 1 && newY <= 8 && visited[newX][newY] == false)
            {
                visited[newX][newY] = true;
                Point temp = Point(newX, newY);

                pre[newX][newY] = i;
                prePoint[newX][newY] = next;

                q.push(temp);
            }
        }
    }

    Point s = finish;
    while (s != start)
    {
        path.push_back(pre[s.x][s.y]);
        s = prePoint[s.x][s.y];
    }

    reverse(path.begin(), path.end());
    cout << path.size() << "\n";

    for (int it:path)
    {
        cout << index[it] << "\n";
    }

}

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> s >> t;
    start = toPoint(s);
    finish = toPoint(t);
    BFS(start);
    return 0;
}
