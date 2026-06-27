# 🏛️ Smart Museum Security System

## 📌 Project Description

The Smart Museum Security System is an Arduino UNO based embedded security project designed to protect valuable museum artifacts from unauthorized access and theft.

The system continuously monitors human movement using a PIR Motion Sensor and ambient light conditions using a Photoresistor (LDR). Based on sensor readings, it classifies the security status into Safe, Warning, and Critical conditions. The system provides real-time alerts through LEDs, a buzzer, and a 16×2 LCD display.

This project demonstrates how embedded systems can be used in museums, art galleries, and exhibition halls to improve security and artifact protection.

---

## 🚀 Features

- Real-Time Museum Security Monitoring
- Motion Detection using PIR Sensor
- Ambient Light Monitoring using LDR
- LCD Status Display
- Visual Alert System
- Audible Alarm System
- Safe, Warning & Critical Status Indication
- Smart Security Automation

---

## 🛠 Components Used

- Arduino UNO
- PIR Motion Sensor
- Photoresistor (LDR)
- LCD 16×2 Display
- Piezo Buzzer
- Green LED
- Yellow LED
- Red LED
- 10kΩ Resistor
- 220Ω Resistors
- Breadboard
- Jumper Wires

---

## 🔌 Circuit Connections

### PIR Motion Sensor

| PIR Pin | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| OUT | D2 |

---

### Photoresistor (LDR)

| LDR Pin | Arduino |
|----------|----------|
| Terminal 1 | 5V |
| Terminal 2 | A0 |
| Terminal 2 | 10kΩ → GND |

---

### LEDs

#### Green LED

| LED | Arduino |
|------|----------|
| Anode (+) | D3 |
| Cathode (-) | 220Ω → GND |

#### Yellow LED

| LED | Arduino |
|------|----------|
| Anode (+) | D4 |
| Cathode (-) | 220Ω → GND |

#### Red LED

| LED | Arduino |
|------|----------|
| Anode (+) | D5 |
| Cathode (-) | 220Ω → GND |

---

### Piezo Buzzer

| Buzzer | Arduino |
|---------|----------|
| Positive (+) | D6 |
| Negative (-) | GND |

---

### LCD 16×2 Display

| LCD Pin | Arduino |
|----------|----------|
| VSS | GND |
| VDD | 5V |
| VO | GND |
| RS | D12 |
| RW | GND |
| E | D11 |
| D4 | A1 |
| D5 | A2 |
| D6 | A3 |
| D7 | A4 |
| A | 5V |
| K | GND |

---

## ⚙️ Working Principle

The system continuously monitors the museum environment using a PIR Motion Sensor and a Photoresistor (LDR).

### 🟢 Safe Condition

Conditions

- No motion detected
- LDR value greater than 700

Actions

- Green LED ON
- Buzzer OFF
- LCD displays:

```text
MUSEUM SAFE
ALL SECURE
```

---

### 🟡 Warning Condition

Conditions

- No motion detected
- LDR value between 400 and 700

Actions

- Yellow LED ON
- Buzzer OFF
- LCD displays:

```text
LOW LIGHT
CHECK ROOM
```

---

### 🔴 Critical Condition

Conditions

- Motion detected by PIR Sensor
- OR
- LDR value below 400

Actions

- Red LED ON
- Buzzer ON
- LCD displays:

```text
SECURITY
ALERT!
```

---

## 🏛 Applications

- Museums
- Art Galleries
- Exhibition Halls
- Historical Archives
- Jewelry Showrooms
- Cultural Heritage Centers
- Smart Building Security

---

## 📚 Learning Outcomes

- Arduino Programming
- PIR Motion Sensor Interfacing
- LDR Interfacing
- LCD Programming
- Alarm System Design
- Embedded Security Systems
- Smart Monitoring Applications

---

## 🔮 Future Enhancements

- ESP32 IoT Integration
- CCTV Camera Integration
- GSM SMS Alerts
- RFID-Based Staff Authentication
- Cloud-Based Monitoring
- Mobile Application Notifications
- Face Recognition Integration
- AI-Based Intrusion Detection

---

## 👨‍💻 Author

**MANAS VARANASI**

### 🚀 Day 30 of 45 Days Embedded Systems & Electronics Challenge

### 🏛 Project: Smart Museum Security System

Building One Project Every Day To Strengthen My Embedded Systems, IoT, Automation, and Security System Design Skills.

---

## 📂 Repository Information

**Repository Name**

day30-smart-museum-security-system

**Code File**

Smart_Museum_Security_System.ino

**Circuit Name**

Smart Museum Security System Circuit

**Project Type**

Embedded Systems | Security System | Arduino Project