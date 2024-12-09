#include <iostream>

using namespace std;

class Vector2d {
    int x, y;
public:
    Vector2d() {
        x = 5;
        y = 5;
    }
    Vector2d(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void PrintCoordinates() {
        cout << "X: " << this->x << "  Y: " << this->y << endl;
    }

    void setX(int x) {
        this->x = x;
    }

    int getX() {
        return this->x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getY() {
        return  this->y;
    }

    Vector2d operator+(const Vector2d& other) {
        return Vector2d(this->x + other.x, this->y + other.y);
    }

    Vector2d operator-(const Vector2d& other) {
        return Vector2d(this->x - other.x, this->y - other.y);
    }

    Vector2d operator++() {
        ++this->x;
        ++this->y;
        return *this;
    }

    Vector2d operator++(int) {
        Vector2d temp = *this;
        ++this->x;
        ++this->y;
        return temp;
    }

    Vector2d operator--() {
        --this->x;
        --this->y;
        return *this;
    }

    Vector2d operator--(int) {
        Vector2d temp = *this;
        --this->x;
        --this->y;
        return temp;
    }

    bool operator>(Vector2d& other) {
        return this->x > other.x && this->y > other.y;
    }

    bool operator>=(Vector2d& other) {
        return this->x >= other.x && this->y >= other.y;
    }

    bool operator<(Vector2d& other) {
        return this->x < other.x && this->y < other.y;
    }

    bool operator<=(Vector2d& other) {
        return this->x <= other.x && this->y <= other.y;
    }

    bool operator==(Vector2d& other) {
        return this->x == other.x && this->y == other.y;
    }

    friend ostream& operator<<(ostream& os, const Vector2d& book);
};

ostream& operator<<(ostream& os, const Vector2d& other) {
    os << "X: " << other.x << "  Y: " << other.y << endl;
    return os;
}

class Vector3d {
    int x, y, z;
public:
    Vector3d() {
        x = 8;
        y = 8;
        z = 8;
    }
    Vector3d(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void PrintCoordinates() {
        cout << "X: " << this->x << "  Y: " << this->y << "  Z: " << this->z << endl;
    }

    void setX(int x) {
        this->x = x;
    }

    int getX() {
        return this->x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getY() {
        return  this->y;
    }

    void setZ() {
        this->z = z;
    }

    int getZ() {
        return this->z;
    }

    Vector3d operator+(const Vector3d& other) {
        return Vector3d(this->x + other.x, this->y + other.y, this->z + other.z);
    }

    Vector3d operator-(const Vector3d& other) {
        return Vector3d(this->x - other.x, this->y - other.y, this->z - other.z);
    }

    Vector3d operator++() {
        ++this->x;
        ++this->y;
        ++this->z;
        return *this;
    }

    Vector3d operator++(int) {
        Vector3d temp = *this;
        ++this->x;
        ++this->y;
        ++this->z;
        return temp;
    }

    Vector3d operator--() {
        --this->x;
        --this->y;
        --this->z;
        return *this;
    }

    Vector3d operator--(int) {
        Vector3d temp = *this;
        --this->x;
        --this->y;
        --this->z;
        return temp;
    }

    bool operator>(Vector3d& other) {
        return this->x > other.x && this->y > other.y && this->z > other.z;
    }

    bool operator>=(Vector3d& other) {
        return this->x >= other.x && this->y >= other.y && this->z >= other.z;
    }

    bool operator<(Vector3d other) {
        return this->x < other.x && this->y < other.y && this->z < other.z;
    }

    bool operator<=(Vector3d& other) {
        return this->x <= other.x && this->y <= other.y && this->z <= other.z;
    }

    bool operator==(Vector3d& other) {
        return this->x == other.x && this->y == other.y && this->x == other.x;
    }

    friend ostream& operator<<(ostream& os, const Vector3d& book);
    friend Vector3d operator+(Vector3d& third, Vector2d& second);
    friend Vector2d operator+(Vector2d& second, Vector3d& third);
    friend Vector3d operator-(Vector3d& third, Vector2d& second);
    friend Vector2d operator-(Vector2d& third, Vector3d& second);
    friend bool operator>(Vector3d& third, Vector2d& second);
    friend bool operator>(Vector2d& third, Vector3d& second);
    friend bool operator<(Vector3d& third, Vector2d& second);
    friend bool operator<(Vector2d& third, Vector3d& second);
    friend bool operator>=(Vector3d& third, Vector2d& second);
    friend bool operator>=(Vector2d& third, Vector3d& second);
    friend bool operator<=(Vector3d& third, Vector2d& second);
    friend bool operator<=(Vector2d& third, Vector3d& second);
    friend bool operator==(Vector3d& third, Vector2d& second);
    friend bool operator==(Vector2d& third, Vector3d& second);
};

ostream& operator<<(ostream& os, const Vector3d& other) {
    os << "X: " << other.x << "  Y: " << other.y << "  Z: " << other.z << endl;
    return os;
}

Vector3d operator+(Vector3d& third, Vector2d& second) {
    return Vector3d(third.x + second.getX(), third.y + second.getY(), third.z);
}

Vector2d operator+(Vector2d& second, Vector3d& third) {
    return Vector2d(third.getX() + second.getX(), third.getY() + second.getY());
}

Vector3d operator-(Vector3d& third, Vector2d& second) {
    return Vector3d(third.x - second.getX(), third.y - second.getY(), third.z);
}

Vector2d operator-(Vector2d& second, Vector3d& third) {
    return Vector2d(third.getX() - second.getX(), third.getY() - second.getY());
}

bool operator<(Vector3d& third, Vector2d& second) {
    if (third.getX() < second.getX() && third.getY() < second.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator<(Vector2d& second, Vector3d& third) {
    if (second.getX() < third.getX() && second.getY() < third.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator>(Vector3d& third, Vector2d& second) {
    if (third.getX() > second.getX() && third.getY() > second.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator>(Vector2d& second, Vector3d& third) {
    if (second.getX() > third.getX() && second.getY() > third.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator<=(Vector3d& third, Vector2d& second) {
    if (third.getX() <= second.getX() && third.getY() <= second.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator<=(Vector2d& second, Vector3d& third) {
    if (second.getX() <= third.getX() && second.getY() <= third.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator>=(Vector3d& third, Vector2d& second) {
    if (third.getX() >= second.getX() && third.getY() >= second.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator>=(Vector2d& second, Vector3d& third) {
    if (second.getX() >= third.getX() && second.getY() >= third.getY()) {
        return true;
    }
    else {
        return false;
    }
}

bool operator==(Vector3d& third, Vector2d& second) {												   //
    if (third.getX() == second.getX() && third.getY() == second.getY()) {						   //
        return true;																			   //
    }																							   //
    else {																						   //
        return false;																			   //
    }																							   //
}

bool operator==(Vector2d& third, Vector3d& second) {												   //
    if (third.getX() == second.getX() && third.getY() == second.getY()) {						   //
        return true;																			   //
    }																							   //
    else {																						   //
        return false;																			   //
    }																							   //
}

int main() {
    cout << "Vector 2d: " << endl;
    Vector2d obj;
    Vector2d obj2 = Vector2d(23, 12);
    cout << "obj: ";
    obj.PrintCoordinates();
    cout << "obj2: ";
    obj2.PrintCoordinates();

    Vector2d obj3;
    obj3 = obj + obj2;
    cout << "+ obj3: ";
    obj3.PrintCoordinates();

    Vector2d obj4;
    obj4 = obj2 - obj3;
    cout << "- obj4: ";
    obj4.PrintCoordinates();

    if (obj2 < obj3) {
        cout << "< True" << endl;
    }
    else {
        cout << "< False" << endl;
    }
    if (obj2 > obj3) {
        cout << "> True" << endl;
    }
    else {
        cout << "> False" << endl;
    }
    if (obj2 <= obj3) {
        cout << "<= True: " << endl;
    }
    else {
        cout << "<= False: " << endl;
    }
    if (obj2 >= obj3) {
        cout << ">= True: " << endl;
    }
    else {
        cout << ">= False: " << endl;
    }
    if (obj2 == obj3) {
        cout << "== True: " << endl;
    }
    else {
        cout << "== False: " << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Vector 3d: " << endl;
    Vector3d obj3d;
    Vector3d obj3d2 = Vector3d(32, 12, 24);
    cout << "obj3d: ";
    obj3d.PrintCoordinates();
    cout << "obj3d2: ";
    obj3d2.PrintCoordinates();

    Vector3d obj3d3;
    obj3d3 = obj3d + obj3d2;
    cout << "+ obj3d3: ";
    obj3d3.PrintCoordinates();

    Vector3d obj3d4;
    obj3d4 = obj3d2 - obj3d3;
    cout << "- obj3d4: ";
    obj3d4.PrintCoordinates();

    if (obj3d < obj3d2) {
        cout << "< True" << endl;
    }
    else {
        cout << "< False" << endl;
    }
    if (obj3d > obj3d2) {
        cout << "> True" << endl;
    }
    else {
        cout << "> False" << endl;
    }
    if (obj3d <= obj3d2) {
        cout << "<= True: " << endl;
    }
    else {
        cout << "<= False: " << endl;
    }
    if (obj3d >= obj3d2) {
        cout << ">= True: " << endl;
    }
    else {
        cout << ">= False: " << endl;
    }
    if (obj3d == obj3d2) {
        cout << "== True: " << endl;
    }
    else {
        cout << "== False: " << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Vector 3d and Vector 2d: " << endl;
    Vector3d obj5 = obj3d + obj;
    cout << "+ obj5: ";
    obj5.PrintCoordinates();

    Vector3d obj6;
    obj6 = obj3d - obj;
    cout << "- obj6: ";
    obj6.PrintCoordinates();

    if (obj3d < obj) {
        cout << "< True" << endl;
    }
    else {
        cout << "< False" << endl;
    }
    if (obj3d > obj) {
        cout << "> True" << endl;
    }
    else {
        cout << "> False" << endl;
    }
    if (obj3d <= obj) {
        cout << "<= True: " << endl;
    }
    else {
        cout << "<= False: " << endl;
    }
    if (obj3d >= obj) {
        cout << ">= True: " << endl;
    }
    else {
        cout << ">= False: " << endl;
    }
    if (obj3d == obj) {
        cout << "== True: " << endl;
    }
    else {
        cout << "== False: " << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Transfer constructors: " << endl;
    Vector2d vectorObj2d = Vector2d(99, 99);
    Vector2d vectorObj2d2 = move(vectorObj2d);
    vectorObj2d2.PrintCoordinates();

    Vector3d vectorObj3d = Vector3d(33, 33, 33);
    Vector3d vectorObj3d2 = move(vectorObj3d);
    vectorObj3d2.PrintCoordinates();
}
