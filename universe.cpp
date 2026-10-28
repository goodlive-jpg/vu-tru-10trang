#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

struct Planet {
    string name;
    double distanceAU;
    int orbitalPeriodDays;
    string description;
};

class UniverseSimulator {
private:
    vector<Planet> planets;
    
public:
    UniverseSimulator() {
        planets = {
            {"Sao Thủy", 0.39, 88, "Hành tinh gần Mặt Trời nhất"},
            {"Sao Kim", 0.72, 225, "Hành tinh nóng nhất"},
            {"Trái Đất", 1.0, 365, "Hành tinh xanh - nơi có sự sống"},
            {"Sao Hỏa", 1.52, 687, "Hành tinh Đỏ"},
            {"Sao Mộc", 5.2, 4333, "Hành tinh khí khổng lồ lớn nhất"},
            {"Sao Thổ", 9.54, 10759, "Hành tinh có vành đai đẹp"},
            {"Sao Thiên Vương", 19.18, 30687, "Hành tinh nghiêng đặc biệt"},
            {"Sao Hải Vương", 30.06, 60190, "Hành tinh xa nhất"}
        };
    }
    
    void simulateBigBang() {
        cout << string(60, '=') << endl;
        cout << "SIMULATION BIG BANG - VŨ TRỤ KHỞI NGUYÊN" << endl;
        cout << string(60, '=') << endl;
        
        vector<pair<string, int>> timeline = {
            {"T = 0s: Điểm kỳ dị", 1},
            {"T = 10^-43s: Thời gian Planck", 1},
            {"T = 10^-36s: Lạm phát vũ trụ", 1},
            {"T = 10^-12s: Các lực tách ra", 1},
            {"T = 10^-6s: Hạt quark-hadron", 1},
            {"T = 1-3 phút: Nucleosynthesis", 1},
            {"T = 380000 năm: Tái tổ hợp (CMB)", 1},
            {"T = 200-500M năm: Pop III stars", 1},
            {"T = 13.8 tỷ năm: Hiện tại", 1}
        };
        
        for(auto &t : timeline) {
            cout << t.first << endl;
            this_thread::sleep_for(chrono::milliseconds(t.second * 800));
        }
        cout << string(60, '=') << endl;
    }
    
    void displaySolarSystem() {
        cout << "\n" << string(60, '=') << endl;
        cout << "HỆ MẶT TRỜI VỚI ANIMATION ORBIT" << endl;
        cout << string(60, '=') << endl;
        cout << left << setw(15) << "Hành tinh" 
             << setw(15) << "Khoảng cách(AU)" 
             << setw(20) << "Chu kỳ quỹ đạo"
             << "Mô tả" << endl;
        cout << string(60, '-') << endl;
        
        for(auto &p : planets) {
            cout << left << setw(15) << p.name
                 << setw(15) << fixed << setprecision(2) << p.distanceAU
                 << setw(20) << to_string(p.orbitalPeriodDays) + " ngày"
                 << p.description << endl;
        }
        cout << string(60, '=') << endl;
    }
    
    void animateOrbit() {
        cout << "\nMÔ PHỎNG QUỸ ĐẠO (5 GIÂY)..." << endl;
        for(int t = 0; t < 50; t++) {
            cout << "\r";
            for(int i = 0; i < (int)planets.size(); i++) {
                double angle = (t * 0.2) / (planets[i].orbitalPeriodDays / 1000.0);
                int pos = (int)(10 + planets[i].distanceAU * 3 + sin(angle) * 2);
                cout << string(pos, ' ') << "o ";
            }
            cout << "☉" << flush;
            this_thread::sleep_for(chrono::milliseconds(100));
        }
        cout << "\n\nHoàn thành!" << endl;
    }
};

int main() {
    UniverseSimulator sim;
    sim.simulateBigBang();
    sim.displaySolarSystem();
    sim.animateOrbit();
    cout << "\nCompile: g++ -std=c++17 universe.cpp -o universe && ./universe" << endl;
    return 0;
}
