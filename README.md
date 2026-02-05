# ⚡ Smart Electricity Theft Detection System

An Arduino-based system that detects electricity theft by comparing input and output current values and raises an alert when illegal power tapping is detected.

---

## 📌 Problem Statement
Electricity theft causes major revenue loss, power outages, and safety hazards. Traditional detection methods are slow and inefficient.

---

## 💡 Solution
This project continuously monitors current at both the input and output of a power line. Any abnormal difference indicates unauthorized usage, triggering an alert.

---

## 🚀 Features
- Real-time current monitoring
- Electricity theft detection
- LCD status display
- Buzzer alert
- Low-cost smart meter concept

---

## 🧠 Working Principle
1. Measure input current
2. Measure output current
3. Compare both values
4. If difference exceeds threshold → theft detected
5. Alert triggered instantly

---

## 🔧 Hardware Components
- Arduino UNO
- ACS712 Current Sensors (2x)
- LCD Display (I2C)
- Buzzer
- Power supply
- Connecting wires

---

## 🔌 Pin Connections

| Component | Arduino Pin |
|--------|-------------|
| ACS712 Input | A0 |
| ACS712 Output | A1 |
| Buzzer | D8 |
| LCD SDA | SDA |
| LCD SCL | SCL |

---

## 📦 Software Requirements
- Arduino IDE
- LiquidCrystal_I2C library

---

## 🛠️ How to Run
1. Connect hardware as per pin table
2. Install required library
3. Upload code to Arduino
4. Connect load normally
5. Add illegal load after output sensor to simulate theft

---

## 🧪 Hackathon Demo Guide
- Normal load → no alert
- Add extra load → theft alert
- Buzzer ON + LCD message

---

## 📈 Future Enhancements
- GSM / IoT alert system
- Automatic power cutoff relay
- Cloud-based energy dashboard
- AI-based usage analysis

---

## 🏆 Applications
- Smart energy meters
- Electricity boards
- Smart grid systems
- Industrial power monitoring

---

## 📄 License
Open-source and free for educational and hackathon use.
# SMART-ELECTRICITY-THEFT-DETECTION-SYSTEM
