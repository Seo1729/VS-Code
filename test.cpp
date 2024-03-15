#include <iostream>
using namespace std;

class Tower {
    private:
        int height;
    public:
        Tower(); 
        Tower(int height);
        int getHeight();
};

Tower::Tower() {
    height = 1;
}

Tower::Tower(int height) {
    this->height = height;
}

int Tower::getHeight() {
    return height;
}

int main()
{
    Tower mytower;
    Tower seoultower(100);
    cout << "높이는 " << mytower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoultower.getHeight() << "미터" << endl;
}