
#include <string>
#include <iostream>
using namespace std;
class All
{
  
private:
    int x, y, j;
public:
    All()
    {
        j = 8;
    }
    void SetJ(int j)
    {
        this->j = j;

    }
    int summ(int j)
    {
        if (j == 1) {
            return 1;
        }
        if (j > 1) {
            return j*summ(j-1);
        }
    }
    int GetX()
    {
        return x;

    }
    void SetX(int j)
    {
       this-> x = j;

    }
    int c, d;
    char string[6] = "Track";
    void Print()
    {
        cout << x << " " << y<<" "<<c << endl;
    }
    void Prin()
    {
        cout<<summ(j);
        
    }

};
int main()
{
    All S;
    S.c = 45;
    //S.SetJ();
    
   
    S.Prin();

}

