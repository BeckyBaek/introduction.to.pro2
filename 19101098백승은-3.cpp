#include <iostream> 
using namespace std;

class HotDogStand
{
public:
    HotDogStand();
    HotDogStand( int newID, int newNumSold);
    int GetID();
    void SetID(int newID);
    void JustSold();
    int GetNumSold();
    static int GetTotalSold();

private:
    static int totalSold;
    int numSold;
    int ID;
};

int HotDogStand::totalSold=0;

HotDogStand::HotDogStand(){
    ID=0;
    numSold=0;
}

HotDogStand::HotDogStand(int newID, int newNumSold){
    ID= newID;
    numSold =newNumSold;
    totalSold += numSold;
}

int HotDogStand::GetID(){
    return ID;
}

void HotDogStand::SetID(int newID){
    ID=newID;
}

void HotDogStand::JustSold(){
    numSold++;
    totalSold++;
}

int HotDogStand::GetNumSold(){
    return numSold;
}

int HotDogStand::GetTotalSold(){
    return totalSold;
}

int main() {
    HotDogStand s1(1, 0);
    HotDogStand s2(2, 0);
    HotDogStand s3(3, 0);

    s1.JustSold();
    s2.JustSold();
    s1.JustSold();

    std::cout << "When s1.JustSold(), s2.JustSold(), s1.JustSold();" << std::endl;
    std::cout << "Stand 1 sold " << s1.GetNumSold() << std::endl;
    std::cout << "Stand 2 sold " << s2.GetNumSold() << std::endl;
    std::cout << "Stand 3 sold " << s3.GetNumSold() << std::endl;
    std::cout << "Total sold = " << HotDogStand::GetTotalSold() << std::endl;

    s3.JustSold();
    s1.JustSold();  

    std::cout << "When s3.JustSold(), s1.JustSold()" << std::endl;
    std::cout << "Stand 1 sold " << s1.GetNumSold() << std::endl;
    std::cout << "Stand 2 sold " << s2.GetNumSold() << std::endl;
    std::cout << "Stand 3 sold " << s3.GetNumSold() << std::endl;
    std::cout << "Total sold = " << HotDogStand::GetTotalSold() << std::endl;

    return 0;
}
