class ParkingSystem {
    int b;
    int m;
    int s; 
public:
    ParkingSystem(int big, int medium, int small) {
        b= big;
        m=medium;
        s=small; 
    }
    
    bool addCar(int carType) {
        if(carType==1&&b>=1){
            b--; 
            return true; 
        }
        else if(carType==2&&m>=1){
            m--; 
            return true; 
        }
        else if(carType==3&&s>=1){
            s--; 
            return true; 
        }
        return false; 
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */