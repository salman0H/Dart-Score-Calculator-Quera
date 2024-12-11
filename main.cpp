#include <iostream>
#include <math.h>
using namespace std;
class point{
    friend int distance(point );
public:
    point(int _x=0,int _y=0)
    {
        setx(_x);
        sety(_y);
    }
    void setx(int _x)
    {
        x = _x;
    }
    void sety(int _y)
    {
        y = _y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

private:
    int x;
    int y;
};
int distance(point h)
{
    return sqrt((pow(2,h.x)) + (pow(2,h.y)));
}
int main() {
    int sum = 0;
    int score[11] = {10,9,8,7,6,5,4,3,2,1,0};;
    int n;
    cin >> n;
    int x,y;
    point dart[n];
    for(int t=0;t<n;t++)
    {
        cin >> x >> y;
        dart[t].setx(x);
        dart[t].sety(y);
    }

    for(int i=-10;i<n;i+20)
    {
        for(int j=10;j<n;j+20)
        {
            for(int t=0;t<11;t++)
            {
                if(distance(dart[t]) > i && distance(dart[t]) <= j)
                {
                    sum += score[t];
                }
            }
        }
        if(i == 190) break;
    }
    cout << sum;

    return 0;
}
