class Point;
class Solution {
public:
    bool judgeCircle(string moves) {
        Point *a=new Point();        
        map<char,Point> m;
        m['U']=Point(0,1);
        m['R']=Point(1,0);
        m['D']=Point(0,-1);
        m['L']=Point(-1,0);       
        for(int i=0;i<moves.size();i++){
            for(map<char,Point>::iterator it=m.begin(); it!=m.end(); ++it){
                if(moves[i] == it->first){
                    *a = *a + it->second;
                    break;
                }
            }   
        }
        if(*a == Point(0,0))
            return true;
        else
            return false;
    }
};

class Point{
    public:
    int x,y;    
    Point(int x=0,int y=0):x(x),y(y){}
    Point operator+(const Point &a,const Point &b);
    bool operator==(const Point &a);
}
Point Point::operator+(const Point &a,const Point &b){
    Point *res=new Point();
    res->x = a.x + b.x;
    res->y = a.y + b.y;
    return *res;
}

bool operator==(const Point &a){
    if(this->x == a.x && this->y == a.y){
        return true;
    }
    else return false;
}