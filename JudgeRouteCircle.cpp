class Pointt{
    public:
    int x,y;
    Pointt(int x=0,int y=0):x(x),y(y){}
    Pointt operator+(const Pointt &a);
    bool operator==(const Pointt &a);
   // Pointt operator=(const Pointt &a);
};

class Solution {
public:
    bool judgeCircle(string moves) {
        Pointt *a=new Pointt(0,0);
        map<char,Pointt> m;
        m['U']=Pointt(0,1);
        m['R']=Pointt(1,0);
        m['D']=Pointt(0,-1);
        m['L']=Pointt(-1,0);
        for(int i=0;i<moves.size();i++){
            for(map<char,Pointt>::iterator it=m.begin(); it!=m.end(); ++it){
                if(moves[i] == it->first){
                    *a = *a + it->second;
                    break;
                }
            }
        }
        if(*a == Pointt(0,0))
            return true;
        else
            return false;
    }
};

Pointt Pointt::operator+(const Pointt &a){
    this->x = this->x + a.x;
    this->y = this->y + a.y;
    return *this;
}

bool Pointt::operator==(const Pointt &b){
    if( this->x == b.x && this->y == b.y){
        return true;
    }
    else return false;
}
/*
Pointt Pointt::operator=(const Pointt &a){
    this->x = a.x;
    this->y = a.y;
    return *this;
}*/
