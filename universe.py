#!/usr/bin/env python3
import math
import time
import os

class Universe:
    def __init__(self):
        self.planets = [
            {"name": "Sao Thủy", "distance": 0.39, "period": 88, "color": "gray"},
            {"name": "Sao Kim", "distance": 0.72, "period": 225, "color": "yellow"},
            {"name": "Trái Đất", "distance": 1.0, "period": 365, "color": "blue"},
            {"name": "Sao Hỏa", "distance": 1.52, "period": 687, "color": "red"},
            {"name": "Sao Mộc", "distance": 5.2, "period": 4333, "color": "orange"},
            {"name": "Sao Thổ", "distance": 9.54, "period": 10759, "color": "gold"},
            {"name": "Sao Thiên Vương", "distance": 19.18, "period": 30687, "color": "cyan"},
            {"name": "Sao Hải Vương", "distance": 30.06, "period": 60190, "color": "blue"}
        ]
    
    def big_bang_simulation(self):
        print("=" * 50)
        print("MÔ PHỎNG VỤ NỔ BIG BANG")
        print("=" * 50)
        print("t = 0: Điểm kỳ dị - Nhiệt độ vô cực, mật độ vô cực")
        time.sleep(1)
        print("t = 10^-43s: Thời gian Planck - Lực hấp dẫn tách ra")
        time.sleep(1)
        print("t = 10^-36s: Kỷ nguyên lạm phát vũ trụ")
        time.sleep(1)
        print("t = 10^-6s: Quark kết hợp thành proton, neutron")
        time.sleep(1)
        print("t = 3 phút: Tổng hợp hạt nhân nguyên thủy (H, He)")
        time.sleep(1)
        print("t = 380000 năm: Nguyên tử hình thành - Bức xạ CMB")
        time.sleep(1)
        print("t = 200-500 triệu năm: Sao và thiên hà đầu tiên")
        time.sleep(1)
        print("t = 13,8 tỷ năm: Vũ trụ ngày nay")
        print("=" * 50)
    
    def show_solar_system(self):
        print("\n" + "=" * 50)
        print("HỆ MẶT TRỜI")
        print("=" * 50)
        print(f"{'Hành tinh':<15} {'Khoảng cách (AU)':<18} {'Chu kỳ (ngày)':<15} {'Màu sắc'}")
        print("-" * 50)
        for p in self.planets:
            print(f"{p['name']:<15} {p['distance']:<18} {p['period']:<15} {p['color']}")
        print("=" * 50)
    
    def planet_info(self, name):
        info = {
            "Sao Thủy": "Gần Mặt Trời nhất, không khí quyển, ngày dài hơn năm",
            "Sao Kim": "Nóng nhất, hiệu ứng nhà kính cực mạnh, quay ngược",
            "Trái Đất": "Duy nhất có sự sống, 71% nước, từ trường bảo vệ",
            "Sao Hỏa": "Hành tinh đỏ, có nước đá, núi Olympus Mons lớn nhất",
            "Sao Mộc": "Khí khổng lồ, Vết Đỏ Lớn, 79+ vệ tinh",
            "Sao Thổ": "Vành đai nổi tiếng, mật độ thấp hơn nước",
            "Sao Thiên Vương": "Nghiêng 98 độ, màu xanh lam do metan",
            "Sao Hải Vương": "Gió mạnh nhất, màu xanh đậm"
        }
        print(f"\n{info.get(name, 'Không có thông tin')}")

if __name__ == "__main__":
    u = Universe()
    u.big_bang_simulation()
    u.show_solar_system()
    print("\nThực thi: python3 universe.py")
